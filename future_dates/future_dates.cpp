#include <iostream>
#include <string>
using namespace std;


int main () {

	
	int today = 0;
	int dayselapsed = 0;
	string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


	cout << "input a day in integer form. (ie: Sunday is 0, Monday is 1, etc...)" << endl;
	cin >> today;
	cout << "enter the number of days elapsed since today: " << endl;
	cin >> dayselapsed; 

	int futureday = today + dayselapsed; 


	cout << "Today is " << days [today] << " and the future day is " << days [futureday] << endl; 
		

	return 0;
}
