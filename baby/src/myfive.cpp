#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the Euclidean distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    // Input points from the user
    double x1, y1, x2, y2;
    cout << "Enter coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate and display the distance
    double dist = distance(x1, y1, x2, y2);
    cout << "Distance between the two points: " << dist << endl;

    return 0;
}


