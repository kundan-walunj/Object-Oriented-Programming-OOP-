#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    string classs;
    int div;
    int date_of_birth;
    long int adhar_number;
    string blood_group;
    string address;
    long int ph_no;
public:
    /*parametrized constructor*/
    student(string a,int b,string c,int d,int e,long int f,string g,string h,long int i){
    name=a;
    rollno=b;
    classs=c;
    div=d;
    date_of_birth=e;
    adhar_number=f;
    blood_group=g;
    address=h;
    ph_no=i;
    }
    /*default constructor*/
    student(){
     name="kundan";
     rollno=42;
     classs="sy";
     div=4;
     date_of_birth=04032001;
     adhar_number=8765456;
     blood_group="ab";
     address="Pune";
     ph_no=982295;
    }
    /*copy constructor*/
    student(student &x)
    {
    name=x.name;
    rollno=x.rollno;
    classs=x.classs;
    div=x.div;
    date_of_birth=x.date_of_birth;
    adhar_number=x.adhar_number;
    blood_group=x.blood_group;
    address=x.address;
    ph_no=x.ph_no;
    }
    /*destructor*/
    ~student(){
    cout<<"object is destoryed"<<endl;
    }
    void display()
    {
        cout<<"enter the name:"<<name<<endl;
        cout<<"enter roll no:"<<rollno<<endl;
        cout<<"enter class:"<<classs<<endl;
        cout<<"enter div:"<<div<<endl;
        cout<<"enter date of birth:"<<date_of_birth<<endl;
        cout<<"enter adhar no:"<<adhar_number<<endl;
        cout<<"enter blood group:"<<blood_group<<endl;
        cout<<"enter address:"<<address<<endl;
        cout<<"enter phone no:"<<ph_no<<endl;

    }
};
int main()
{

    class student s("manav",30,"sy",4,25092001,987654,"ab","pune",85678456);{
    s.display();
    cout<<" "<<endl;
    }
    class student s1;{
    s1.display();
    cout<<" "<<endl;
    }
    class student cp(s);{
    cp.display();
    cout<<" "<<endl;
    }

}





