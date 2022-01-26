// Euler_039_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Started 25 Jan 2022
// Solved 25 Jan 2022

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    // vector 1-1000, each placeholder represents # of solutions of that perimeter length
    vector<int> vect(1001,0); // vector of zeroes

    // Nested for loop to gen right triangles at certain perimeters
    for (int i = 1; i < 500; i++) // max i or j can be is 499, total is 500 or less
    {
        for (int j = 1; j < i + 1; j++)
        {
            if (i + j < 500)
            {
                int s = sqrt(i * i + j * j);
                if (s * s == (i * i + j * j))
                {
                    vect[s + i + j]++; // +1 right triangles at perimeter s + i + j
                }
            }
        } // end for loop j
    } // end for loop i

     // for (int i = 1; i < 1001; i++)
     //      cout << i << ": " << vect[i] << endl;
     // cout << endl;
    int max = distance(vect.begin(), max_element(vect.begin(), vect.end()));

    cout << "The perimeter 'p' with the most right triangles is " << max << endl;
}

// create vector of perfect squares of i from 1-1000
// for loop going from 0 to 
//  for every square value, substract every square
//   if result is in list of squares, 