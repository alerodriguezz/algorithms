/*
Title: HW 2 Question 5
Abstract: C++ program called adj_matrix.cpp that converts a directed graph stored in an input file into an adjacency matrix format. 
Your program should get an input file name from a user first. Then, it should read the content of the file and display the graph in the 
adjacency matrix format. In the assignment, you can assume that the maximum number of vertices in the input graph is less than or equal to 50.
Class ID: 9241
Name: Alex Rodriguez
Date: 2/9/14
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

//Declare Functions 
int read_file(string file, int iterator);

int main(){
    string fileName;
    int vertices;
    int edges;
    vector<vector<int> > coords;
    
  cout << "Enter an input file name: " << endl;             //user input 
  cin >> fileName;
  
  vertices=read_file(fileName, 0);      //assign vertices and edges
  edges=read_file(fileName,1);
  
  cout<< "Number of vertices: " << vertices << endl;
    cout<< "Number of edges: " << edges << endl;
  
  int iterator=2;
  
  //assigns values to 2d vector
  for (int i=0; i< vertices; i++)
  {vector<int> temp;
  int value;
   int x=read_file(fileName,iterator);
   iterator++;
   int y=read_file(fileName,iterator);
   iterator++;
  	for (int j=0;j< vertices; j++)
  	{value=0;
  	  if (i==x&&j==y)
  	  {cout << "test";
  	    value=1;
  	  }
  		temp.push_back(value);
  		
  	}
  	coords.push_back(temp);
  }
  //test coords
  cout << "test coords" << endl;
  for (int i=0; i< coords.size();i++)
  {
  	for (int j=0;j<coords[i].size();j++)
  	{	
  		cout << coords[i][j] <<" ";
  	}
  	cout << endl;
  }
  
 
}

int read_file(string file, int i)						//input from .txt file
{	ifstream in_file;
	in_file.open(file.c_str());
	int n;
	int num;

	if (in_file.fail())				//error statements
	{
		cout << "Error: input file open failed.\n";
		return 0;
	}

	
	for (n=0;n<i+1;n++)			//while loop that cycles through scores
 	{
    	in_file>>num;
 	}
	return num;
	
}



