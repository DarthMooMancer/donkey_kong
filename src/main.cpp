#include <iostream>
#include <thread>
#include "window.hpp"
#include "input.hpp"

int main() {
	Input input;
	bool running = true;
	std::thread input_thread(&Input::get_input, &input, std::ref(running));
	std::cout << "Hello World" << std::endl;

	int count = 0;
	while (running) {
		if(count < 10) {
			std::cout << "Test" << std::endl;
		} else break;
		count++;
	}

	input_thread.join();
	return 0;
}
