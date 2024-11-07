#include <iostream>

using namespace std;

class Subway {
public:
    Subway() {
        passengers = 0;
        total_fares = 0;
    }

    int GetPassengers() {
        return passengers;
    }

    void Board(int p) {
        if (p >= 0) {
            passengers += p;
            CalculateFares(p);
        }
    }

    void Disembark(int p) {
        if (p >= 0 && p <= passengers) {
            passengers -= p;
        } else {
            passengers = 0; // Ensure no negative passengers
        }
    }

    double GetFares() {
        return total_fares;
    }

private:
    const double fare = 2.40;
    int passengers;
    double total_fares;

    void CalculateFares(int new_passengers) {
        total_fares += new_passengers * fare;
    }
};

int main() {
    Subway s;
    cout << s.GetPassengers() << endl;
    s.Board(23);
    s.Disembark(12);
    cout << s.GetPassengers() << endl;
    cout << s.GetFares() << endl;

    return 0;
}