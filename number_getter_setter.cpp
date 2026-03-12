#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    void setNumber(int n) {
        num = n;
    }

    int getNumber() {
        return num;
    }
};

int main() {
    Number n;

    n.setNumber(50);
    cout << n.getNumber();
}