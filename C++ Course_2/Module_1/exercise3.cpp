#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line
for (int i = reverse.size() - 1; i >= 0; i--) {
    cout << reverse[i] << endl;
  }


  //add code above this line
  
  
  
  return 0;
  
}