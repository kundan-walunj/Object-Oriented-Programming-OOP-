#include <iostream>

using namespace std;
//base class employee
class employee{
private:
    string firstname;
    string lastname;
    int socialsecurityno;
public:
    employee(string fn,string ln,int ssn){
    firstname=fn;
    lastname=ln;
    socialsecurityno=ssn;
    }
void display(){
cout<<"enter the first name:"<<firstname<<endl;
cout<<"enter the last name:"<<lastname<<endl;
cout<<"enter the security no:"<<socialsecurityno<<endl;
}
virtual void earnings()=0;
};
//inherited from base class
class salariedemployee:public employee{
private:
   float salary;
public:
    salariedemployee(string fn,string ln,int ssn,float sal):employee(fn,ln,ssn){
    salary=sal;
    }
    void display(){
    employee::display();
    cout<<"salary is:"<<salary<<endl;
    }
    void earnings(){
        cout<<"earnings of salaried employee:"<<salary<<endl;
    }
};
//inherited from base class
class hourlyemployee:public employee{
public:
    int wage;
    int hours;
public:
    hourlyemployee(string fn,string ln,int ssn,int w,int h):employee(fn,ln,ssn){
    wage=w;
    hours=h;
    }
void display(){
    employee::display();
    cout<<"total wage:"<<wage<<endl;
    cout<<"hours worked:"<<hours<<endl;
    }
   void earnings(){
       int hsal;
       if (hours<=40){
       hsal= wage*hours;
       cout<<hsal;
       }
       else if(hours>40){
        hsal=40*wage+(hours-40)*wage*1.5;
        cout<<"earnings of hourly employee:"<<hsal<<endl;
       }
       }
};
//inherited from base class
 class commisionemployee:public employee{
 public:
    float grosssalary;
    int commisionrate;
 commisionemployee(string fn,string ln,int ssn,float gs,int cr):employee(fn,ln,ssn){
    grosssalary=gs;
    commisionrate=cr;
    }
    void display(){
    employee::display();
    cout<<"gross salary is:"<<grosssalary<<endl;
    cout<<"commision rate is:"<<commisionrate<<endl;
    }
    void earnings(){
        int csal;
        csal=commisionrate*grosssalary;
        cout<<"earnings of commision employee:"<<csal<<endl;
    }
 };
 //inherited from commisionemployee
 class basepluscommissionemployee:public commisionemployee{
  public:
   float basesalary;
   basepluscommissionemployee(string fn,string ln,int ssn,float gs,int cr,float bs):commisionemployee(fn,ln,ssn,gs,cr){
       basesalary=bs;
   }
    void display(){
    commisionemployee::display();
    cout<<"base salary:"<<basesalary<<endl;
    }
    void earnings(){
        int bps;
        bps=commisionrate*grosssalary+basesalary;
        cout<<"earnings of basepluscommission employee:"<<bps<<endl;
    }
 };

int main(){
   /* salariedemployee s1("abc","xyz",982213,10000);
    s1.display();
    s1.earnings();
    hourlyemployee s2("mnp","hij",98221,10000,48);
    s2.display();
    s2.earnings();
    commisionemployee s3("ppl","rej",98221,10000,12);
    s3.display();
    s3.earnings();
    basepluscommissionemployee s4("oop","rsg",98221,10000,12,4800);
    s4.display();
    s4.earnings();*/
    employee *e;
    salariedemployee s1("abc","xyz",982213,10000);
    e=&s1;
    e->display();
    e->earnings();
    hourlyemployee s2("mnp","hij",98221,10000,48);
    e=&s2;
    e->display();
    e->earnings();
    commisionemployee s3("ppl","rej",98221,10000,12);
    e=&s3;
    e->display();
    e->earnings();
    basepluscommissionemployee s4("oop","rsg",98221,10000,12,4800);
    e=&s4;
    e->display();
    e->earnings();

}
