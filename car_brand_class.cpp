#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }

    string getBrand() {
        return brand;
    }
};

int main() {
    Car c;

    c.setBrand("BMW");
    cout << c.getBrand();
}