#pragma once

#include <filesystem>

#include <xcb/xcb.h>

using namespace std;
using namespace filesystem;

class Backend {
  public:
  	int init();
  	int tick();
  	void quit();

  	xcb_connection_t *dpy;
};
