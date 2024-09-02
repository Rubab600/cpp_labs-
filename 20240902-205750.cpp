#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

Point midpoint(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    return mid;
}

Point translate(const Point& p, double dx, double dy) {
    Point translated;
    translated.x = p.x + dx;
    translated.y = p.y + dy;
    return translated;
}

int main() {
    Point p1, p2;

    cout << "Enter coordinates for point 1 (x y): ";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates for point 2 (x y): ";
    cin >> p2.x >> p2.y;

    double dist = distance(p1, p2);
    Point mid = midpoint(p1, p2);
    Point translated = translate(p1, 2.0, 3.0); // Example translation

    cout << "Distance between points: " << dist << endl;
    cout << "Midpoint: (" << mid.x << ", " << mid.y << ")" << endl;
    cout << "Translated point: (" << translated.x << ", " << translated.y << ")" << endl;

    return 0;
}