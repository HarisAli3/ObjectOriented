// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// values from user , dataype anything , swap function , pass by reference
// Area of circle
// 3 values from user , function greater values from 3 or same
// one d array , minimum value and other greater value

#include <iostream>
using namespace std;

void min(int arr[]) {
	int temp = arr[0];
	for (int i = 0; i < 5; i++) {
		if (temp > arr[i]) {
			temp = arr[i];
		}
	}
	cout << "Smallest value in array:" << temp << endl;
}
void max(int arr[]) {
	int temp = arr[0];
	for (int i = 0; i < 5; i++) {
		if (temp < arr[i]) {
			temp = arr[i];
		}
	}
	cout << "Largest value in array:" << temp << endl;
}
int main() {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter value for " << i << "index:";
		cin >> arr[i];
	}
	min(arr);
	max(arr);
}


//void check(double a, double b, double c) {
//	if (a > b && a > c) {
//		cout << "A is greater then all values";
//	}
//	else if (b > a && b > c) {
//		cout << "B is greater then all values";
//	} 
//	else if (c > a && c > b) {
//		cout << "C is greater then all values";
//	}
//	else {
//		cout << "All values are same";
//	}
//}
//int main() {
//	double x, y, z;
//	cout << "Enter value of X:";
//	cin >> x;
//	cout << "Enter value of Y:";
//	cin >> y;
//	cout << "Enter value of Z:";
//	cin >> z;
//	check(x, y, z);
//}








//double cirlce(double &radius) {
//	double Pi = 3.14;
//	double area = radius * Pi;
//	return area;
//}
//int main() {
//	double radius, area;
//	cout << "Enter Radius of Cirlce:";
//	cin >> radius;
//	area = cirlce(radius);
//	cout << "Area of a circle:" << area << endl;
//}




//void swap(int &a, int &b) {
//	int c = a;
//	a = b;
//	b = c;
//}
//using namespace std;
//int main()
//{
//	int x, y;
//	cout << "Enter Value of X:";
//	cin >> x;
//	cout << "Enter value of Y:";
//	cin >> y;
//	cout << "Before Swapping:" << endl;
//	cout << "Value of X:" << x << endl;
//	cout << "Value of Y:" << y << endl;
//	swap(x,y);
//	cout << "After swapping:" << endl;
//	cout << "Value of X:" << x << endl;
//	cout << "Value of Y:" << y << endl;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
