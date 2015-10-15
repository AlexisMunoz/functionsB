// Alexis Muñoz
// 15 October 2015
// Functions B

#include <iostream>
#include <assert.h>
#include <cmath>
using namespace std;

double feetToInches(double val);
void feetToInches(double& val);
double computerRectangle(double valA, double valB);
void computerArea(double valA, double valB, double& valC);
void computerArea(double valA, double valB, double& valArea, double& valPerimeter);
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
void calcAreaPerimeter(double radius, double& area, double$ perimeter);
double calcArea(double length, double width);

int main(){
    double value;
    
    value = feetToinches(5);
    cout << value<< endl;
    
    return 0;
}

double feetToInches(double val){
    return val*12;
}
void feetToInches(double& val){
    val = val*12;
}
double computerRectangle(double valA, double valB){
    return valA*valB;
}
double computerArea(double valA, double valB, double& valC){
    valC = valA * valB;
}
void computerArea(double valA, double valB, double& valArea, double& valPerimeter){
    valPerimeter = 2(valA) + 2(valB);
    
    valArea = valA*valB;
}
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF){
    valE = ((valA*valB*valC*valD) / 4);
    valF = valA + valB + valC + valD;
}
void calcAreaPerimeter(double radius, double& area, double& perimeter){
    area = 3.14* pow(radius, 2);
    perimeter = (2*(3.14)(radius));
}
double calcArea(double length, double width){
    return length*width;
}
