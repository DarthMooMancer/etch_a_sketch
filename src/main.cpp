#include <iostream>
#include <thread>
#include "elements.hpp"
#include "window.hpp"
#include "globals.hpp"
#include "input.hpp"

int main() {
	Window window;
	Input input;
	int buffer_size = ROW * COL;
	bool running = true;
	Point* buffer[ROW * COL] = {};
	buffer[0] = new Point { 3, 4, '0' };

	std::thread input_thread([&] { input.get_input(running); } );
	while(running) {
		window.clear_display();
		window.update_board(buffer, buffer_size);
		window.draw_display(FMPS);
	}
	input_thread.join();
	cleanup(buffer, buffer_size);
	return 0;
}
