#pragma once

#include "Calculator.h"

template<class T>
class GenericCalculator :
	public Calculator<T>
{
public:
	GenericCalculator();
	~GenericCalculator();

	// Inherited via Calculator
	virtual T calculate(T left, T right, Operation operation) override;
};

