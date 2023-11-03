#include <iostream>

int main()
{

    double catetoA;
    double catetoB;

    std::cout << "Digite o comprimento do primeiro cateto:\n";
    std::cin >> catetoA;

    std::cout << "Digite o comprimento do segundo cateto:\n";
    std::cin >> catetoB;

    double hypotenuse = sqrt((catetoA * catetoA) + (catetoB * catetoB));

    std::cout << "A hipotenusa é: " << hypotenuse;
}
