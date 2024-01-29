#include <iostream>
#include "complex_list.hpp"


using namespace std;

ComplexNumber::ComplexNumber(float new_a, float new_b){
    a = new_a;
    b = new_b;
    
}

ComplexNumber ComplexNumber::add(ComplexNumber complexNumber){

    //creates two variables x and y in order to create a new complex number
    //variable named z. We return the new complex number so the user can do 
    //watever they want with it.

    float x = a + complexNumber.real();
    
    float y = b + complexNumber.imag();

    ComplexNumber z = ComplexNumber(x, y);

    return z;
    
} 

ComplexNumber ComplexNumber::subtract(ComplexNumber complexNumber){

    float x = a - complexNumber.real();

    float y = b - complexNumber.imag();

    ComplexNumber z = ComplexNumber(x, y);

    return z;
}

ComplexNumber ComplexNumber::neg(){

    float x = -a;

    float y = -b;

    ComplexNumber z = ComplexNumber(x, y);

    return z;

}

float ComplexNumber::mag(){
    float c = sqrt(pow(a, 2) + pow(b, 2));

    return c;
}

void ComplexNumber::conj(){
    //changes the complex number's imagenary part into its opposite 
    b = -b;

}


float ComplexNumber::real(){
    //returns the real part of a number so we can do wahtever we want
    //for example, we can print it or use it in other functions

    return a;
}

float ComplexNumber::imag(){
    //returns the numbers imagenary part
   return b;
}

void ComplexNumber::pretty_print(){

    cout << a << " + " << b << "i\n";
}


