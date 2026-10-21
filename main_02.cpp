#include<iostream>
using namespace std;

namespace ScopeA {
	void print() {
		cout << "Namespace Scope A" << endl;

	}
}
namespace ScopeB {
	void print() {
		cout << "Namespace Scope B" << endl;
	}
}

int main(){
	using namespace ScopeA;
	print();
	return 0;
}