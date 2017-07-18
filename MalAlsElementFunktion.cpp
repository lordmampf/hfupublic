
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Punkt {
	int x, y;
public:
	Punkt(int pX, int pY) {
		x = pX;
		y = pY;
	}

	int operator*(const Punkt & pRhs) {
		return x * pRhs.x;
	}
};

int main() {
	Punkt p1(2, 3);
	Punkt p2(4, 5);
	cout << (p1 * p2) << endl;
}
