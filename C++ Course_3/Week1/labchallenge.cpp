#include <iostream>
#include <vector>
using namespace std;

//add code below this line



//add code above this line

int main(int argc, char** argv) {
  vector<string> names;
  for (int i = 1; i < argc; i++) {
    names.push_back(argv[i]);
  }
  SayHello(names);
}
