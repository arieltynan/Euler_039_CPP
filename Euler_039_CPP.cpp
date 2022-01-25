// Euler_039_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Started 25 Jan 2022

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    // vector of perfect squares
    vector<int> squares;
    for (int i = 1; i < 1000; i++)
    {
        squares.push_back(i * i);
    }
    
    // vector 1-1000, each placeholder represents # of solutions of that perimeter length
    vector<int> vect(1001,0); // vector of zeroes


    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            if(sqrt(i*i + j*j) == (i*i + j*j))
                vect[2*(i+j)]++;
        }
    }

    for (int i = 1; i < 1001; i++)
        cout << vect[i] << " ";
}

// create vector of perfect squares of i from 1-1000
// for loop going from 1000 to 0
//  for every square value, substract every square
//   if result is in list of squares, 