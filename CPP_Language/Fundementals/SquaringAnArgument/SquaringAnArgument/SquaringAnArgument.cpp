#include <iostream>
#include <assert.h>


template <typename T>
T square_it(const T a)
{
	return a * a;
}

int square(int num)
{
	return num * num;
}


int main()
{
	assert(square(8) == 64);
	assert(square_it(4) == 16);
	return 0;
}