#include <iostream>
#include <string>
using namespace std;

class Country {
private:
    string country;

public:
    void setCountry(string c) {
        country = c;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    Country c;

    c.setCountry("Uzbekistan");
    cout << c.getCountry();
}