#pragma once

#include "Calculator.h"

class RealCalculator :
	public Calculator<double>
{
public:
	RealCalculator();
	~RealCalculator();


	// Inherited via Calculator
	virtual double calculate(double left, double right, Operation operation) override;
};

