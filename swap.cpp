#include<iostream>
using namespace std;

int main()
{
	char n,n2,n3;
		cout<<"--------ENTER CAPITAL CHARACTER--------"<<endl;
	cout<<"enter character 1:- ";
	cin >> n;
	cout<<"enter character 2:- ";
	cin >> n2;
	if(n > 'M' || n2 > 'M')
	{
		cout << "Enter a character less than 'M'....";
	}
	else
	{	
		n3= n;
		n = n2;
		n2 = n3;
	 	
		cout << "--------swap character--------"<<endl;
		cout << "swap 1 :- "<< n << endl;
		cout << "swap 2 :- " <<n2 << endl;
	}

  	return 0;
}
