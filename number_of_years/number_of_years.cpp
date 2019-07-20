#include <iostream>
using namespace std;

int main () {


int minutes = 0;
float years = 0;
float days = 0;
bool terminate = false;

years = minutes/ (365*24*60);
days = (minutes % (24*60));


	cout << "enter the number of minutes and this cool program will convert them to years and days"<< endl;
	cout << "press 0 to quit" << endl;
	cin >> minutes;
	cout << minutes << endl;

	do {
	
	if (minutes == 0 )
		terminate = true;
	
	else if (days == 0 )
		cout << years << "years" << endl;

	else {
		cout << (years-(days/365)) << "years" << days << "days" << endl;
		}

	} while ( !terminate );
		cout << "you have now quit" << endl;





return 0; 

}
