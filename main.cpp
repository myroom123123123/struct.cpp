#include "struct.h"

int main() {
    Point p1 = { 0.0, 0.0 };
    Point p2 = { 3.0, 4.0 };
	printPoint(p1);
	printPoint(p2);
	cout << "Distance between p1 and p2: " << calculateDistance(p1, p2) << '\n';
	return 0;
}