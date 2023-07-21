#include <iostream>
#include <string>

#define Convert_Var_Char(a) std::string cad = std::string(#a) + std::string(" = ") + std::to_string(a);  std::cout << cad;

int main() {
    int a = 10;
    Convert_Var_Char(a)
    //std::cout << cad;

    return 0;
}

// Se imprimio una variable con su valor
