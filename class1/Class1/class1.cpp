#include<iostream>
#include<string>
using namespace std;

class aliens  {

public:



aliens () {
cout <<"This  will be run automaticly,...  \n";
cout <<" When an object of the class is created...  \n";
}


void display() {
cout << "Aliens exist.... \n ";
}


void xx() {
cout << "xxxxx function  \n";
}


int addition(int a, int b) {
int c = a+b;
return c;
}

// When we private varaible,
//we need to make public function for them have
// access to them...
// IN this case,we create two functions, one for setting the varaible
// And another function for geting the variable...
// For setin, we can create first a void function..


void SetName (string x)  {
name =x;
}

string GetName ()  {
return name;
}

private:
string name;


};






int main() {
aliens alienobject;

int par1 =2;
int par2 =3;
aliens a;
alienobject.display();
alienobject.xx();
alienobject.addition(par1,par2);
cout << alienobject.addition(par1,par2);
cout << endl;

alienobject.SetName("Silvia Parwana");
cout << alienobject.GetName();



return 0;
}


