#include <iostream>
using namespace std;

class student {

private:
	int a;
	int b;
public:
	void setvalues(int sa, int sb) {
		a = sa;
		b = sb;
	}
	void swap() {
		int c = a;
		a = b;
		b = c;
	}
	int geta() {
		return a;
	}
	int getb() {
		return b;
	}

};