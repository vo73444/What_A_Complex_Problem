#include <cassert>
#include <iostream>
#include "complex_list.hpp"

using namespace std;

int main(){
    ComplexList list = ComplexList("List Name");

    cout << "Starting tests..." << '\n';
    assert(list.get_list() == "List Name");
    cout << "Your tests succeded!\n";
}
