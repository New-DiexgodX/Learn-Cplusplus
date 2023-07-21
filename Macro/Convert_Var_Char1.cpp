#include <bits/stdc++.h>

#define Convert_Var_Char(a) (std::string(#a) + std::string(" = ") + std::to_string(a))

int main()
{
	int a = 11;
	
	std::string cad = Convert_Var_Char(a);
	
	std::cout<<cad<<std::endl;
	
	
	return 0;
}

// Se convierte una variable con su valor, en una cadena de texto
