#include "struct.h"

int main() {
    Rectangle rect = { 0, 0, 10, 5 };
    printRectangle(rect);

    moveRectangle(rect, 5, 5);
    printRectangle(rect);

    resizeRectangle(rect, 20, 10);
    printRectangle(rect);

    return 0;
}
