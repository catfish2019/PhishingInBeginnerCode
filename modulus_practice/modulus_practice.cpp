#include <iostream>
using namespace std;

int main () {

	int var = 0;
	bool terminate = false; 
	int modulus = 0; 	

	do {

	cout << "input a semitone. Press 0 to escape" << endl; 	
	cin >> var; 



	for (int i = 0; i < 89; i++) {
		cout << i % 12 << endl;

	


	if (modulus == 0 )
		cout << "your note is c" << endl;
	
	else if (modulus == 1 )
		cout << "hour note is c#" << endl;

	else if (modulus == 2 )
		cout << "your note is d" << endl;

	else if (modulus == 3 )
		cout << "your note is d#" << endl;

	else if (modulus == 4 )
		cout << "your note is e" << endl;

	else if (modulus == 5 )
		cout << "your note is f" << endl;
	
	else if (modulus == 6 )
		cout << "your note is f#" << endl;
	
	else if (modulus == 7 )
		cout << "your note is g" << endl;

	else if (modulus == 8 )
		cout << "your note is g#" << endl;
	
	else if (modulus == 9 )
		cout << "your note is a" << endl;

	else if (modulus == 10) 
		cout << "your note is a#" << endl;

	else if (modulus == 11)
		cout << "your note is b" << endl;
		

	} while (!terminate ); 
	cout << "you have now quit" << endl;


	return 0; 

}
