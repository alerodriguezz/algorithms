/* 
Author: Alex Rodriguez 
ID:9241
Description: HW 1 Question 4
*/


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//Declare Functions 
int read_file(string file, int iterator);

int main() {
   string fileName;
   int i=0;   
   int size;
   int minDistance=0;
   int temp;
   int num1;
   int num2;
   
   cout << "Enter an input file name: " << endl;
   getline(cin, fileName);

    size=read_file(fileName, 0);
    
    //declare array with respective size
    int nums[size];

    //assign values to nums array 
    for(i=1;i<size+1;i++)
    {
       nums[i-1]= read_file(fileName,i);    //-1 to accomodate for i starting at 1
    }

    //sort numbers using comparison sort 
    int sortedNums[size];
    int count[size];
    int j;
    
    for(i=0;i<size;i++)
    {  
        count[i]=0;
    }
    
   for(i=0;i<size-1;i++)       //comparison sort
   {
       for (j=i+1;j<size;j++)
       {
           if (nums[i]<nums[j])
           {
               count[j]=count[j]+1;
           }
           else {
               count[i]=count[i]+1;
           }
       }
  }
  for(i=0;i<size;i++)
  {
      sortedNums[count[i]]=nums[i];
  }
   //find min numbers 
   
   
  
 for(i=0;i<size-1;i++)
 {
    temp=sortedNums[i+1]-(sortedNums[i]);
    if (temp<=minDistance||minDistance==0)
    {      num1= sortedNums[i+1];      
           num2= sortedNums[i];
           minDistance=temp;
     }
     
 }
 
  cout << "Minimum distance: " << minDistance << endl;
 cout << "Minimum distance is between " << num1<< " and "<< num2 << endl;
}

int read_file(string file, int i)								//input from .txt file
{	ifstream in_file;
	in_file.open(file);
	int n;
	int num;

	if (in_file.fail())				//error statements
	{
		cout << "Error: input file open failed.\n";
		exit(1);
	}

	
	for (n=0;n<i+1;n++)			//while loop that cycles through scores
 	{
    	in_file>>num;
 	}
	return num;
	
}
