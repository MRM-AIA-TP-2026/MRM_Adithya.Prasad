#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line


    oceans.push_back("Pacific");
    oceans.push_back("Atlantic");
    oceans.push_back("Indian");
    oceans.push_back("Arctic");
    oceans.push_back("Southern");   


    cout << "Original list of oceans:" << endl;
    for (const string& ocean : oceans) {
        cout << ocean << endl;
    }

    oceans.pop_back(); // Remove the last ocean (Southern)
    cout << "\nList after removing the last ocean:" << endl;
    for (const string& ocean : oceans) {
        cout << ocean << endl;
    }

    cout << "\nSecond ocean: " << oceans.at(1) << endl;


  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}