#include "backend.hxx"

Backend backend;

int tick() {
	return backend.tick();
}

int run() {
	return backend.init();
}

void quit() {
	backend.quit();
}

int main(int argc, char *argv[]) {
	int ret = run();
	while (ret == 0)
		ret = tick();
	quit();
	return 0;
}
