#include <iostream>
using namespace std;

int main(){

}

/*#include <iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;
public:
    Complex(){
        real = 10;
        imag = 20;
    }
    void operator--(int){
        real -= 1;
    }
    void show() const{
        cout << "Real: " << real << endl;
        cout << "Imag: " << imag << endl;
        cout << "Complex Numbers: " << real << "+" << imag << "i" << endl;
    }
};
int main() {
    Complex c;
    c--;
    c.show();
}*/


/*
#include <iostream>
using namespace std;

class Counter{
private:
    int count;
public:
    Counter(int con): count(con){}
    void operator++(){
        ++count;
    }
    void show(){
        cout << "Count: " << count << endl;
    }
};
int main(){
    Counter count(0);
    for (int i = 0; i < 1000; i++){
        ++count;
        count.show();
    }
    count.show();
}
*/

/*
#include <iostream>
using namespace std;

class Test{
    int a{}, b{};
public:
    Test()= default;
    Test(int x, int y): a(x), b(y){}

    Test operator+(Test &t) const{
        Test result;
        result.a = a + t.a;
        result.b = b + t.b;
        return result;
    }
    void operator++(){
        a += a;
    }
    void show() const{
        cout << a << endl;
        cout << b << endl;
    }
};
int main(){
    Test t1(10, 20), t2(30, 40);
    Test result = t1 + t2;
    result.show();
    ++t1;
    t1.show();
    return 0;
}*/
