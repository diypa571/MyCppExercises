#include<iostream>
#include<string>


using namespace std;

int main() {


string str1 = "Iam a programmer";
//str1.begin();... this will return the first char of string...
cout <<  *(str1.begin())  << endl;
cout <<  *(str1.end()-1) << endl;


return 0;
}


