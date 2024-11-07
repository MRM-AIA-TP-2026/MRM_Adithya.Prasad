#include <iostream>
using namespace std;

//add class definitions below this line
    

  
//add class definitions above this line
class Cat{
  public:
  string breed;
  string color;
  string name;
};
int main() {

  Cat cat;
  cat.breed="American Shorthair";
  cat.color="black";
  cat.name="Kiwi";
  cout << cat.breed << endl;
  cout << cat.color << endl;
  cout << cat.name << endl;

  return 0;
  
}
