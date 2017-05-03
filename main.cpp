#include "Numpty.h"
#include <iostream>
using namespace std;

int main() {
	Numpty* Luke = new Numpty;
	Luke->awesome += 10;
	Luke->numpty += 10;

	cout << "Luke's awesome level is: " << Luke->awesome << endl;
	cout << "Luke's numpty level is: " << Luke->numpty << endl;

	delete Luke;
	return 0;
}
