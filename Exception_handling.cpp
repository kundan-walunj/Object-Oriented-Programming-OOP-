#include <iostream>
#include<string.h>

using namespace std;

class employee{
public:
int employeeid;
string name;
int age;
double income;
string city;
char  vehicle;

public:
    employee(){
        name="xyz";
        employeeid=0;
        age=0;
        vehicle=0;
        city="city";
        income=0;
    }

  int  display()
  {
      cout<<"employee id is:"<<employeeid<<endl;
       cout<<"employee name is:"<<name<<endl;
         cout<<"employee age is:"<<age<<endl;
         cout<<"employee income  is:"<<income<<endl;
         cout<<"employee city is:"<<city<<endl;
         cout<<"employee vehicle is:"<<vehicle<<endl;
  }
};
int main()
{
int j=0;
employee e1;
  cout<<"enter the employeeid:"<<endl;
  cin>>e1.employeeid;
   cout<<"enter the name:"<<endl;
   cin.ignore();
   getline(cin,e1.name);
   try
   {
   cout<<"enter the age:"<<endl;
  cin>>e1.age;
  if (e1.age>50 || e1.age<20){
    throw e1.age;
  }
  else {
    j++;
  }
   cout<<"enter the income:"<<endl;
  cin>>e1.income;
  if(e1.income<50000 || e1.income>100000){
    throw e1.income;
  }
  else{
    j++;
  }
   cout<<"enter the city:"<<endl;
  cin.ignore();
  getline(cin,e1.city);
  if(e1.city!= "pune"&& e1.city!="gujrat"&&e1.city!="delhi"&&  e1.city!="hydrabad"){
    throw e1.city;
  }
  else{
        j++;
  }
   cout<<"having 2 wheeler y/n:"<<endl;
  cin>>e1.vehicle;
  if(e1.vehicle=='n'){
    throw e1.vehicle;
  }
  else{
    j++;
  }
   }
   catch(int a){
   cout<<"please enter age between 20 to 50"<<endl;
   }
   catch(double u){
   cout<<"enter income between 50000 to 100000"<<endl;
   }
    catch(string m){
   cout<<"city must be Pune,hydrabad,guj or delhi"<<endl;
   }
    catch(char u){
   cout<<"you must have a 2-wheeler"<<endl;
   }


if(j==4){
    e1.display();
}
else{
    cout<<"wrong values entered"<<endl;
}
}
