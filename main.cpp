#include <stdio.h>
#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"
int main() {

	IShape* iShape[3];

	for (int i = 0; i < 2; i++) {
		if (i < 1)
			iShape[i] = new Rectangle;
		else
			iShape[i] = new Circle;
	}

	for (int i = 0; i < 2; i++) {
		iShape[i]->Size();
	}

	for (int i = 0; i < 2; i++) {
		iShape[i]->Draw();
	}


	return 0;
}