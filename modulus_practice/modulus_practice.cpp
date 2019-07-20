#include <iostream>
#include <string>
using namespace std;

int main () {

	int var = 0;
	bool terminate = false; 
	int modulus = 0; 	

	do {

	cout << "input a semitone. Press 0 to escape" << endl; 	
	cin >> var; 
	modulus = var % 12;
	

	if (var == 0)
		terminate = true; 
	
	else if string notes[12] = {"c", "c#", "d", "d#", "e", "f","f#" "g", "g#", "a", "a#","b"};	
		cout << notes [modulus] << endl;	

	} while (!terminate ); 
	cout << "you have now quit" << endl;


	return 0; 

}
