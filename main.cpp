#include <iostream>
#include <math>                                                //#include <math>
constexpr int N_ELEMENTS = 100;

void main()                                                    //void main()
{
    int *b = new int[N_ELEMENTS];                              //N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa"                    //""
    for (int i = 0;i < N_ELEMENTS; i++)                       //i < N_ELEMENTS; i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i< N_ELEMENTS; i++)                       // i < N_ELEMENTS
    {
        std::cout << "Ertek: "<< b[i] << std::endl;           // << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag = 0;                                         // double atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];                                         //;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
