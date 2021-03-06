#include <iostream>
#include <SDL.h>
#include "GameController.h"


int main(int argc, char** argv)
{

	GameController* game_controller = GameController::get_instance();
	game_controller->initialize_SDL();
	game_controller->splash();
	game_controller->main_menu();
	return 0;
}
