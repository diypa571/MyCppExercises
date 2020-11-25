#include<iostream>

using namespace std;

int main() {


/*

int num[5] = {2,4,6,8,10};
cout<< num[4];
// This will return the 5th value... 10

*/



int num[5];
int sum;
for (int i=0; i <= 4; i++ )
{
cout << "Enter a number for the array" << endl;
cin >> num [i];
}


for (int i=0; i <= 4; i++ )
{
sum = num[i] + sum;
cout << num[i] << endl;
}


cout <<sum << endl;

return 0;
}
