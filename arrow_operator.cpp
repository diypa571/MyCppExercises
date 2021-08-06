#include <iostream>

using namespace std;

// The class definition
class Country {
  private: // private data members
    string name;
    float population = 0;

  public: // public member functions
    void set_NamePopulation(string name, float population);
    string get_Name();
    float get_Population();
};

// member functions definitions
void Country::set_NamePopulation(string name, float population) {
  this -> name = name;
  this -> population = population;
}


string Country::get_Name() {
  return name;
}

float Country::get_Population() {
  return population;
}


int main() {

  Country obj;
  obj.set_NamePopulation("El Salvador", 6000000);
  cout << "Country: " << obj.get_Name() << " / ";
  cout << "Population: " << " " << obj.get_Population() << '\n' << "********" << '\n';
 
  obj.set_NamePopulation("Cuba", 11000000);
  cout << "Country: " << obj.get_Name() << " / ";
   cout << "Population: " << " " << obj.get_Population() << '\n' << "********" << '\n';
 

  return 0;
}
 
