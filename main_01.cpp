#include<iostream>
using namespace std;
class ScopeA {
public:
	void print() {
		cout << "Namespace Scope A" << endl;

	}
};
class ScopeB {
public:
	void print() {
		cout << "Namespace Scope B" << endl;
	}
 };

int main() {
	ScopeA a;
	ScopeB b;
	
	a.print();
	b.print();
	return 0;
}