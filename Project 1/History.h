#ifndef HISTORY_H
#define HISTORY_H

#include "globals.h"

using namespace std;

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;

private:
	int historyRecord[MAXROWS][MAXCOLS];
	int maxRows;
	int maxCols;
};

#endif //HISTORY_H
