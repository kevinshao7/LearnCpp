//Kevin Shao April 3, 2024
#include <cmath>
#include <iostream>
using namespace std;

double derivative(double y);

double* rk4(double inity, double initdy);
const double h = 0.01;
const double tend = 1+2*h;
const int steps = int(tend/h);
int main(){

    double inity = 1;
    double initdy=1;

    double* resultptr = rk4(inity,initdy);
    
    cout<<"t y";
    for (int i = 0; i < 2*steps;i+=2){
        cout<<resultptr[i]<<" "<< resultptr[i+1]<<"\n";
    }
}
double derivative(double y){
    return y;
}
double* rk4(double inity, double initdy){
    static double results[steps][2];
    double yn = inity;
    for (int step=0; step<steps;step++){
        results[step][0] =step*h;
        results[step][1] =yn;
        double k1 = derivative(yn);
        double k2 = derivative(fma(k1,(h/2),yn));
        double k3 = derivative(fma(k2,(h/2),yn));
        double k4 = derivative(fma(k3,h,yn));
        yn = fma((h/6),(k1+(2*k2)+(2*k3)+k4),yn);
    }
    return *results;
}

