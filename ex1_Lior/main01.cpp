#include <iostream>
#include "Queue_.hpp"

int main() {
	unsigned int size = 0;
	unsigned int newValue;
	int choice = 0;
	int i = 0;

	std::cout << "Enter the size of your queue: ";
	std::cin >> size;

	Queue* q = makequeue(size);
	while (choice != 4) {
		std::cout << "What will you like to do with your queue?" << std::endl;
		std::cout << "1. view your queue." << std::endl;
		std::cout << "2. enqueue." << std::endl;
		std::cout << "3. dequeue." << std::endl;
		std::cout << "4. clean queue." << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			displayQueue(q);
			break;

		case 2:
			std::cout << "Enter the new value you want to insert: ";
			std::cin >> newValue;
			enqueue(q, newValue);
			break;

		case 3:
			if (isEmpty(q)) {
				std::cout << "Queue is empty. Nothing to dequeue!" << std::endl;
			}
			else {
				std::cout << "The value you dequeued was: " << dequeue(q) << std::endl;
			}
			break;

		case 4:
			cleanQueue(q);
			std::cout << "Queue cleaned. Exiting program." << std::endl;
			break;

		default:
			std::cout << "Invalid choice! Please enter a number between 1 and 4." << std::endl;
		}

	}


	return 0;
}
