#include <iostream>
#include <string>
using namespace std;

class Food {
private:
    string food;

public:
    void setFood(string f) {
        food = f;
    }

    string getFood() {
        return food;
    }
};

int main() {
    Food f;

    f.setFood("Plov");
    cout << f.getFood();
}