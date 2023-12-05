#include <iostream>
#include "calculator.h"

int main(int argc, char* argv[])
{
	double a = 3.33333, b = 4.44444;
	
	Calculator calc;

	int result = calc.Div(calc.Add(calc.Mul(a, b), b), calc.Div(b, a));

	std::cout << result << std::endl;

	return 0;
}
