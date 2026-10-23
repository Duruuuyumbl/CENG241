#include<iostream>
using namespace std;

class Rectangle {
private:
	int width, length;

public:
	Rectangle() {
		width = 5;
		length = 3;

	}
	int area() {
		return width * length;
	}

};

int main() {
	Rectangle r;
	cout << r.area();
	return 0;
}