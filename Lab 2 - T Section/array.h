#include <iostream>
using namespace std;

class Array {
private:
	int a[2][2];
public:
	void setvalues(int aa[2][2]) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				a[i][j] = aa[i][j];
			}
		}
	}
	void display() {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	void min() {
		int temp = a[0][0];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
			if (temp > a[i][j]) {
				temp = a[i][j];
			}
			}
		}
		cout << "Smallest value in array:" << temp << endl;
	}
	void max() {
		int temp = a[0][0];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				if (temp < a[i][j]) {
					temp = a[i][j];
				}
			}
		}
		cout << "Largest value in array:" << temp << endl;
	}
	//void max(int a[]) {
	//	int temp = a[0];
	//	for (int i = 0; i < 5; i++) {
	//		if (temp < arr[i]) {
	//			temp = arr[i];
	//		}
	//	}
	//	cout << "Largest value in array:" << temp << endl;
	//}

	//void swap() {
	//	int c = a;
	//	a = b;
	//	b = c;
	//}
	//int geta() {
	//	return a;
	//}
	//int getb() {
	//	return b;
	//}
};