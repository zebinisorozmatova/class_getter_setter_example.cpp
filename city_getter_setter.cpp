#include <iostream>
#include <string>
using namespace std;

class City {
private:
    string city;

public:
    void setCity(string c) {
        city = c;
    }

    string getCity() {
        return city;
    }
};

int main() {
    City c;

    c.setCity("Tashkent");
    cout << c.getCity();

    return 0;
}