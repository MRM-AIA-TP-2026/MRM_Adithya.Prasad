#include <iostream>
#include <vector>
using namespace std;
    
class BigCat {
  public:
    string species;
    string common_name;
    vector<string> habitat;
    string genus = "panthera";
  
  BigCat(string sp, string cn, vector<string> h) {
    species = sp;
    common_name = cn;
    habitat = h;
    
       

  }
};

int main() {
  
  //add code below this line
BigCat(string species, string common_name, vector<string> habitat) :
        species(sp), common_name(cn), habitat(h) {}

  
  //add code above this line
  
  cout << "A " << snow_leopard.common_name; 
  cout << " is part of the " << snow_leopard.species << " species." << endl;
  cout << "Their genus class is " << snow_leopard.genus << "." << endl;
  cout << "Some of their habitats include: ";
  for (auto a : snow_leopard.habitat) {
    cout << a << ", ";
  }
  cout << "etc." << endl;
  
  return 0;
  
}
