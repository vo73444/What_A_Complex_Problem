#include <vector>
#include <string>
#include "complex_number.hpp"



class ComplexList{

    std::vector<ComplexNumber> numberlist;

    std::string list;

    public:

    ComplexList(std::string list_name);

    void add_to_number_list(ComplexNumber complexNumber);

    std::string get_list();

    ComplexNumber sum();

};
