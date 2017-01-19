#ifndef GAME_H
#define GAME_H

#include <string>
#include "globals.h"

class Arena;

bool recommendMove(const Arena& a, int r, int c, int& bestDir);
int computeDanger(const Arena& a, int r, int c);

class Game
{
public:
	// Constructor/destructor
	Game(int rows, int cols, int nRats);
	~Game();

	// Mutators
	void play();

private:
	Arena* m_arena;

	// Helper functions
	string takePlayerTurn();

	//Determine if History option is selected
	bool m_isHistory = false;
};

#endif  //GAME_H
