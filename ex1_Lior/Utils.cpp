#include "Utils.hpp"
#include "stack_.hpp"
#include <iostream>

void reverse(int* nums, unsigned int size) {
	int i = 0;
	unsigned int value;
	Stack* temp_stack = new Stack;
	initStack(temp_stack);
	for (i = 0; i < size; i++) {
		value = nums[i];
		push(temp_stack, value);
	}
	for (i = 0; i < size; i++) {
		nums[i] = pop(temp_stack);
	}
}

int* reverse10() {
	int size;
	int i = 0;
	std::cout << "Please enter the size of your list: ";
	std::cin >> size;
	int* nums = new int[size];
	for (i = 0; i <= size - 1; i++) {
		std::cout << "Please enter value number " << i + 1 << ": ";
		std::cin >> nums[i];
		std::cout << std::endl;
	}
	std::cout << "Your original list: " << std::endl;
	for (i = 0; i <= size - 1; i++) {
		std::cout << "Value number " << i + 1 << ": " << nums[i] << std::endl;
	}
	reverse(nums, size);
	std::cout << std::endl;

	std::cout << "Your new reversed list: " << std::endl;
	for (i = 0; i <= size - 1; i++) {
		std::cout << "Value number " << i + 1 << ": " << nums[i] << std::endl;
	}
	return nums;
}