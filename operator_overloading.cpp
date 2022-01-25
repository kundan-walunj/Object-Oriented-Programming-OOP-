
#include <iostream>

using namespace std;

class complexx{
public:
    int real;
    int imag;

    complexx(){
    real=imag=0;
    };
    friend complexx operator*(complexx &c1,complexx &c2);
    friend ostream & operator << (ostream &out, complexx &c);
    friend istream & operator >> (istream &in,  complexx &c);

    /*setcomplexx(){
     cout<<"enter the real part "<<endl;
     cin>>real;
     cout<<"enter the imaginary part "<<endl;
     cin>> imag;
}
    printcomplexx(){
    cout<<"complex no is:"<<endl;
    cout<<real<<"+"<<imag<<"i"<<endl;
    }*/
    //---overloading additional operator---//
    complexx operator+(complexx &c1){
        complexx c3;
        c3.real=real+c1.real;
        c3.imag=imag+c1.imag;
        return c3;
    }
    //---overloading division operator---//
complexx operator /(complexx &c2)
 {
 complexx c5;
 c5.real=((real*c2.real)+(imag*c2.imag))/((c2.real*c2.real)+(c2.real*c2.imag));
 c5.imag=((imag*c2.real)-(real*c2.imag))/((c2.real*c2.real)+(c2.imag*c2.imag));
 return c5;
 }
};
    //---overloading multiplication operator---//
    complexx operator*(complexx &c1,complexx &c2)
    {
    complexx c4;
    c4.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    c4.imag=(c1.real*c2.imag)+(c2.real*c1.imag);
    return c4;
    }
    //---overloading insertion operator---//
  istream & operator >> (istream &in,  complexx &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}
   //---overloading extraction operator---//
   ostream & operator << (ostream &out, complexx &c)
{
    out << c.real<<"+"<<c.imag<<"i"<<endl;
    return out;
}
int main(){
     complexx c1,c2,c3,c4,c5;
   /* c1.setcomplexx();
    c1.printcomplexx();*/
    cin>>c1;
    cout<<c1;
    cin>>c2;
    cout<<c2;
    /*c2.setcomplexx();
    c2.printcomplexx();*/
    c3=c2+c1;
    cout<<c3;
    /*c3.printcomplexx();*/
    c4=c2*c1;
   /* c4.printcomplexx();*/
   cout<<c4;
   c5=c2/c1;
   cout<<c5;
}




