/* 
Author: Alex Rodriguez 
ID:9241
Description: HW 4 Question 4

Knapsack Problem 
*/

#include <iostream>
#include <sstream>

using namespace std;

struct knapsack {   // Declare PERSON struct type  
 int weight;
 int value;
    
};   // Define object of type PERSON  

int main(){
int itemNum=0;
int capacity=0;

//get user input 
cout << "Enter a number of items: " << endl;
cin >> itemNum;

cout << "Enter knapsack capacity: " << endl;
cin >> capacity;

cout << "Enter weights and values of " << itemNum <<  "items: " << endl;
knapsack items[15];
for(int i=0;i<itemNum;i++)
{
    cout << "Item " << i << ": ";
    cin>> items[i].weight;
    cin>> items[i].value;
    
}
//display values 

for (int i=0;i<(itemNum*itemNum);i++)
{
    cout << "set " << i << ": {}     => capacity: " << items[i].weight << ", value: $" << items[i].value << endl;
}



//determine best value 


}


