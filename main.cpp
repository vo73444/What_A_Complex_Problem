#include <iostream>
#include "complex_list.hpp"

using namespace std;



int main(){

    // ComplexNumber n = ComplexNumber(5.0, 7.0);

    // ComplexNumber m = ComplexNumber(2.5, 3.1);

    // ComplexNumber x = n.add(m);

    // x.pretty_print();

    // ComplexNumber p = n.subtract(m);

    // p.pretty_print();

    // cout << n.mag() << '\n';

    // ComplexList list = ComplexList("Number List");

    // list.add_to_number_list(n);

    // list.add_to_number_list(m);

    // list.add_to_number_list(x);

    // list.add_to_number_list(p);

    // list.sum().pretty_print();

    ComplexNumber n = ComplexNumber(3 , -2);

    ComplexNumber m = ComplexNumber(4, 5);

    ComplexNumber f = n.mult(m);

    f.pretty_print();

    ComplexNumber a = ComplexNumber(6 , 3);

    ComplexNumber b = ComplexNumber(5, 2);

    ComplexNumber c = a.divide(b);

    c.pretty_print();



    return 0;

}
// g++ complex_number.cpp complex_list.cpp main.cpp
