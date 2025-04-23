//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double, times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{
    double finishTimes[5] = {0.0};
    double average = 0.0;
    double lowest = 0.0;

    //enter finish times
    for(int i = 0; i < 5; i++)
        {
            cout << "Enter the finish time for runner #" << i+1 << ": ";
            cin >> finishTimes[i];
        }//end for

    //calculate average
    average = getAverage(finishTimes, 5);
    cout << "The average finish time is " << average << endl;
    //calculate lowest
    lowest = getLowest(finishTimes, 5);
    cout << "The lowest finish time is " << lowest << endl;
    return 0;
}  //end of main function

//**************************************************
double getAverage

    
    return 0;
}//end of main function    
