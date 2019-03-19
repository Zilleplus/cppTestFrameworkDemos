#pragma once
#include "Operation.h"

template<class T>
class Calculator {
public:
	virtual T calculate(T left, T right, Operation operation)=0;
};