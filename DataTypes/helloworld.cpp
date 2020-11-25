#include<iostream>

using namespace std;

/*
Boolean	bool
Character	char
Integer	int
Floating point	float
Double floating point	double
Valueless	void
Wide character	wchar_t

unsigned
signed
long
short
*/

// sizeoff is a c++ function



int main()
{
int numbers; // This for integers
float floatnumbers;  // 0.00000300000 or 2.342388E324 0r 0.12340909234
cout << sizeof(long int) <<endl;
cout << sizeof(double) <<endl;
cout << sizeof(char) <<endl;
cout << sizeof(string) <<endl;

cout<<" Enter a number...";

cin >> numbers;
cout << numbers;



return 0;
}
