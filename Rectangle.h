#pragma once
#include "IShape.h"
class Rectangle :public IShape
{
public:
	void Size() override;
	void Draw() override;
protected:
	int Length = 5;
	int Width = 3;
	int Answer;
};

