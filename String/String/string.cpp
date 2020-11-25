#include<iostream>
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
#include  <string>

using namespace std;


int main() {

string name;


// Takes the empty character as input
cout << "Please enter your name: \n";

// Again Taking string as input
getline(cin, name);

// This actually prints the name
cout << "Hello, " << name   << " welcome to GfG !\n";

return 0;

}
