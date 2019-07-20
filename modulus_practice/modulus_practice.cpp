#include <iostream>
#include <string>
using namespace std;

int main () {

	int var = 0;
	bool terminate = false; 
	int modulus = 0; 	
	string notes[12] = {"a", "a#", "b", "c", "c#", "d","d#", "e", "f", "f#","g","g#"};
	
	do {

	cout << "input a semitone. Press 0 to escape" << endl; 	
	cin >> var; 
	modulus = var % 12;
	
	cout << notes [modulus] << endl;	 

	if (0 < var && var <= 12)
		cout << "the octave is c1" << endl;
	
	else if (13 <= var && var <= 24)
		cout << "the octave is c2" << endl;

	else if (25 <= var && var <= 36)
		cout << "the octave is c3" << endl;

	else if (37 <= var && var <= 48)
		cout << "the octave is c4" << endl;

	else if (49 <= var && var <= 60)
		cout << "the octave is c5" << endl;

	else if (61 <= var && var <= 72)
		cout << "the octave is c6" << endl;

	else if (73 <= var && var <= 84)
		cout << "the octave is c7" << endl;

	else if	(85 <= var && var <= 88)
		cout << "the octave is c8" << endl;
	
	else { terminate = true;
		 }	
	

	} while (!terminate ); 
	cout << "you have now quit" << endl;


	return 0; 

}
