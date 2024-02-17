#pragma once

class Cube
{
private:
	int Side{ 0 };

public:

	const int &GetSide();

	void SetSide(int new_sid);
};