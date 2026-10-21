#include<iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

double sum(double x, double y) {
	return x + y;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << sum(x, y) << endl;

	double a, b;
	cin >> a >> b;
	cout << sum(a, b) << endl;
	
	return 0;

}