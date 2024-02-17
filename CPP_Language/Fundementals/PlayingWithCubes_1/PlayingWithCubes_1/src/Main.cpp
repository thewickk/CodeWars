#include "Cube.h"
#include <iostream>
#include <memory>


int main()
{
	std::unique_ptr<Cube> c3 = std::make_unique<Cube>();

	c3->SetSide(4);

	std::cout << c3->GetSide() << std::endl;
}