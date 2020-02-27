/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

#include<string>


class Rect
{
public:
	Rect(int width, int height);
	int calc_area()const { return area};
	void set_values(int, int);
private:
	int area( width * height)
};