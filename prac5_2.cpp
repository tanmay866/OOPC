//Develop a system to calculate the area of circle.

#include<iostream>
using namespace std;

int count = 0;

class circle{

    float radius, area;

public :

    circle(){
        ++count;
        radius = 1;
        area = 3.14*radius*radius;

    }

    ~circle(){
        --count;
        cout << "One object is deleted  " << endl;
        cout << "Total Active objects are " << count << endl; 
    }

    circle(int r){
        ++count;
        radius = r;
        area = 3.14*radius*radius;

    }

    circle(circle & obj){
        radius = obj.radius;
        area = 3.14*radius*radius;

    }

    void display(){
         cout << "Circle with radius " << radius << " has area " << area << endl;
    }

};

int main()
{
    circle *x,*y,*z;
    x = new circle;
    y = new circle(20);
    z = new circle(*x);

    x->display();
    y->display();

    delete x;
    delete y;

    z->display();

    delete z;

    return 0;
}