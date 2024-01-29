class ComplexNumber{

    float a;

    float b;

    public:

    ComplexNumber(float new_a = 0.0, float new_b = 0.0);

    ComplexNumber add(ComplexNumber complexNumber);

    ComplexNumber subtract(ComplexNumber complexNumber);

    ComplexNumber neg();

    float mag();

    void conj();

    float real();

    float imag();

    void pretty_print();

};
