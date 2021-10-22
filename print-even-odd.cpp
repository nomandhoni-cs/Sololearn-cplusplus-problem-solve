#include <iostream>
using namespace std;
int main()
{
int num, a;
	num=1;
	cout << "Enter how far you want to go :   ";
	cin >> a;
	cout << "Odd numbers         " << "Even Numbers" << endl;
	while(num <= a){
	if(num % 2 == 0)
	{
	cout <<"                    "<< num <<" is Even"<< endl;	
	}
	else
	{
		cout << endl << num <<" is Odd" << endl;
	}
	num = num + 1;
	}
	return 0;	
	}
