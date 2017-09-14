#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

#include <ctime>

//declaration



int main() {

	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_DISPLAY *display2 = NULL;
	ALLEGRO_DISPLAY *display3 = NULL;
	ALLEGRO_DISPLAY *display4 = NULL;

	//window 1
	display = al_create_display(800, 800);
	al_set_window_position(display, 0, 0);
	al_clear_to_color(al_map_rgb(10, 50, 70));
	al_draw_filled_circle(100, 100, 200, al_map_rgb(20, 500, 45));
	al_flip_display();

	//window 2
	display2 = al_create_display(800, 800);
	al_set_window_position(display2, 800, 600);
	al_clear_to_color(al_map_rgb(10, 50, 170));
	al_draw_filled_circle(100, 100, 200, al_map_rgb(120, 500, 45));
	al_flip_display();

	//window 3
	display3 = al_create_display(800, 800);
	al_set_window_position(display3, 0, 60);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_filled_circle(400, 600, 200, al_map_rgb(120, 500, 45));
	al_flip_display();

	//window 4
	display4 = al_create_display(800, 800);
	al_set_window_position(display4, 800, 0);
	al_clear_to_color(al_map_rgb(10, 50, 170));
	al_draw_filled_circle(400, 100, 200, al_map_rgb(0, 0, 0));
	al_flip_display();
	al_rest(10);
}
