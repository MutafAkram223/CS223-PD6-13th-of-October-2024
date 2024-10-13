#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y);

int main() {
    int h, x, y;
    cout << "Enter value of height (h): ";
    cin >> h;
    cout << "Enter value of x coordinate: ";
    cin >> x;
    cout << "Enter value of y coordinate: ";
    cin >> y;

    string result = checkPointPosition(h, x, y);
    cout << "Your given point is " << result << endl;

    return 0;
}

string checkPointPosition(int h, int x, int y) {
    if (x > 0 && x < 3 * h && y > 0 && y < h)
        return "Inside";
    
    if (x > h && x < 2 * h && y > h && y < 4 * h)
        return "Inside";

    if ((x == 0 || x == 3 * h) && y >= 0 && y <= h)
        return "on border";
    if (x == h && y >= h && y <= 4 * h)
        return "on border";
    if (x == 2 * h && y >= h && y <= 4 * h)
       return "on border";
    if (y == 0 && x >= 0 && x <= 3 * h)
       return "on border";
    if (y == h && x >= h && x <= 2 * h)
       return "on border";
    if (y == h && x >= 0 && x <= 3 * h)
       return "on border";
    if (y == 4 * h && x >= h && x <= 2 * h)
       return "on border";

    return "Outside";
}
