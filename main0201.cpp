#include<iostream>
using namespace std;

void example(int& p, double q) {
	p = 200;
	q=154.3

}

int main() {
	int x = 10;
		double y = 20.5;

		example(x, y);

		cout << x << endl;
		cout << y << endl;

		return 0;
}