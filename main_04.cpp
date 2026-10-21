#include<iostream>
using namespace std;

class Veri {
public:
	int x;

	Veri() {
		x = 88;

	}
};

int main() {
	Veri nesne;
	int x = 101;


	cout << " x local: " <<x<<endl;
	cout << " x global :" <<nesne.x <<endl;
	return 0;
}