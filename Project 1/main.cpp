#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <streambuf>
#include <set>
#include <algorithm>
#include <cassert>

#include "Arena.h"
#include "Game.h"
#include "Player.h"
#include "Rat.h"
#include "globals.h"
#include "History.h"

using namespace std;

int main()
{
	// Create a game
	// Use this instead to create a mini-game:   Game g(3, 5, 2);

	Game g(rows, columns, rats);

	// Play the game
	g.play();
}
