#include <iostream>
using namespace std;
int main()
{ 
int passenger, seats, filledseats, emptyseats;
	seats=50;
		cout <<	"Enter passengers amount"	<< endl;
	cin  >> passenger;
	filledseats=passenger % seats;
	emptyseats = seats - filledseats;
	cout <<"Last bus filled seats" << endl << filledseats << endl; 
		cout <<"Last bus emtpy seats " << endl<< emptyseats << endl;
	return 0;
	}
