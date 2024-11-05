#include <iostream>
#include <string>

using namespace std;

class dot {
private:
	int x;
	int y;
	int z;
public:
	void setX(int x) { x = x; }
	void setY(int y) { y = y; }
	void setZ(int z) { z = z; }

	int getX() { return x; }
	int getY() { return y; }
	int getZ() { return z; }

	void intput() {
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		cout << "Nhap z: ";
		cin >> z;
	}

	void output() {
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
		cout << "z: " << z << endl;
	}
};
int main() {
	dot d;
	d.intput();
	d.output();
	return 0;
}