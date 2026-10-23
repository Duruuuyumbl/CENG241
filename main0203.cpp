#include<iostream>
using namespace std;

class One {
public:
	int x;

	void calistir() {
		print();

	}
private:
	void print() {
		cout << x << endl;

	}
};

int main() {
	One obj;
	obj.x = 5;
	obj.calistir();
	
	return 0;
}