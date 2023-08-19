#include <iostream>
using namespace std;

double p(double base, double expo) {
    int r=1;
    for(int i=1;i<expo+1;i++) {
        r=r*base;
    }
    return r;
}
int fac(int f) {
    int fr=1;
    for(int i=1;i<f+1;i++) {
        fr=fr*i;        
    }
    return fr;
}
double sine(double s) {
    return s-(p(s,3))/fac(3)+(p(s,5))/fac(5)-(p(s,7))/fac(7)+(p(s,9))/fac(9)-(p(s,11))/fac(11)+(p(s,13))/fac(13)-(p(s,15))/fac(15);
}
double cosine(double c) {
    return 1-(p(c,2))/fac(2)+(p(c,4))/fac(4)-(p(c,6))/fac(6)+(p(c,8))/fac(8)-(p(c,10))/fac(10)+(p(c,12))/fac(12)-(p(c,14))/fac(14);
}
double tangent(double t) {
    return sine(t)/cosine(t);
}
int main() {
    cout<<"\n\n\n                                                             ****BASIC CALCULATOR USING C++ LANGUAGE**** \n\n\n\n\n";
    cout<<"Type your response accordingly for the mathematical operation which you want to carry out from the  list : \n\n\n\n";
    cout<<"                                                                           **ARITHMETIC**\n";
    cout<<"                                     ADDITION == 1  "<<"SUBTRACTION == 2  "<<"MULTIPLICATION == 3  "<<"DIVISION == 4  "<<"EXPONENTIATION == 5\n\n\n\n";
    cout<<"                                                                           **TRIGONOMETRIC**\n";
    cout<<"                                     SINE == 6  "<<"COSINE == 7  "<<"TANGENT == 8  "<<"COSECANT == 9  "<<"SECANT == 10  "<<"COTANGENT == 11\n\n\n";
    cout<<"                                                                           **FACTORIAL == 12**\n\n\n";
    
    int response;
    cout<<"Enter your response from the ABOVE given list : ";
    cin>>response;

    switch (response) {
        case 1: {
        float su1,su2;
        cout<<"Enter the two numbers : ";
        cin>>su1>>su2;
        float sum=su1+su2;
        cout<<"Your result is "<<sum;}
        break;
        
        case 2: {
        float df1,df2;
        cout<<"Enter the two numbers : ";
        cin>>df1>>df2;
        float diff=df1-df2;
        cout<<"Your result is "<<diff;}
        break;

        case 3: {
        float m1,m2;
        cout<<"Enter the two numbers : ";
        cin>>m1>>m2;
        float pro=m1*m2;
        cout<<"Your result is "<<pro;}
        break;

        case 4: {
        float dv1,dv2;
        cout<<"Enter the two numbers : ";
        cin>>dv1>>dv2;
        float div=dv1/dv2;
        cout<<"Your result is : "<<div;}
        break;

        case 5: {
        double x,y;
        cout<<"Enter the two numbers : ";
        cin>>x>>y;
        cout<<"Your result is : "<<p(x,y);}
        break;

        case 6: {
        double si,sir;
        cout<<"Enter the angle in DEGREES : ";
        cin>>si;
        sir=si*(0.0174532925199);
        cout<<"Your result is : "<<sine(sir);}
        break;

        case 7: {
        double co,cor;
        cout<<"Enter the angle in DEGREES : ";
        cin>>co;
        cor=co*(0.0174532925199);
        cout<<"Your result is : "<<cosine(cor);}
        break;

        case 8: {
        double ta,tar;
        cout<<"Enter the angle in DEGREES : ";
        cin>>tar;
        tar=ta*(0.0174532925199);
        cout<<"Your result is : "<<tangent(tar);}
        break;

        case 9: {
        double cosec,cosecr;
        cout<<"Enter the angle in DEGREES : ";
        cin>>cosec;
        cosecr=cosec*(0.0174532925199);
        cout<<"Your result is : "<<1/(sine(cosecr));}
        break;

        case 10: {
        double sec,secr;
        cout<<"Enter the angle in DEGREES : ";
        cin>>sec;
        secr=sec*(0.0174532925199);
        cout<<"Your result is : "<<1/(cosine(secr));}
        break;

        case 11: {
        double cot,cotr;
        cout<<"Enter the angle in DEGREES : ";
        cin>>cot;
        cotr=cot*(0.0174532925199);
        cout<<"Your result is : "<<1/(tangent(cotr));}
        break;

        case 12: {
        int ft;
        cout<<"Enter the number : ";
        cin>>ft;
        cout<<"Your result is : "<<fac(ft);}
        break;
    }
    cout<<"\n";
    cout<<"                                                             *****THANKS FOR USING IT!!!!*****";
    return 0;
}