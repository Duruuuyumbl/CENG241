#include<iostream>
using namespace std;

class One {
public:
	int x;

	One() {
		x = 5;
	}
	void print() {
		cout << x << endl;
	}
};

int main() {
	One obj;
	obj.print();
	return 0;
}