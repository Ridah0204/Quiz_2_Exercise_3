/*Exercise 3:
• Write a structure declaration named measurement, with
the following members :
• miles as an integer
• meters as long
• Write a structure declaration named Destination, with
the following members :
• City a 35 - element character array
• Distance a Measurement structure
• Define a variable of type Destination, and store the
following into it
• City : Dayton
• Miles : 70
• Meters : 114, 000*/


#include<iostream>

using namespace std;

struct Measurement {
	int miles;
	long meters;

};

struct Destination {
	char city[35];
	Measurement distance;

};

int main() {

	Destination place = { "Dayton", {70, 114000} };


	return 0;
}