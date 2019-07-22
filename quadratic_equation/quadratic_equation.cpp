# include <iostream>
# include <cmath>
using namespace std;

int main () {



//	HOW do i make this program continue to loop and have an exit command?? 

	float a = 0; 
	float b = 0; 
	float c = 0;

	

	cout << "Enter a, b, and c with spaces in between and this awesome program will find the roots for you imbicil human" << endl;
	cin >> a >> b >> c; 
//	cout << a << b << c << endl;
	
	float bsq = pow(b, 2.0);
	float disc = pow((bsq - (4*a*c)), 0.5);
//	cout << bsq << disc << endl;
	
	float r1 = ((-b + disc)/(2*a));	
	float r2 = ((-b - disc)/(2*a));
//	cout << "the equation roots are" << r1 << r2 << endl;

	if (disc > 0) 
		cout << "the equation has 2 roots: " << r1 << " and " << r2 << endl;

	else if (disc == 0)
	cout << "the equation has 1 root: " << r1 << endl;

	else {
	cout << "the equation has no real roots" << endl;
		} 
 


	return 0;

}
