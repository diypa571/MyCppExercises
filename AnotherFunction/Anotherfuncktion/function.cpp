#include<iostream>
using namespace std;

int fact(int a) {

if(a <= 1) {
return 1;
}
else {
// Strange returning the fact(a-1)... What Happens???

return a * fact(a-1);
}
}



int main() {

cout << "Enter  a number... \n";
int s;
cin >> s;
int f =  fact(s);
cout << f;

return 0;
}
