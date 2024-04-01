#pragma once
#include <iostream>

class Borders {
public:
	void set_left_border(double);
	void set_right_border(double);
	double get_long(double, double);

private:
	double left_border, right_border, long_of;
};

