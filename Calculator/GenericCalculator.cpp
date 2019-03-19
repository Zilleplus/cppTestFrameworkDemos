#include "GenericCalculator.h"


template< class T>
GenericCalculator<T>::GenericCalculator()
{
}

template< class T>
GenericCalculator<T>::~GenericCalculator()
{
}

template< class T>
T GenericCalculator<T>::calculate(
	T left, 
	T right, Operation operation)
{
	return left + right();
}
