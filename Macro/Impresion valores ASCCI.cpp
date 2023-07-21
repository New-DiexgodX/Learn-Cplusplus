#include <bits/stdc++.h>


#define Convert_Var_Char(a) (std::string(#a) + std::string(" = ") + std::to_string(a))

int main()
{
	std::string cad[26];
	int a = 65;
	
	for(auto& C : cad)
	{
		C = std::string(1, static_cast<char>(a));
		a++;
	}
	
	for(auto& C : cad)
		std::cout<<C<<std::endl;
	
	return 0;
}

//Convertir una numeros int, en valor del sistema ASCCI
