#include <cmath>
#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

double calculateDistance(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

void printPoint(const Point& p) {
    cout << "Point(x: " << p.x << ", y: " << p.y << ")\n";
}
