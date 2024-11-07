#include <iostream>
using namespace std;

//add class definitions below this line

class MarbleBag {
  public:
    // Constructor to initialize the number of marbles
    MarbleBag(int r, int b, int y) {
      red = r;
      blue = b;
      yellow = y;
    }

    // Functions to add marbles to each color
    void AddRed(int r) {
      red += r;
    }

    void AddBlue(int b) {
      blue += b;
    }

    void AddYellow(int y) {
      yellow += y;
    }

    // Functions to return the total marbles of each color
    int RedTotal() {
      return red;
    }

    int BlueTotal() {
      return blue;
    }

    int YellowTotal() {
      return yellow;
    }

    // Function to return the total number of all marbles
    int BagTotal() {
      return red + blue + yellow;
    }

  private:
    int red;
    int blue;
    int yellow;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line
  
  MarbleBag bag(12, 8, 19);
  bag.AddRed(4);
  bag.AddBlue(12);
  bag.AddYellow(-1);
  bag.AddBlue(-3);
  cout << "There are " << bag.RedTotal() << " red marbles." << endl;
  cout << "There are " << bag.BlueTotal() << " blue marbles." << endl;
  cout << "There are " << bag.YellowTotal() << " yellow marbles." << endl;
  cout << "There are " << bag.BagTotal() << " total marbles." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
}
