#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include "stdafx.h"
#include <Windows.h>

using namespace std;

double noteFreq(char note, int octave, bool flat)
{
	double frequency, halfSteps;
	halfSteps = 0;

	switch (note)
	{
	case 'C':
		halfSteps = 0;
		break;
	case 'D':
		halfSteps = 2;
		break;
	case 'E':
		halfSteps = 4;
		break;
	case 'F':
		halfSteps = 5;
		break;
	case 'G':
		halfSteps = 7;
		break;
	case 'A':
		halfSteps = 9;
		break;
	case 'B':
		halfSteps = 11;
	}

	halfSteps = halfSteps + (octave * 12);

	if (flat) halfSteps = halfSteps - 1;

	frequency = 16.35 * pow(1.059463094359, halfSteps);
	return frequency;
}