#include <iostream>
using namespace std;

int main () {


int min = 0;
bool terminate = false;
 

	do {

	cout << "enter the number of minutes and this cool program will convert them to years and days"<< endl;
	cout << "press 0 to quit" << endl;
	cin >> min;
	
	//note that to convert min to years, divide by 60 min/hr, 24 hrs/day, 365 days/year
	//note that to get days, take remainder of years (which will be in minutes??) and divide by 60 min/hr, 24 hrs/day

	float years = ( min / (60*24*365));
	float days = ((min % (60*24*365))/(24*60));  
 
	cout << min << " minutes is " << years << " years and " << days << " days" << endl;

	if ( min == 0 )
		terminate = true;

	} while ( !terminate );
		cout << "you have now quit" << endl;



return 0; 

}
