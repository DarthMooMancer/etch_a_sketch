#include "elements.hpp"

void cleanup(Point** buffer, int buffer_size) {
	for(int i = 0; i < buffer_size; i++) {
		delete buffer[i];
	}
}
