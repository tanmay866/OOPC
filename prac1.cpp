//Develop a C++ program for CHARUSAT student marksheet generator 

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
    int sem,i,theory[3],practical[3],gp,sum=0;
    string sub[3];
    string a[3];
    string name;
    string b[3];
    int c;
    float sgpa;
    
    cout<<"enter the id: ";
    cin>>c;
    cout<<"enter the student name: ";
    cin>>name;
    cout<<"enter the semester between 1 to 8: ";
    cin>>sem;
    for(i=0; i<3; i++)
    {
        cout<<"enter the subject name: ";
        cin>>sub[i];
        
        cout<<"enter the theory marks:";
        cin>>theory[i];
        
        cout<<"enter the practical marks:";
        cin>>practical[i];

        cout << endl;
    }

 
    for(i=0; i<3; i++)
    {
         if(theory[i]<45)
        {
            a[i]="FF";
            gp=0;
        }
        else if(theory[i]<50)
        {
            a[i]="DD";
            gp=4;
        }
        else if(theory[i]<55)
        {
            a[i]="CD";
            gp=5;
        }
        else if(theory[i]<60)
        {
            a[i]="CC";
            gp=6;
        }
        else if(theory[i]<66)
        {
            a[i]="BC";
            gp=7;
        }
        else if(theory[i]<73)
        {
            a[i]="BB";
            gp=8;

        }
        else if(theory[i]<80)
        {
            a[i]="AB";
            gp=9;

        }
        else if(theory[i]>=80)
        {
            a[i]="AA";
            gp=10;
        }
        
        if(practical[i]<45)
        {
            b[i]="FF";
            gp=0;
        }
        else if(practical[i]<50)
        {
            b[i]="DD";
            gp=4;
        }
        else if(practical[i]<55)
        {
            b[i]="CD";
            gp=5;
        }
        else if(practical[i]<60)
        {
            b[i]="CC";
            gp=6;
        }
        else if(practical[i]<66)
        {
            b[i]="BC";
            gp=7;
        }
        else if(practical[i]<73)
        {
            b[i]="BB";
            gp=8;
        }
        else if(practical[i]<80)
        {
            b[i]="AB";
            gp=9;
                }
        else if(practical[i]>=80)
        {
            b[i]="AA";
            gp=10;
        }
        sum=sum+(gp*3);

    }

    
    cout<<"Student ID     :23CE"<<c<<endl;
    cout<<"Student name   : "<<name<<endl;
    cout<<"semester       : "<<sem<<endl;
    cout<<"                 theory      practical"<<endl;
    for(i=0; i<3; i++)
    {
        cout<<left<<setw(15)<<sub[i]<<left<<setw(7)<<a[i]<<setw(7)<<b[i]<<endl;
       
    }
   sgpa=sum/9;
   cout<<"sgpa  "<<sgpa;
return 0;
}