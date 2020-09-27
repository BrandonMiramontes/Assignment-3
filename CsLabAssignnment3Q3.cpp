#include <iostream>
#include <cstdlib>  
#include <time.h>
using namespace std;

int main()
{
    int d1, d2, NUMBER_OF_SIDES;
    
    // put your code here to throw the dice for P1 and P2
   
    unsigned seed;
    srand(time(NULL));
  
    cout << "Enter the number of sides: ";
    cin >> NUMBER_OF_SIDES;
   
    d1 = rand() % NUMBER_OF_SIDES;
    cout << "d1 is: " << d1 << endl;
   
    d2 = rand() % NUMBER_OF_SIDES;
    cout << "d2 is: " << d2 << endl;

    // the following code makes comparison and determines the winner
    if (d1 > d2)
    {
        // put your code here for the case d1 is larger than d2
        cout << "The winner is d1" << endl;
    }

    if (d1 < d2)
    {
        // put your code here for the case d1 is larger than d2
        cout << "the winner is d2" << endl;
    }

    if (d1 == d2)
    {
        cout << "TIE!";
    }

    return 1;
}
