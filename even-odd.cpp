#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter any number :- ";
	cin >> n;
	
	(n==0)
	  ? cout <<"Enter 0 or greater number"
	  : (n%2==0)
	   	? cout << "This number is Even..."
	   	: cout<< "This number is odd...";
	   	return 0;
}
