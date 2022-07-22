#include "backend.hxx"

Backend backend;

int init() {
	return backend.init();
}

int tick() {
	return backend.tick();
}

void quit() {
	backend.quit();
}

int main(int argc, char *argv[]) {
	int ret = init();
	while (ret == 0)
		ret = tick();
	quit();
	return 0;
}
