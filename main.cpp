#include <iostream>
#include "complex_list.hpp"

using namespace std;



int main(){

    ComplexNumber n = ComplexNumber(5.0, 7.0);

    ComplexNumber m = ComplexNumber(2.5, 3.1);

    ComplexNumber x = n.add(m);

    x.pretty_print();

    ComplexNumber p = n.subtract(m);

    p.pretty_print();

    cout << n.mag() << '\n';

    ComplexList list = ComplexList("Number List");

    list.add_to_number_list(n);

    list.add_to_number_list(m);

    list.add_to_number_list(x);

    list.add_to_number_list(p);

    list.sum().pretty_print();

    return 0;

}
