//Develop a C++ program store and retrieve CHARUSAT employee details

#include<iostream>
#include<string>
using namespace std;

struct employe_data
{
    private :

    int id;
    string name;
    string qualification;
    float experience;
    long int contact_no;

    public:

    void get_data(){

        cout << " Employe ID    : ";
        cin >> id;

        cout << " Qualification : ";
        cin >> qualification;

        cout << " Experience    : ";
        cin >> experience;

        cout << "Contact Number : ";
        cin >> contact_no;
    }

    int show_data(int find_id){

        if(id == find_id){
            cout << " Employe ID    : " << id << endl;
            cout << " Qualification : " << qualification << endl;
            cout << " Experience    : "<< experience << endl;
            cout << "Contact Number : " << contact_no << endl;

            return 1;
        }
        else{
        return 0;
        }

    }

};

int main(){

    int emp_no,i,find_id,c;
    char ch;
    struct employe_data employe[20];

    cout << "Enter number of Employe : ";
    cin >> emp_no;

    for( i=0 ; i<emp_no ; i++){
        employe[i].get_data();
    }


    do{
    cout << "Enter ID number : ";
    cin >>  find_id;

    for( i=0 ; i<emp_no ; i++){
       c = employe[i].show_data(find_id);
       if (c==1)
       {
            break;
       }

    }

    if(emp_no == i){
        cout << "ID not found" << endl;
    }

    cout << "for continue press y :";
    cin >> ch;

    }while(ch == 'Y' || ch == 'y');

    return 0;
}