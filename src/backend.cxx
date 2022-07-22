#include "backend.hxx"

int Backend::init() {
	dpy = xcb_connect(NULL, NULL);
	return xcb_connection_has_error(dpy);
}

int Backend::tick() {
	int ret = xcb_connection_has_error(dpy);
	if (ret == 0) {
		xcb_generic_event_t *ev = xcb_wait_for_event(dpy);
	}
	xcb_flush(dpy);
	return ret;
}

void Backend::quit() {
	if (dpy != NULL) {
		xcb_disconnect(dpy);
	}
}
