#ifndef GAME_H_
#define GAME_H_

#include "../HeaderFile/Common.h"
#include "../HeaderFile/global.h"

namespace GAME
{
	// Initialize character
	bool createCharacter(CharacterObject* p_Character);
	bool createListCharacter();

	// Screen 1
	bool Screen1();

	//move screen
	bool moveScreen();
}

#endif // !GAME_H_
