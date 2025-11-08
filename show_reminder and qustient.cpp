#include<iostream>
using namespace std;
int main()
{
	int divident;
	int divisor;
	int remainder;
	int quotient;
	
	cout << "Enter Divident: "; cin >> divident;
	cout << "Enter Divisor: "; cin >> divisor;
	remainder = divident % divisor;
	quotient = divident / divisor;
	
	cout << "Quotient: " << quotient << endl
		 << "Remainder: " << remainder;
	
	return 0;

}
