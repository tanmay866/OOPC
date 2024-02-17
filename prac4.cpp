//Develop a system to calculate the area of a shape.

#include <iostream>
using namespace std;

const double PI = 3.14;

double calculate_circle_area(double radius) {
    return PI * radius * radius;
}

double calculate_rectangle_area(double length, double width) {
    return length * width;
}

double calculate_cuboid_area(double length, double width, double height) {
    return 2 * (length * width + width * height + height * length);
}

int main() {
    int choice;
    cout << "Choose a shape to calculate the area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Cuboid" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of a circle: ";
            cin >> radius;
            double area = calculate_circle_area(radius);
            cout << "The area of a circle is " << area << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter the length of a rectangle: ";
            cin >> length;
            cout << "Enter the width of a rectangle: ";
            cin >> width;
            double area = calculate_rectangle_area(length, width);
            cout << "The area of a rectangle is " << area << endl;
            break;
        }
        case 3: {
            double length, width, height;
            cout << "Enter the length of a cuboid: ";
            cin >> length;
            cout << "Enter the width of a cuboid: ";
            cin >> width;
            cout << "Enter the height of a cuboid: ";
            cin >> height;
            double area = calculate_cuboid_area(length, width, height);
            cout << "The area of a cuboid is " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
