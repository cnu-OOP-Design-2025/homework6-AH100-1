#include <iostream>
#include "bird.h"


void Duck::cry() {
	std::cout << "Quack!" << std::endl;
}

void Penguin::cry() {
	std::cout << "Squawk!" << std::endl;
}

void Penguin::fly() {
	std::cout << "This bird can't fly." << std::endl;
}

void Eagle::cry() {
	std::cout << "Screech!" << std::endl;
}

void Eagle::swim() {
	std::cout << "This bird can't swim." << std::endl;
}
