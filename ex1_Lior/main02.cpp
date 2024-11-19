#include "Stack_.hpp"
#include <iostream>


int main() {
    Stack* myStack = new Stack; // Initialize stack pointer
    initStack(myStack);

    int choice = 0;
    unsigned int element;

    do {
        std::cout << "Stack Operations Menu:" << std::endl;
        std::cout << "1. Push an element onto the stack" << std::endl;
        std::cout << "2. Pop an element from the stack" << std::endl;
        std::cout << "3. Check if the stack is empty" << std::endl;
        std::cout << "4. Clean the stack and exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter the element to push: ";
            std::cin >> element;
            push(myStack, element);
            std::cout << element << " has been pushed onto the stack." << std::endl;
            break;

        case 2:
            if (!isEmpty(myStack)) {
                std::cout << "Popped: " << pop(myStack) << std::endl;
            }
            else {
                std::cout << "The stack is empty. Nothing to pop." << std::endl;
            }
            break;

        case 3:
            if (isEmpty(myStack)) {
                std::cout << "The stack is empty." << std::endl;
            }
            else {
                std::cout << "The stack is not empty." << std::endl;
            }
            break;

        case 4:
            cleanStack(myStack);
            std::cout << "The stack has been cleaned." << std::endl;
            break;

        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }
    } while (choice != 4);

    delete myStack;
    return 0;
}
