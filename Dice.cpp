#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int diceRoll(int dieSides)
{
	int d6;
	srand(time(NULL));
	d6 = rand() % dieSides + 1;
	return d6;
}

int statRoll()
{
	int d61;
	srand(time(NULL));
	d61 = rand() % 6 + 1;

	Sleep(900);

	int d62;
	srand(time(NULL));
	d62 = rand() % 6 + 2;

	Sleep(900);

	int d63;
	srand(time(NULL));
	d63 = rand() % 6 + 1;

	Sleep(900);

	int d64;
	srand(time(NULL));
	d64 = rand() % 6 + 1;

	int dmin = d61;
	if (d62 < dmin) dmin = d62;
	if (d63 < dmin) dmin = d63;
	if (d64 < dmin) dmin = d64;
	int droll = int(d61 + d62 + d63 + d64 - dmin);
	return droll;
}