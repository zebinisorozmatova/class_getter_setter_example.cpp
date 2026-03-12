#include <iostream>
using namespace std;

class Age {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Age a;

    a.setAge(21);
    cout << a.getAge();

    return 0;
}