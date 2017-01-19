#include <iostream>

#include "History.h"
#include "globals.h"

using namespace std;


History::History(int nRows, int nCols)
{
	maxRows = nRows;
	maxCols = nCols;

	for (int i = 0; i != maxRows; i++)
	{
		for (int j = 0; j != maxCols; j++)
		{
			historyRecord[i][j] = 0;
		}
	}
}

bool History::record(int r, int c)
{
	if (r < 1 || r > maxRows)
		return false;
	else if (c < 1 || c > maxCols)
		return false;

	historyRecord[r - 1][c - 1] += 1;

	return true;
}

void History::display() const
{
	char historyDisplay[MAXROWS][MAXCOLS];
	
	for (int i = 0; i != MAXROWS; i++)
	{
		for (int j = 0; j != MAXCOLS; j++)
			historyDisplay[i][j] = '.';
	}

	for (int i = 0; i != maxRows; i++)
	{
		for (int j = 0; j != maxCols; j++)
		{
			switch (historyRecord[i][j])
			{
			case 0:
				historyDisplay[i][j] = '.';
				break;
			case 1:
				historyDisplay[i][j] = 'A';
				break;
			case 2:
				historyDisplay[i][j] = 'B';
				break;
			case 3:
				historyDisplay[i][j] = 'C';
				break;
			case 4:
				historyDisplay[i][j] = 'D';
				break;
			case 5:
				historyDisplay[i][j] = 'E';
				break;
			case 6:
				historyDisplay[i][j] = 'F';
				break;
			case 7:
				historyDisplay[i][j] = 'G';
				break;
			case 8:
				historyDisplay[i][j] = 'H';
				break;
			case 9:
				historyDisplay[i][j] = 'I';
				break;
			case 10:
				historyDisplay[i][j] = 'J';
				break;
			case 11:
				historyDisplay[i][j] = 'K';
				break;
			case 12:
				historyDisplay[i][j] = 'L';
				break;
			case 13:
				historyDisplay[i][j] = 'M';
				break;
			case 14:
				historyDisplay[i][j] = 'N';
				break;
			case 15:
				historyDisplay[i][j] = 'O';
				break;
			case 16:
				historyDisplay[i][j] = 'P';
				break;
			case 17:
				historyDisplay[i][j] = 'Q';
				break;
			case 18:
				historyDisplay[i][j] = 'R';
				break;
			case 19:
				historyDisplay[i][j] = 'S';
				break;
			case 20:
				historyDisplay[i][j] = 'T';
				break;
			case 21:
				historyDisplay[i][j] = 'U';
				break;
			case 22:
				historyDisplay[i][j] = 'V';
				break;
			case 23:
				historyDisplay[i][j] = 'W';
				break;
			case 24:
				historyDisplay[i][j] = 'X';
				break;
			case 25:
				historyDisplay[i][j] = 'Y';
				break;
			default:
				historyDisplay[i][j] = 'Z';
				break;
			}
		}
	}

	clearScreen();
	
	for (int i = 0; i != maxRows; i++)
	{
		for (int j = 0; j != maxCols; j++)
			cout << historyDisplay[i][j];
		cout << endl;
	}

	cout << endl;
}
