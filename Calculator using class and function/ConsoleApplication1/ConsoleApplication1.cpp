// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Calculator {
private:
	int a, b;
public:
	void seta(int num1) {
		a = num1;
	}
	void setb(int num2) {
		b = num2;
	}
	void sum() {
		cout << "Sum :" << (geta() + getb()) << endl;
	}
	void sub() {
		cout << "Subtract :" << (geta() - getb()) << endl;
	}
	void mult() {
		cout << "Multiply :" << (geta() * getb()) << endl;
	}
	void div() {
		cout << "Division :" << (geta() / getb()) << endl;
	}
	int geta() {
		return a;
	}
	int getb() {
		return b;
	}
};
int main() 
{
	Calculator c;
	int num1, num2;
	cout << "Enter Number 1:";
	cin >> num1;
	cout << "Enter Number 2:";
	cin >> num2;
	cout << "Num 1:" << num1 << "  Num 2:" << num2 << endl;
	
	c.seta(num1);
	c.setb(num2);
	c.sum();
	c.sub();
	c.mult();
	c.div();
}























//class Room {
//
//private:
//    double length;
//    double breadth;
//    double height;
//
//public:
//    // function to initialize private variables
//    void initData(double len, double brth, double hgt) { // Initializing Data Using and getting them from the main class
//        length = len;
//        breadth = brth;
//        height = hgt;
//    }
//
//    double calculateArea() {
//        return length * breadth;
//    }
//
//    double calculateVolume() {
//        return length * breadth * height;
//    }
//};
//
//int main() {
//
//    // create object of Room class
//    Room room1;
//
//    // pass the values of private variables as arguments
//    room1.initData(42.5, 30.8, 19.2);
//
//    cout << "Area of Room =  " << room1.calculateArea() << endl;
//    cout << "Volume of Room =  " << room1.calculateVolume() << endl;
//

//class Room {
//private:
//
//public:
//	double length;
//	double breadth;
//	double height;
//
//	double calculateArea() {
//		return (length * breadth);
//	}
//	double calculateVolume() {
//		return (length * breadth * height);
//	}
//
//};
//
//int main(){
//	Room room1;
//	room1.length = 10;
//	room1.breadth = 20;
//	room1.height = 30;
//
//	cout << "Area of Room =  " << room1.calculateArea() << endl;
//	cout << "Volume of Room =  " << room1.calculateVolume() << endl;


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
