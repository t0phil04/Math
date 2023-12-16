#pragma once
#include "Mathematics.h"
#include <iostream>

int MyMath::EU_Algorithm(int num1_, int num2_) {
	int tmp_a;
	int tmp_b;
	int remainder;

	if (num1_ > num2_) {
		tmp_a = num1_;
		tmp_b = num2_;
	}
	else {
		tmp_a = num2_;
		tmp_b = num1_;
	}
	while (tmp_b > 0) {
		remainder = tmp_a % tmp_b;
		tmp_a = tmp_b;
		tmp_b = remainder;
	}

	return tmp_a;
}

MyMath::MyMath()
{
}

MyMath::~MyMath()
{
}