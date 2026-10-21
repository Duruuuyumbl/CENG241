#include<iostream>
using namespace std;

class ScopeB {
public:
	ScopeB() {

	}
	void print() {
		cout << " Namespace Scope B" << endl;
	}
};


int main() {
	ScopeB nesne;
	nesne.print();
	return 0;
}