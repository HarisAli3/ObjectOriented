int main(){
 student obj1, obj2, obj3;
 obj1.setName("Haris Ali");
 obj1.setMarks(66);
 ob2.setName("Hassan");
 obj.setMarks(33);
 obj1.getName();
 obj1.getMarks();
 obj2.getName();
 obj.getMarks();
 obj.calculation_Marks(33, 66);
}

/*
#include <iostream>
#include <cstring>
using namespace std;

class Pen{
private:
    char *name;
public:
    Pen(const char*n ){
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    Pen(Pen & p){
        name = new char[strlen(p.name)+1];
        strcpy(name, p.name);
    }
    const char* getName(){
        return name;
    }
};
int main() {
    Pen p1("Dollar");
    Pen p2 = p1;
    cout << "P 1:" << p1.getName() << endl;
    cout << "P 2:" << p2.getName() << endl;
    p2 = Pen("Piano");
    cout << "P 1:" << p1.getName() << endl;
    cout << "P 2:" << p2.getName() << endl;
    return 0;
}*/
