#include<iostream>
using namespace std;

// Why using functions??
// Becuase we can call and run the function many times without need writing new code
// This function has two arguments of integer


int plusfunction(int a, int b) {
double calc = a + b;
return calc;
}




int main() {
int a;
int b;

int result;
cout << "Enter the first parameter number";
cin >> a;
cout << "Enter the second parameter number";
cin >> b;
result = plusfunction(a,b);
cout << result <<endl;
// Now we send other parameters for the function...
// 4 and 3, as parameters for our arguments in the function..
result = plusfunction(4,3);
cout << result <<endl;
double X =0.123989182938;
cout << precision(X;

return 0;
}
