#include<iostream>
using namespace std;
int main()
{
	int divident;
	int divisor;
	int reminder;
	int qustient;
	
	cout << "Enter Divident: "; cin >> divident;
	cout << "Enter Divisor: "; cin >> divisor;
	reminder = divident % divisor;
	qustient = divident / divisor;
	
	cout << "Qustient: " << qustient << endl
		 << "Reminder: " << reminder;
	
	return 0;
}