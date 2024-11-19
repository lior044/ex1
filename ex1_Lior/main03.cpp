#include "Utils.hpp"
#include "Stack_.hpp"
#include <iostream>

int main() {
	int* nums = new int;
	nums = reverse10();
	delete[] nums;
	return 0;
}