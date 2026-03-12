#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;

public:
    void setName(string x) {
        name = x;
    }

    string getName() {
        return name;
    }
};

int main() {
    Person p;

    p.setName("Ali");
    cout << p.getName();

    return 0;
}