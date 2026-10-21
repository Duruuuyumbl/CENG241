#include<iostream>
using namespace std;
class Degerler {
public:
	int localVal;
	int globalVal;
	int firstVal;
	int secondVal;

	Degerler() {
		localVal = 25;
		globalVal = 50;
		firstVal= 75;
		secondVal = 100;
	}
};

int main() {
	Degerler d;


	cout << "local variable= " << d.localVal << endl;
	cout << "global variable= " << d.globalVal << endl;
	cout << "first variable= " << d.firstVal << endl;
	cout << "second variable= " << d.secondVal << endl;

	return 0;

}