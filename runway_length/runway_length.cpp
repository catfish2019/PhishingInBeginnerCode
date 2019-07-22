# include <iostream>
# include <cmath>
using namespace std;

int main () {


float speed = 0;
float accel = 0;
bool terminate = false;


	do {

	cout << "welcome to the runway length program. follow prompts as they come. press esc to quit" << endl; 
	cout << "enter the speed in meter/sec" << endl;
	cin >> speed; 
	cout << speed << endl;
	
	cout << "enter the acceleration in meters/sec^2" << endl;
	cin >> accel;
	cout << accel << endl;

	//big question here: how to escape without accel == 0? 

	float spdsq = pow(speed, 2.0); 
	float length = ((spdsq)/(2*accel));
	cout << " your length is " << length << " meters " << endl;


	if ( accel == 0 )
		terminate = true;

	


	} while ( ! terminate ); 
	cout << "you have now quit" << endl;




	return 0; 

}
