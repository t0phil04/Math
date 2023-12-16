#pragma once
#include "Mathematics.h"
#include <iostream>
#include <vector>

int MyMathOperations::EU_Algorithm(int dividend, int divisor) const {
	int tmp_a;
	int tmp_b;
	int remainder;

	if (dividend > divisor) {
		tmp_a = dividend;
		tmp_b = divisor;
	}
	else {
		tmp_a = divisor;
		tmp_b = dividend;
	}
	while (tmp_b > 0) {
		remainder = tmp_a % tmp_b;
		tmp_a = tmp_b;
		tmp_b = remainder;
	}

	return tmp_a;
}

std::vector<int> MyMathOperations::Trials_Division(int n) const{
	std::vector<int> Factors_;
	int currentDivisor = 2;

	if (n <= 0) { // check for non-positive values
		std::cout << "Error: Input must be a positive integer\n";
		std::cout << "\tPlease enter a new number: ";
		std::cin >> n;
	}

	while (n > 1)
	{
		if (n % currentDivisor == 0)
		{
			// Adds the current divisor where n is divisible by currentDivisor to the vector
			Factors_.push_back(currentDivisor);
			n = n / currentDivisor;
		}
		else
		{
			currentDivisor++; // Increments the divisor by 1
		}
	}
	return Factors_;
}