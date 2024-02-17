#include "Cube.h"


const int &Cube::GetSide()
{
	return this->Side;
}

void Cube::SetSide(int new_side)
{
	this->Side = new_side;
}