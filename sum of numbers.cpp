//
//  1.cpp
//  28sep
//
//  Created by Mirna Sumopawiro on 9/28/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

/*Write a program that asks the user for a positive integer value.
 The program should use a loop to get the sum of all the integers from 1 up to the number entered.
 For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.*/


#include <iostream>
using namespace std;
int main ()
{
    int initialNumber = 1;
    int sum = 0;
    int number;
    
    cout << "Please insert a positive integer ";
    cin >> number;
    if (number < 0)
        cout << "Please input a positive integer\n";
    else
    {
    
        for (initialNumber; initialNumber <= number; initialNumber++)
        sum += initialNumber;
    
    cout << "The sum is " << sum << endl;
    }
    return 0;
    
}