#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int test1,test2, test3, test4, test5;
	double average;
	cout << "Input test one: ";
	cin >> test1;

	cout << "Input test two: ";
	cin >> test2;
	
	cout << "Input test three: ";
	cin >> test3;
	
	cout << "Input test four: ";
	cin >> test4;
	
	cout << "Input test five: ";
	cin >> test5;

	average = (test1 + test2 + test3 + test4 + test5) / 5;
	cout << "Your average is: " << fixed << showpoint << setprecision(1) << average << endl;

	return 0;
}

