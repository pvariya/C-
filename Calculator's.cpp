#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;

	cout << "enter any number :- ";
	cin >> a;
	cout << "enter any number :- ";
	cin >> b;
	
	cout << "Press 1 for +"<< endl;
	cout << "Press 2 for -"<< endl;
	cout << "Press 3 for *"<< endl;	
	cout << "Press 4 for /" << endl;
	cout << "Press 5 for %"<< endl;
	cout << "enter any number :- ";
	cin >> choice;

	
	switch(choice)
	{
		case 1:
				cout << "Addition is : "<< a+b;
				break;
		case 2:
				cout << "subtraction : " << a-b;
				break;
		case 3:
				cout << "multiplication :" << a*b;
				break;
		case 4:
				cout << "division : " << a/b;
				break;
		case 5:
				cout << "modulo :" << a%b;
				break;
		default :
				cout << "your number is wrong...";
	}
  	return 0;
}
