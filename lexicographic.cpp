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

cout << "Enter the sequence number as you wish!:"<<endl;

cin >> seqnum ;

int** arraymatrix = new int*[seqnum];


for(int i = 0; i < seqnum; i++)
{
	 cout << "Enter the size of the sequence no-"<< i <<":"<<endl;
     cin >> size;
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
cout << arraymatrix[0] << endl;

for(int i = 0; i < seqnum-1; ++i)

      for( int k = i+1; k < seqnum; ++k)

      {

           int m=0;



         if(arraymatrix[i][m] > arraymatrix[k][m])

         {

           int * temp = arraymatrix[i];

           arraymatrix[i] = arraymatrix[k];

           arraymatrix[k] = temp;

         }



        if(arraymatrix[i][m] == arraymatrix[k][m]){

          while(arraymatrix[i][m] == arraymatrix[k][m]){

          m=m+1;

           }

           if(arraymatrix[i][m] > arraymatrix[k][m])

           {

             int temp = arraymatrix[i];

             arraymatrix[i] = arraymatrix[k];

             arraymatrix[k] = temp;

           }



      }

   }





return 0;

}
