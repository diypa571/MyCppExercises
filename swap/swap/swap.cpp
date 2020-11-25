#include<iostream>
#include<string>
#include <boost/algorithm/string.hpp>
#include <string>

using namespace std;

int main() {

string str1 = "Iam a programmer";
string str2= "Iam an atheist";
//  (*str.begin())
//str1[6] = 'P';
// cout <<  str1;

//swap(str1,str2);


cout << str1 << "  ---" << *(str1.end()-1) << endl;
cout << str1 << "  ---" << str1.at(7) << endl;
cout  << str2.find("an") << endl;
cout << str1.substr(5,6) << endl;
str1.erase(str1.begin()+4, str1.begin()+9);
cout << str1 << endl;
// substr extractin information from
// From string---



return 0;
}
