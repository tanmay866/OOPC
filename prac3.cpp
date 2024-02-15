//Create a car data management system for TATA motors using C++

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class CarDetail
{
public:
    string Model_name;
    string Fuel, Transmission;
    float ShowroomPrice, TankCapacity, Mileage;
    int Seating, Airbags;

    void GetDetailOfCar()
    {
        cout << "Enter Model_name: ";
        cin >> Model_name;
        cout << "Enter Fuel: ";
        cin >> Fuel;
        cout << "Enter Transmission: ";
        cin >> Transmission;
        cout << "Enter ShowroomPrice: ";
        cin >> ShowroomPrice;
        cout << "Enter TankCapacity: ";
        cin >> TankCapacity;
        cout << "Enter Mileage: ";
        cin >> Mileage;
        cout << "Enter Seating: ";
        cin >> Seating;
        cout << "Enter Airbags: ";
        cin >> Airbags;

        cin.ignore();
    }

    void CarDetailName()
    {
        cout << setw(10) << "Model" << setw(15) << "Fuel Type" << setw(15) << "Showroom Price"
            << setw(15) << "Mileage" << setw(15) << "Transmission" << setw(15) << "Tank Capacity"
            << setw(10) << "Seating" << setw(10) << "Airbags" << endl;
    }

    void CarDetailFromName()
    {
        cout << setw(10) << Model_name << setw(15) << Fuel << setw(15) << ShowroomPrice
            << setw(15) << Mileage << setw(15) << Transmission << setw(15) << TankCapacity
            << setw(10) << Seating << setw(10) << Airbags << endl;
    }


};

int main()
{
    CarDetail car_detail_var[1000];
    char ch;
    int a, n, m, i;
    float k;

    cout << "Enter Number of Cars: ";
    cin >> m;
    cin.ignore();

    for (i = 0; i < m; i++)
    {
        car_detail_var[i].GetDetailOfCar();
    }

    do
    {
        n = 0;
        cout << "welcom to TATA motors" << endl;
        cout << "Choose Option :" << endl;
        cout << "(1) Model Name  (2) Fuel Type  (3) Price Range" << endl;
        cout << "enter your option : ";
        cin >> a;
        cin.ignore();

        switch(a){

            case 1:
            {
            cout << "list of car" << endl;
            for (i = 0; i < m; i++)
            {
                cout << "(" << i + 1 << ")" << car_detail_var[i].Model_name << endl;
            }
            cout << "choose car: ";
            cin >> n;
            cin.ignore();
            car_detail_var[n-1].CarDetailName();
            car_detail_var[n-1].CarDetailFromName();

            break;
            }

            case 2:
            {
            cout << "TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS" << endl;
            cout << "(1) Petrol  (2) Diesel (3) CNG (4) Electric " << endl;
            cout << "ENTER YOUR FUEL PREFERENCE: ";
            cin >> n;
            cin.ignore();
            car_detail_var[n - 1].CarDetailName();
            switch (n)
            {
            case 1:
                for (i = 0; i < m; i++)
                {
                    if (car_detail_var[i].Fuel == "Petrol")

                        car_detail_var[i].CarDetailFromName();
                }
                break;
            case 2:
                for (i = 0; i < m; i++)
                {
                    if (car_detail_var[i].Fuel == "Diesel")
                        car_detail_var[i].CarDetailFromName();
                }
                break;
            case 3:
                for (i = 0; i < m; i++)
                {
                    if (car_detail_var[i].Fuel == "CNG")
                        car_detail_var[i].CarDetailFromName();
                }
                break;
            case 4:
                for (i = 0; i < m; i++)
                {
                    if (car_detail_var[i].Fuel == "Electric")
                        car_detail_var[i].CarDetailFromName();
                }
                break;
            default:
                cout << "Invalid Input ";
                break;
            }
            break;
        }

        case 3:
        {
            cout << "Enter affordable price : ";
            cin >> k;
            cin.ignore();
            car_detail_var[0].CarDetailName(); 
            for (i = 0; i < m; i++)
            {
                if (car_detail_var[i].ShowroomPrice <= k){
                    car_detail_var[i].CarDetailFromName();
                }
            }
            break;
        }

        default:{
            cout << "wrong input";
        }

        }

        cout << "Do you want to contiue ? (Yes/No): ";
        cin >> ch;
        cin.ignore();

    } while (ch == 'y' || ch == 'Y');

    return 0;
}