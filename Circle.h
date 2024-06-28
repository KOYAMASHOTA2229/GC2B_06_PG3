#pragma once
#include "IShape.h"
class Circle :public IShape
{
public:
	void Size() override;
	void Draw() override;
protected:
	int radius = 3;
	int Answer;
};

