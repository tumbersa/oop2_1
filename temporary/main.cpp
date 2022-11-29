#include "Complex.h"
#include <iostream>
using namespace std;

int main() {
	Complex p(2, 5);
	Complex m(3,6);
	cout << p-m;
	cin >> m;
	p /= m;
	if (p != m) {
		cout <<"TRUE"<<endl;
	}
	cout << (p==m);
}