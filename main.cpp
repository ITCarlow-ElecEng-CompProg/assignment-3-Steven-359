/**

25/09/17
Steven O' Brien
Standard Deviation Calculator
Exercise 3


 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Displays Progamme Title
    cout << "Standard Deviation Calculator" << "\n" ;

    //Variables declaired type double and int
    double sum, prod, mean, StanDev, array[10]= {0};
    int i;

    // Assigned values to variables
    sum = 0;
    prod = 0;
    i = 0 ;

    //For loop to allow user enter array of values
    for(i=0; i < 10; i++)
    {
        cout << "\n" << "Enter array of values:" ;
        cin >> array[i] ;

        sum = sum + array[i];
    }

    //Equation used to calculate mean
    mean = sum / 10 ;

    //Avearge value displayed to user
    cout << "\n\n" << "The average value is:" << mean ;

    //For loop that loops while conditions are met
    for (i=0; i< 10; i++)
    {
        prod= prod + pow(array[i]- mean,2)/9.0 ;
    }

    //Equation used to calculate Standard Deviation
    StanDev = sqrt(prod);

    //Standard Deviation displayed to user
    cout << "\n\n" << "The Standard Deviation is:" << StanDev << endl ;





    return 0;
}
