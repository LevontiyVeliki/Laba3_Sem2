#include <string>
#include "Borders.h"

void Borders::set_left_border(double input_left_border) {
	Borders::left_border = input_left_border;
}
void Borders::set_right_border(double input_right_border) {
	Borders::right_border = input_right_border;
}
double Borders::get_long(double left_border, double right_border) {
	Borders::long_of = abs(right_border - left_border);
	std::cout << Borders::long_of << " ";
	std::cout << Borders::long_of * Borders::long_of;
	return Borders::long_of;
}

