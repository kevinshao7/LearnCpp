//Kevin Shao April 3, 2024
#include <cmath>
#include <iostream>
using namespace std;

void derivative(double y[],double temp[]);

double* rk4(double inity, double initdy,double results[]);

void copy(double a[], double b[],int varsize); //copies b into a

void extrapolate(double y0[],double dt,double dydt[],double temp[],int varsize);

void weightavg(double k1[],double k2[],double k3[],double k4[],double temp[],int varsize);

const double h = 0.001;
const double tend = 1+2*h;
const int steps = int(tend/h);
const int varsize = 2;
int main(){

    double inity = 1;
    double initdy=1;
    double results[steps][varsize+1];

    double* resultptr = rk4(inity,initdy,results);
    
    cout<<"t y\n";
    for (int i = 0; i < 2*steps;i+=2){
        cout<<resultptr[i]<<" "<< resultptr[i+1]<<"\n";
    }
}
void derivative(double y[],double temp[]){
    temp[0] = y[0];
    temp[1] = 1;
}
void rk4(double inity[], double initdy[],double results[]){
    static double results[steps][varsize+1];
    double tempdy[varsize];
    double tempy[varsize];
    double k1[varsize];
    double k2[varsize];
    double k3[varsize];
    double k4[varsize];
    double yn[varsize];

    copy(yn,inity,varsize);
    for (int step=0; step<steps;step++){
        results[step][0] =step*h;
        results[step][1] =yn;

        derivative(yn,tempdy);
        copy(k1,tempdy,varsize);
        extrapolate(yn,(h/2),k1,tempy,varsize);
        derivative(tempy,tempdy);
        copy(k2,tempdy,varsize);
        extrapolate(yn,(h/2),k2,tempy,varsize);
        derivative(tempy,tempdy);
        copy(k3,tempdy,varsize);
        extrapolate(yn,h,k3,tempy,varsize);
        derivative(tempy,tempdy);
        copy(k4,tempdy,varsize);
        weightavg(yn,k1,k2,k3,k4,tempy,varsize);
        copy(yn,tempy,varsize);
    }
    return;
}

void copy(double a[], double b[],int varsize){//copies b into a
    for (int i = 0; i<varsize;i++){
        a[i] = b[i];
    }

} 

void extrapolate(double y0[],double dt,double dydt[],double temp[],int varsize){
    for (int i = 0; i<varsize;i++){
        temp[i] = fma(dt,dydt[i],y0[i]);
    }
}

void weightavg(double yn[],double k1[],double k2[],double k3[],double k4[],double temp[],int varsize){
    for (int i = 0; i<varsize;i++){
        temp[i] = fma((h/6),(k1[i]+(2*k2[i])+(2*k3[i])+k4[i]),yn[i]);
    }
}
