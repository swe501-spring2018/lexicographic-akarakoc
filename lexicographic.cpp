//============================================================================
// Name        : Homework4.cpp
// Author      : Ali Karakoç
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Dynamic size array lexography, Ansi-style
//============================================================================

#include <iostream>

using namespace std;


int main() {

int seqnum;
int size;

cout << "Enter the sequence number you wish!:"<<endl;

cin >> seqnum ;

int *arraymatrix[seqnum];
int sizes[seqnum];

for(int i = 0; i < seqnum; i++)
{
	cout << "Enter the size of the sequence no-"<< i <<":"<<endl;
     cin >> size;
     sizes[i]=size;
     arraymatrix[i] = new int[size];
	 cout << "Enter the sequence elements-"<< i <<":"<<endl;
     for(int j = 0; j < size; j++){
         cin >> arraymatrix[i][j];
     }
     cout << "sequence-["<< i <<"]=[";
     for(int j = 0; j < size; j++){
    	if(j==size-1){
       	 cout<< "" << arraymatrix[i][j];
    	}
    	else{
       	 cout<< "" << arraymatrix[i][j]<<",";
    	}
     }
     cout <<"]"<< endl;

}

cout << "The array set that you entered:" << endl;

for (int i = 0; i < seqnum; ++i)
{

    for (int j = 0; j < sizes[i]; j++)
    {
        cout << arraymatrix[i][j] << ' ';
    }
    cout << endl;
}


int maxsortsize=seqnum*(seqnum-1)/2+1;

for(int k=0; k<=maxsortsize; k++){
        
      for(int i=0; i<seqnum-1 ; i++){
        int m=0;

		if(arraymatrix[i][m] > arraymatrix[i+1][m]){

			     int  *temp=arraymatrix[i];
			     arraymatrix[i]=arraymatrix[i+1];
			     arraymatrix[i+1]=temp;
                 int tempSize;
				 tempSize=sizes[i];
				 sizes[i]=sizes[i+1];
				 sizes[i+1]=tempSize;
		}
		if(arraymatrix[i][m] == arraymatrix[i+1][m]){
                while(arraymatrix[i][m] == arraymatrix[i+1][m]){
                m=m+1;			
                }
 	            if(arraymatrix[i][m] > arraymatrix[i+1][m]){
                 int  *temp=arraymatrix[i];
			     arraymatrix[i]=arraymatrix[i+1];
			     arraymatrix[i+1]=temp;
                 int tempSize;
				 tempSize=sizes[i];
				 sizes[i]=sizes[i+1];
				 sizes[i+1]=tempSize;
				 m=0;
               }
		}
		
     }

}
cout << "The sorted array set is:" << endl;

   for (int i = 0; i < seqnum; ++i)
   {

       for (int j = 0; j < sizes[i]; j++)
       {
           cout << arraymatrix[i][j] << ' ';
       }
       cout << endl;
   }
   
return 0;
}
