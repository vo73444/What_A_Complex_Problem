#include <iostream>
#include "complex_list.hpp"

using namespace std;

ComplexList::ComplexList(string list_name){

    list = list_name;

}

void ComplexList::add_to_number_list(ComplexNumber complexNumber){
    numberlist.push_back(complexNumber);

}

std::string ComplexList::get_listname(){
    return list;
}

ComplexNumber ComplexList::sum(){

// declare and initalizes variable z so we can use it in the for loop.

    ComplexNumber z = ComplexNumber(0.0, 0.0);

//goes through the list and uses our add function from the ComplexNumber 
//class to add all the numbers in the vector 
    for(int i = 0;i < numberlist.size(); i++){
         
        z = z.add(numberlist[i]);


    }

    return z;
}

