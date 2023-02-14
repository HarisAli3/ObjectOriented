#include <iostream>
using namespace std;

// Class Calculator , Private Members , Setter and Getter , Call in Void
// Get all object values by user
class Circle {
private:
    int r;
public:
    void setr(int r1) {
        r = r1;
    }
    void calculate() {
        double sum;
        sum = getr() * 3.14;
        cout << getr() << " " << sum << endl;
    }
    int getr() {
        return r;
    }
};

int main()
{
    Circle c1; // Creation of Object c1
    c1.setr(5);
    //cout << c1.getr();
    Circle c2; // Creation of Object c2
    c2.setr(6);
    //cout << c2.getr();
    c1.calculate();
    c2.calculate();
}
