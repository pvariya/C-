#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	cout<<"enter number  1 :- ";
	cin >> n1;
	cout<<"enter number 2 :- ";
	cin >> n2;
	cout <<"enter number 3:- ";
	cin >> n3;

	if(n1 < n2)
	{
		if(n1 < n3)
		{
			cout << "The minimum value is: "<< n1; 
		}
		else
		{
			cout << "The minimum value is: " << n3; 
		}
	}
	else
	{
		if(n2 < n3)
		{
			cout << "The minimum value is: "<< n2 ; 
		}
		else
		{
			cout << "The minimum value is: " << n3; 
		}
	}
	   	return 0;
}
