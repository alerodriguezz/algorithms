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
   
   cout << "Enter an input file name: " << endl;
   getline(cin, fileName);

    size=read_file(fileName, 0);
    
    //declare array with respective size
    int nums[size];

    for(i=1;i<size+1;i++)
    {
       nums[i-1]= read_file(fileName,i);    //-1 to accomodate for i starting at 1
    }
    //read through file 
    i=0;
    for(i;i<size;i++)
    {
        cout <<nums[i] << endl;
    }
   
//   //read numbers 
   
//     int *test =read_file(*fileName,*nums);
   
   
   
   //find min numbers 
    
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
