#include "RealCalculator.h"



RealCalculator::RealCalculator()
{
}


RealCalculator::~RealCalculator()
{
}

double RealCalculator::calculate(double left, double right, Operation operation)
{
	switch (operation)
	{
	case SUM:
		return left + right;
		break;
	case SUBTRACT:
		return left - right;
		break;
	default:
		0;
		break;
	}
}
