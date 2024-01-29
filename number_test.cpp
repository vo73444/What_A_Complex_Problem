#include <cassert>
#include <iostream>
#include "complex_number.hpp"

using namespace std;


int main(){
    ComplexNumber number = ComplexNumber(2.7, 8.4);

    cout << "Starting tests..." << '\n';
    float i = 0.001;
    float diffr = (number.real() - 2.7);
    float diffi = (number.imag() - 8.4);
    assert(diffr < i && diffi < i);
    cout << "Your tests succeded!\n";
}
