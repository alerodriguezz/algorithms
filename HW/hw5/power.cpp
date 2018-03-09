/* 
Author: Alex Rodriguez 
ID:9241
Description: HW 5 Question 3

This program wil determine the power of an inputted number recursively
*/

#include <iostream>

using namespace std;

int power(int num);

int main () 
{
    int num;
    
    cout << "Please input a number: ";
    
    cin >> num;
    
    cout << power(num) << endl;
    
}

int power(int num)
{
    //base case
    if (num==1)
    {
        return (2);
    }
    
    
    //base operation
    return (2* power(num-1));
}