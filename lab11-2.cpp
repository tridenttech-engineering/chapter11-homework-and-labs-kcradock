//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototypes
double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);


int main()
{
    double finishTimes[5] = {0.0};
    double averageTime = 0.0;
    double lowestTime = 0.0;

    //enter finish times
    for(int i = 0; i < 5; i++)
        {
            cout << "Time for race"<<i+1 << ": ";
            cin >> finishTimes[i];
        }//end for

   averageTime=getAverage(finishTimes,5);
    lowestTime=getLowest(finishTimes,5);
    cout << fixed << setprecision(1) << endl;
    cout << "The average finish time is " << averageTime << endl;
    cout << "The lowest finish time is " << lowestTime << endl;
    return 0;
}//end of main function    

//**************************************************
double getAverage(double times[], int numElements)
{
    double total = 0.0;

    for (int i = 0; i<numElements; i++)
        total += times[i];
    return total/numElements;
}

double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int i=1; i<numElements; i++)
        {
            if(times[i]<lowest)
            lowest = times[i];
        }
    return lowest;
}
    