#include <iostream>

using namespace std;

class CelestialBody {
public:
    CelestialBody(string n, double diam, double dist, int m) {
        name = n;
        diameter = diam;
        distance = dist;
        moons = m;
    }

    string name;
    double diameter;
    double distance;
    int moons;

    double ComparedToEarth() {
        double earth_diameter = 12756.3;
        return diameter / earth_diameter;
    }

    string CloserToSun(const CelestialBody& other) {
        if (distance < other.distance) {
            return name;
        } else {
            return other.name;
        }
    }
};

int main() {
    CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
    CelestialBody venus("Venus", 12103.6, 108160000, 0);

    cout << mercury.CloserToSun(venus) << endl;

    return 0;
}