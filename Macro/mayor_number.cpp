// Macro para el numero mayor

#include <bits/stdc++.h>

// Expresiones numericas siempre entre ( )
// Operador Ternario ?
#define mayor_number(a,b) (((a) > (b)) ? a : b)

int main()
{
	int a = 5, b = 7;
	//std::cout<<mayor_number(11,5);
	std::cout<<(((a) > (b)) ? a : b);
}
