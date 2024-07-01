#include <iostream>

using namespace std;

struct Rectangle {
    int x;
    int y;
    int width;
    int height;
};

void moveRectangle(Rectangle& rect, int dx, int dy) {
    rect.x += dx;
    rect.y += dy;
}

void resizeRectangle(Rectangle& rect, int newWidth, int newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}

void printRectangle(const Rectangle& rect) {
    cout << "Rectangle(x: " << rect.x << ", y: " << rect.y
        << ", width: " << rect.width << ", height: " << rect.height << ")\n";
}
