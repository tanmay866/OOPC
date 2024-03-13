//Develop a system to calculate the area of circle.

#include<iostream>

using namespace std;
int count = 0;

class circle
{

    private:
    float radius;
    public:
    circle()
    {
       count++;
       radius = 1;
    }

    ~circle()
    {
        cout<<"One object is deleted "<< --count <<" are active"<< endl ;
    }

    circle(int r)
    {
        count++;
        radius = r;

    }
    circle(circle & x)
    {
       count++;
       radius=x.radius;

    }

    void display()
    {
        cout<<"area of circle with radius "<< radius << " : " << radius*3.148*radius <<endl;
    }

};

int main()
{
    class circle obj1,obj2(20);
    class circle obj3(obj1);
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;

}