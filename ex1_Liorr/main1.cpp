#include <iostream>
#include "Queue.hpp"

int main() {
	unsigned int size = 0;
	unsigned int newValue;
	int choice = 0;
	int i = 0;

	std::cout << "Enter the size of your queue: ";
	std::cin >> size;

	Queue* q = makequeue(size);
	while(choice != 4){
		std::cout << "What will you like to do with your queue?" << std::endl;
		std::cout << "1. view your queue." << std::endl;
		std::cout << "2. enqueue." << std::endl;
		std::cout << "3. dequeue." << std::endl;
		std::cout << "4. clean queue." << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			if (q->count == 0) {
				std::cout << "Your queue is empty!" << std::endl;
			}
			else {
				for (i = 0; i < q->count; i++) {
					std::cout << "place: " << i + 1 << "the value: " << q->data[i] << std::endl;
				}
			}
			break;

		case 2:
			std::cout << "Enter the new value you want to insert: ";
			std::cin >> newValue;
			enqueue(q,newValue);
			break;
			
		case 3:
			std::cout << "The value you deleted was: " << dequeue(q) << std::endl;

		case 4:
			cleanQueue(q);
		}

	}


	return 0;
}