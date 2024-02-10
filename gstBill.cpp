#include<iostream>
using namespace std;

int main()
{
	int n,gst,bill=0;
	cout<<"enter your bill :- ";
	cin >> n;
	cout<<"enter GST :- ";
	cin >> gst;
	
	bill = n * gst / 100;
	n += bill;
	
	cout << n ;
  	return 0;
}
