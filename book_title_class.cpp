#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;

public:
    void setTitle(string t) {
        title = t;
    }

    string getTitle() {
        return title;
    }
};

int main() {
    Book b;

    b.setTitle("C++ Basics");
    cout << b.getTitle();
}