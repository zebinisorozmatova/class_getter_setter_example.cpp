#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    void setStudent(string n) {
        name = n;
    }

    string getStudent() {
        return name;
    }
};

int main() {
    Student s;

    s.setStudent("Zebiniso");
    cout << s.getStudent();
}