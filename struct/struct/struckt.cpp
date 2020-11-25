#include<iostream>
#include<string>

using namespace std;


struct aliens {
string name;
int numbers;
string planet;
};



int main() {


aliens a1 = {"Human",800000000, "Earth"};
aliens a2 = {"Ferengi",2000000, "Ferenginar"};
aliens a3 = {"Romulan",800, "Romulas"};


int allarts;
allarts =  (int)(a1.numbers) + (int)(a2.numbers);

cout << " \t" << a1.name <<" \t" << a1.numbers << " \t" <<  a1.planet << endl;
cout << " \t" << a2.name <<" \t" << a2.numbers << " \t" <<  a2.planet << endl;
cout << " \t" << a3.name.append("*") <<" \t" << a3.numbers << " \t" <<  a3.planet << endl;
cout << " Total aliesn... " <<  allarts << endl;

return 0;
}



