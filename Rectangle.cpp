#include "Rectangle.h"

void Rectangle::Size()
{
	Answer = Length * Width;
}

void Rectangle::Draw()
{
	printf("長方形の面積は%d\n", Answer);
}
