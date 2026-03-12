#include <iostream>
#include <string>
using namespace std;

class Color {
private:
    string color;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }
};

int main() {
    Color c;

    c.setColor("Blue");
    cout << c.getColor();
}