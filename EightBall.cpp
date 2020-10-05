#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Dice.h"

using namespace std;

string eightBall() {
	string ans;

	int shake = diceRoll(20);

	if (shake == 1) ans = "It is certain";
	else if (shake == 2) ans = "It is decidedly so";
	else if (shake == 3) ans = "Without a doubt";
	else if (shake == 4) ans = "Yes - Definitely";
	else if (shake == 5) ans = "You may rely on it";
	else if (shake == 6) ans = "As I see it, yes";
	else if (shake == 7) ans = "Most likely";
	else if (shake == 8) ans = "Outlook good";
	else if (shake == 9) ans = "Yes";
	else if (shake == 10) ans = "Signs point to yes";
	else if (shake == 11) ans = "Reply hazy, try again later";
	else if (shake == 12) ans = "Ask again later";
	else if (shake == 13) ans = "Better not to tell you now";
	else if (shake == 14) ans = "Cannot predict now";
	else if (shake == 15) ans = "Concentrate and ask again";
	else if (shake == 16) ans = "Don't count on it";
	else if (shake == 17) ans = "My reply is no";
	else if (shake == 18) ans = "My sources say no";
	else if (shake == 19) ans = "Outlook not so good";
	else if (shake == 20) ans = "Very doubtful";

	return ans;
}