all:
	g++ -DPUGL_HAVE_CAIRO -I ../avtk/ minimal_ui.cxx ../avtk/pugl/pugl_x11.c  -L../build  -lavtk -lX11 `pkg-config --cflags --libs cairo` -o minimal_ui
