// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <Windows.h>
#include <fstream>
#include <vector>
#include "Dice.h"
#include "EightBall.h"

using namespace std;

string password, opn, begun, clas, race, bday, dwarsub, elfsub, halfsub, dgbchoose, gnosub, barbchoice, barbpath, brsk;
string bard, totm, totmsprt, bardcleg, cleglvl, x, bardspel, clrc, dice, clrcsecondlevel, ddom, domfeat, asmrsub, clrspel;
string drid, dridcrl, wshape, crlopt, dridspel, y, z, fitr, marc, monk, mtra, pldn, pldnspel, soth, sothchoice, rngr;
string rarc, bmst, hntr, rngrspel, rog, rorc, opt, srcr, sorg, srcrspel, wrlk, ptrn, prereq, wrlkspel, wzrd, arct;
string wzrdspel, bckgrnd;

int main()
{
	cout << "Enter the password:" << endl;
	cin >> password;
	
	if (password == "DanDiDioisawhoreandafraud")
	{
		cout << endl << "Welcome to this Program, Jacob" << endl;
		cout << "Your two options are to to type 'begin' or 'message'" << endl;
		explain:
		cout << "'begin' will obviously start the reference program, while 'message' will load  message from me to you'" << endl;
		cin >> opn;

		if (opn == "message")
		{
			cout << endl << "Hey Jacob!" << endl;
			cout << "I know this message is a bit late, considering I already gave you the initial program." << endl;
			cout << "Also, just so you know, still not everything is working, I just felt bad for keeping" << endl;
			cout << "the flash drive from you. Anywho, now for the actual message." << endl << endl;
			cout << "YOU! ARE! VALID!" << endl;
			cout << "I don't care what grades you make or how stupidly confusing your sleep schedule is" << endl;
			cout << "Wanna know how many lines of code this bad boy has? over 12650 (12677 to be exact). " << endl;
			cout << "I care that this beast is well done cuz I care that you only get the best!" << endl << endl << "-Your aquaintance," << endl;
			cout << "Jefferson Koonce" << endl << endl;
			Sleep(5000);
			cout << "This will now start the DnD reference program" << endl << endl;
			Sleep(1000);
			goto thiccboi;
		}

		else if (opn == "begin")
		{
			thiccboi:
			cout << endl << "Welcome to the Reference Program" << endl;
			cout << "(Programmer's Note: As a rule, typing 'list' will give you a list of options to" << endl;
			cout << "choose from where you are. Furthermore, 'exit' will bring you back by one step)";
			rference:
			cout << endl << "What would you like to see?" << endl;
			cin >> begun;

			//class reference
			//
			if (begun == "class")
			{
				clas:
				cout << endl << "Class reference- type the name of the class you want to view, 'list' to view what classes are available" << endl;
				cout << "or 'exit' to return to the main page" << endl;
				cin >> clas;

				if (clas == "list")
				{
					cout << "List of Classes - what to type to view the class" << endl;
					cout << "Barbarian - barb" << endl << "Bard - bard" << endl << "Cleric-clrc" << endl << "Druid - drid" << endl;
					cout << "Fighter - fitr" << endl << "Monk - monk" << endl << "Paladin - pldn" << endl << "Ranger - rngr" << endl;
					cout << "Rogue - rog" << endl << "Sorcerer - srcr" << endl << "Warlock - wrlk" << endl << "Wizard - wzrd" << endl << endl;
					goto clas;
				}
				//barbarian
				//
				else if (clas == "barb")
				{
					cout << endl << "--BARBARIAN--" << endl << "Saving throws: Strength (primary), Constitution" << endl;
					cout << "Hit dice: 1d12/level" << endl << "HP at 1st level: 12 + Con Modifier" << endl;
					cout << "HP at higher levels: 1d12 (or 7) + Con mod for each level after 1st." << endl << endl;
					cout << "UNARMORED DEFENSE: While not wearing armor, your AC is 10 + Dex mod + Con mod" << endl << endl;
					cout << "--PROFICIENCIES--" << endl;
					cout << "Armor: Light, Medium, Shield" << endl << "Weapon: Simple, Martial" << endl;
					cout << "Skills, choose two (2): Animal Handling, Athletics, Intimidation, Nature," << endl;
					cout << "Perception, Survival" << endl << endl << "Reccomended background: Outlander" << endl << endl;
					cout << "--EQUIPMENTt--" << endl << "-Greataxe OR any martial melee weapon" << endl;
					cout << "-Two (2) Handaxes OR any simple weapon" << endl << "-Explorer's pack and four (4) Javelins" << endl << endl;
					cout << "--RAGE--" << endl << "As a bonus action during combat, you can rage. While raging" << endl;
					cout << "and not wearing heavy armor, you get the following buffs:" << endl;
					cout << "-Advantage on Str checks/saving throws" << endl << "-Resistance to bludgeon, piercing, and slashing dmg" << endl;
					cout << "-When making a melee attack using Str, you gain a bonus to the damage role (Lvl related, see 'tabl' option below)" << endl;
					barbchoice:
					cout << endl << "Would you like to view the barbarian's level table, paths, or more specifics of level stats?" << endl << "('list' will give a list of options.)" << endl;
					cin >> barbchoice;

					if (barbchoice == "tabl")
					{
						cout << endl << "Level Stat Table (First line is the format)" << endl << "Lvl - Prof. Bonus - New Feature(s) - Rages/day - Rage dmg" << endl;
						cout << "1st - +2 - Rage, Unarmored defense - 2 - +2" << endl << "2nd - +2 - Reckless attack, Danger sense - 2 - +2" << endl;
						cout << "3rd - +2 - Primal Path Choice - 3 - +2" << endl << "4th - +2 - Ability Score Improve - 3 - +2" << endl;
						cout << "5th - +3 - Extra Attack, Fast Movement - 3 - +2" << endl << "6th - +3 - Path Feature - 4 - +2" << endl;
						cout << "7th - +3 - Feral Instinct - 4 - +2" << endl << "8th - +3 - Ability Score Improve - 4 - +2" << endl;
						cout << "9th - +4 - Brutal Crit (1 die) - 4 - +3" << endl << "10th - +4 - Path Feature - 4 - +3" << endl;
						cout << "11th - +4 - Relentless Rage - 4 - +3" << endl << "12th - +4 - Ability Score Improve - 5 - +3" << endl;
						cout << "13th - +5 - Brutal Crit (2 die) - 5 - +3" << endl << "14th - +5 - Path Feature - 5 - +3" << endl;
						cout << "15th - +5 - Persistant Rage - 5 - +3" << endl << "16th - +5 - Ability Score Improve - 5 - +4" << endl;
						cout << "17th - +6 - Brutal Crit (3 die) - 6 - +4" << endl << "18th - +6 - Indomitable Might - 6 - +4" << endl;
						cout << "19th - +6 - Ability Score Improve - 6 - +4" << endl << "20th - +6 - Primal Champion - Unlimited - +4" << endl;
						goto barbchoice;
					}

					else if (barbchoice == "list")
					{
						cout << "List of Choices for Barbarian" << endl;
						cout << "Path options - 'path'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto barbchoice;
					}

					else if (barbchoice == "1st")
					{
						cout << endl << "1st Level" << endl;
						cout << "UNARMORED DEFENSE: While not wearing armor (shield is ok), your AC is 10 + Str mod + Con mod" << endl;
						cout << "RAGE: On your turn, as bonus action, you can enter rage. It lasts a minute, but ends early" << endl;
						cout << "if you are knocked unconscious or if your turn ends and you haven't attacked a hostile creature" << endl;
						cout << "You can also end it on your turn as a bonus action. You can't spellcast while raging. You get" << endl;
						cout << "an amount of rages per long rest as shown in 'tabl'. While raging, you get these benefits:" << endl;
						cout << "-Advantage on Str checks and saves\n-Resist to bludgeon, pierce, and slash damage" << endl;
						cout << "-Str melee weapon gets bonus damage equal to amount shown under Rage dmg in 'tabl'" << endl;
						goto barbchoice;
					}

					else if (barbchoice == "2nd")
					{
						cout << endl << "2nd Level" << endl;
						cout << "RECKLESS ATTACK: You can choose to attack recklessly on your attack step. If you do this," << endl;
						cout << "you have the advantage on melee attack rolls using Str, but attack rolls against you have" << endl;
						cout << "the advantage until your next turn" << endl;
						cout << "DANGER SENSE: You can sense when there are things nearby that shouldn't be. You also have" << endl;
						cout << "the advantage on saving throws against things you can't see (i.e. traps). This does not" << endl;
						cout << "work if you are blind, deaf, or incapacitated" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "3rd")
					{
						cout << endl << "3rd Level" << endl;
						cout << "You choose a Path for your Rage. Type 'path' at the previous choice screen to see those." << endl;
						cout << endl;
						goto barbchoice;
					}

					else if (barbchoice == "4th")
					{
						cout << endl << "4th Level" << endl;
						barbabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto barbchoice;
					}

					else if (barbchoice == "5th")
					{
						cout << endl << "5th Level" << endl;
						cout << "EXTRA ATTACK- you can attack twice per Attack step" << endl;
						cout << "FAST MOVEMENT- your speed increases by 10ft while not in heavy armor" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "6th")
					{
						cout << endl << "6th Level" << endl;
						barbpathfeat:
						cout << "PATH FEATURE- you get a new feature with your path" << endl; 
						cout << "See 'path' at the above option for more details" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "7th")
					{
						cout << endl << "7th Level" << endl;
						cout << "FERAL INSTINCT- you have the advantage on initiative rolls due to your honed instincts" << endl;
						cout << "Also, if you are surprised at the begining of combat and aren't incapacitated, you can" << endl;
						cout << "act normally for the first turn, but only if you enter your Rage" << endl;
						goto barbchoice;
					}

					else if (barbchoice == "8th")
					{
						cout << endl << "8th Level" << endl;
						goto barbabil;
					}

					else if (barbchoice == "9th")
					{
						cout << endl << "9th Level" << endl;
						cout << "BRUTAL CRIT: You can roll one extra weapon damage die when deciding extra damage for" << endl;
						cout << "a critical hit on a melee attack" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "10th")
					{
						cout << endl << "10th Level" << endl;
						goto barbpathfeat;
					}

					else if (barbchoice == "11th")
					{
						cout << endl << "11th Level" << endl;
						cout << "RELENTLESS RAGE- While raging, if you drop to 0 HP but you don't die outright, you" << endl;
						cout << "Can make a DC 10 Con saving throw. On success, you drop to 1 HP instead. Each time you" << endl;
						cout << "Use this feature, the DC goes up by 5, but when you take a short or long rest the DC drops" << endl;
						cout << "back down to 10" << endl;
						goto barbchoice;
					}

					else if (barbchoice == "12th")
					{
						cout << endl << "12th Level" << endl;
						goto barbabil;
					}

					else if (barbchoice == "13th")
					{
						cout << endl << "13th Level" << endl;
						cout << "For Brutal Crit you can now roll two (2) weapon dmg die instead of one (1)" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "14th")
					{
						cout << endl << "14th Level" << endl;
						goto barbpathfeat;
					}

					else if (barbchoice == "15th")
					{
						cout << endl << "15th Level" << endl;
						cout << "PERSISTENT RAGE- your rage will only end early if you fall unconscious or choose to end it" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "16th")
					{
						cout << endl << "16th Level" << endl;
						goto barbabil;
					}

					else if (barbchoice == "17th")
					{
						cout << endl << "17th Level" << endl;
						cout << "For Brutal Crit you can now roll three (3) weapon dmg die instead of two (2)" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "18th")
					{
						cout << endl << "18th Level" << endl;
						cout << "INDOMITABLE MIGHT- If you make a Str check and roll less than your Str ability score," << endl;
						cout << "you can use the score instead of the roll" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "19th")
					{
						cout << endl << "19th Level" << endl;
						goto barbabil;
					}

					else if (barbchoice == "20th")
					{
						cout << endl << "20th Level" << endl;
						cout << "PRIMAL CHAMPION- your Str and Con scores increse by 4. Your max score for these abilities" << endl;
						cout << "is now 24 instead of 20" << endl << endl;
						goto barbchoice;
					}

					else if (barbchoice == "exit")
					{
						goto clas;
					}
					
					else if (barbchoice == "path")
					{
						barbpath:
						cout << endl << "--PRIMAL PATHS--" << endl;
						cout << "The Barbarian has two (2) paths available." << endl;
						cout << "Path of Berserker - brsk" << endl << "Path of Totem Warrior - totm" << endl;
						cin >> barbpath;

						if (barbpath == "brsk")
						{
							brsk:
							cout << endl << "Path of Berserker" << endl;
							cout << "Which Level feature do you want to see? (3rd, 6th, 10th, 14th)" << endl;
							cin >> brsk;

							if (brsk == "3rd")
							{
								cout << endl << "3rd Level Berserk" << endl;
								cout << "FRENZY- while raging you can go into a frenzy and take a bonus action of" << endl;
								cout << "a melee weapon attack each turn while raging. After your rage with frenzy you gain" << endl;
								cout << "one (1) level of exhaustion" << endl << endl;
								goto brsk;
							}

							else if (brsk == "6th")
							{
								cout << endl << "6th Level Berserk" << endl;
								cout << "MINDLESS RAGE- you can't be charmed or frightened while raging. If you are" << endl;
								cout << "charmed or frightened while entering rage, the effect doesn't take place until" << endl;
								cout << "after the rage" << endl;
								goto brsk;
							}

							else if (brsk == "10th")
							{
								cout << endl << "10th Level Berserk" << endl;
								cout << "INTIMIDATING PRESENCE- As your action, you can frighten someone so long as they" << endl;
								cout << "are within 30ft of you. They must make a Wis throw (DC 8 + Prof. Bonus + Con mod)" << endl;
								cout << "or they are frightened until the end of your next turn. You can repeat this action" << endl;
								cout << "to renew the frighten every turn" << endl << endl;
								goto brsk;
							}

							else if (brsk == "14th")
							{
								cout << endl << "14th Level Berserk" << endl;
								cout << "RETALIATION- when you take dmg from something within 5ft of you, you can make a" << endl;
								cout << "melee weapon attack as a reaction" << endl << endl;
								goto brsk;
							}

							else if (brsk == "exit")
							{
								cout << endl;
								goto barbpath;
							}

							else
							{
								cout << "You entered something wrong" << endl << endl;
								goto brsk;
							}
						}
						
						else if (barbpath == "totm")
						{
							totm:
							cout << endl << "Path of Totem Warrior" << endl;
							cout << "Which Level feature do you want to see? (3rd, 6th, 10th, 14th)" << endl << endl;
							cout << "Note: at each level, you pick a totem animal to channel your feature through." << endl;
							cout << "You can pick a different animal for each perk, but you need a small item to" << endl;
							cout << "represent that animal. The item must have a piece of your animal to work. (ex." << endl; 
							cout << "feather, claw.) You can view each animal path by typing their name on the level" << endl;
							cout << "you are looking at. The options are bear, wolf, and eagle." << endl;
							cin >> totm;

							if (totm == "3rd")
							{
								totm3:
								cout << endl << "3rd Level Totem Warrior" << endl;
								cout << "You know the 'Beast Sense' and 'Speak With Animals' spells, but can only cast them as ritual" << endl;
								cout << "TOTEM SPIRIT- pick which animal" << endl;
								cin >> totmsprt;

								if (totmsprt == "bear")
								{
									cout << endl << "BEAR" << endl;
									cout << "While raging, you have resistance to all damage except psychic" << endl << endl;
									goto totm3;
								}

								else if (totmsprt == "eagle")
								{
									cout << endl << "EAGLE" << endl;
									cout << "While raging and not wearing heavy armor, enemies have disadvantage on attack rolls against you." << endl;
									cout << "Also, you can use Dash as a bonus action each turn" << endl << endl;
									goto totm3;
								}

								else if (totmsprt == "wolf")
								{
									cout << endl << "WOLF" << endl;
									cout << "While raging, friendly characters have advantage on attack rolls to creatures within 5ft of you" << endl << endl;
									goto totm3;
								}

								else if (totmsprt == "exit")
								{
									cout << endl;
									goto totm;
								}

								else
								{
									cout << endl << "You typed something wrong" << endl << endl;
									goto totm3;
								}
							}
							

							else if (totm == "6th")
							{
								totm6:
								cout << endl << "6th Level Totem Warrior" << endl;
								cout << "ASPECT OF THE BEAST- pick which animal" << endl;
								cin >> totmsprt;

								if (totmsprt == "bear")
								{
									cout << endl << "BEAR" << endl;
									cout << "Your carrying capacity is doubled, and you have advantage on Str checks to push, pull" << endl;
									cout << "lift, or break items" << endl << endl;
									goto totm6;
								}

								else if (totmsprt == "eagle")
								{
									cout << endl << "EAGLE" << endl;
									cout << "You can see up to 1 mile with little to no difficulty, and can see fine details" << endl;
									cout << "up to 100ft away. And dim light doesnt disadvantage your Perception checks." << endl << endl;
									goto totm6;
								}

								else if (totmsprt == "wolf")
								{
									cout << endl << "WOLF" << endl;
									cout << "You can track other beings at a fast pace, and can move stealthily at a normal pace" << endl << endl;
									goto totm6;
								}

								else if (totmsprt == "exit")
								{
									cout << endl;
									goto totm;
								}

								else
								{
									cout << endl << "You typed something wrong" << endl << endl;
									goto totm6;
								}
							}
							
							else if (totm == "10th")
							{
								cout << endl << "10th Level Totem Warrior" << endl;
								cout << "SPIRIT WALKER- You can cast 'Commune With Nature', but only as a ritual" << endl;
								cout << "When you do this, a spirit form of one of your totem animals gives you the" << endl;
								cout << "information you want." << endl << endl;
								goto totm;
							}

							else if (totm == "14th")
							{
								totm14:
								cout << endl << "14th Level Totem Warrior" << endl;
								cout << "TOTEMIC ATTUNEMENT- pick which animal" << endl;
								cin >> totmsprt;

								if (totmsprt == "bear")
								{
									cout << endl << "BEAR" << endl;
									cout << "While raging, any enemy within 5ft of you has the disadvantage on" << endl;
									cout << "attack rolls to any target but you or others with this feature. This" << endl;
									cout << "does not work if target can't see or hear you or can't be frightened" << endl << endl;
									goto totm14;
								}

								else if (totmsprt == "eagle")
								{
									cout << endl << "EAGLE" << endl;
									cout << "While raging, you have a flying speed equal to your walking speed." << endl;
									cout << "But, if you end a turn in the air, you fall if nothing is holding you up" << endl << endl;
									goto totm14;
								}

								else if (totmsprt == "wolf")
								{
									cout << endl << "WOLF" << endl;
									cout << "As a bonus action on your turn, you can knock a Large or smaller creature into a prone" << endl;
									cout << "position" << endl << endl;
									goto totm14;
								}

								else if (totmsprt == "exit")
								{
									cout << endl;
									goto totm;
								}
								
								else
								{
									cout << endl << "You typed something wrong" << endl << endl;
									goto totm14;
								}
							}

							else if (totm == "exit")
							{
								cout << endl;
								goto barbpath;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto totm;
							}
						}

						else if (barbpath == "exit")
						{
							cout << endl;
							goto barbchoice;
						}

						else
						{
							cout << endl << "You entered something wrong" << endl;
							goto barbpath;
						}
					}

					else {
						cout << endl << "You entered something wrong" << endl;
						goto barbchoice;
					}
				}

				//bard
				//
				else if (clas == "bard")
				{
					cout << endl << "--BARD--" << endl << "Saving throws: Dexterity, Charisma (primary)" << endl;
					cout << "Hit dice: 1d8/lvl" << endl << "HP at 1st level: 8 + Con modifier" << endl;
					cout << "HP at higher levels: 1d8 (or 5) + Con mod per level after 1st" << endl;
					cout << "Spell save DC: 8 + Prof. Bonus + Cha Modifier" << endl;
					cout << "Spell attack modifier: Prof. Bonus + Cha Mod" << endl;
					cout << "--PROFICIENCIES--" << endl;
					cout << "Armor: light" << endl << "Weapons: Simple, long/short swords, rapiers, hand crossbows" << endl;
					cout << "Tools: Three (3) musical instruments of your choice" << endl << "Skills: Choose any three (3)" << endl;
					cout << endl << "--EQUIPMENT--" << endl;
					cout << "-A rapier, longsword, OR any simple weapon" << endl;
					cout << "-A diplomat's pack OR an entertainer's pack" << endl << "-A lute OR any other musical instrument" << endl;
					cout << "-Leather armor AND a dagger" << endl;
					cout << endl << "--RECCOMENDED CLASS CHOICES--" << endl;
					cout << "Background: Entertainer" << endl << "Cantrips: Dancing lights, Viscious mockery" << endl;
					cout << "Starting Spells: Charm person, Detect magic, Healing word, Thunderwave" << endl;
					bardchoice:
					cout << endl << "Would you like to view the bard's level table, colleges, or more specifics of level stats?" << endl << "('list' will give a list of options.)" << endl;
					cin >> bard;

					if (bard == "list")
					{
						cout << "List of Choices for Bard" << endl;
						cout << "College options - 'cleg'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "List of bard spells - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto bardchoice;
					}

					else if (bard == "tabl")
					{
						cout << endl << "Level Stat Table (First line is the format)" << endl << "Lvl - Prof. Bonus - New Feature(s) - Cantrips known - Spells known -";
						cout << "Spell slots (levels separated by commas" << endl << "[from 1st-9th. If a level is not used, it is not included)" << endl;
						cout << "1st - +2 - Spellcasting, Bardic Inspiration(d6) - 2 - 4 - 2" << endl;
						cout << "2nd - +2 - Jack of All Trades, Song of Rest(d6) - 2 - 5 - 3" << endl;
						cout << "3rd - +2 - Bard College, Expertise - 2 - 6 - 4,2" << endl;
						cout << "4th - +2 - Ability Score Improve - 3 - 7 - 4,3" << endl;
						cout << "5th - +3 - Bardic Inspiration (d8), Font of Inspiration - 3 - 8 - 4,3,2" << endl;
						cout << "6th - +3 - Countercharm, Bard College Feature - 3 - 9 - 4,3,3" << endl;
						cout << "7th - +3 - N/A - 3 - 10 - 4,3,3,1" << endl;
						cout << "8th - +3 - Ability Score Improve - 3 - 11 - 4,3,3,2" << endl;
						cout << "9th - +4 - Song of Rest(d8) - 3 - 12 - 4,3,3,3,1" << endl;
						cout << "10th - +4 - Bard Inspir. (d10), Expertise, Magic Secrets - 4 - 14 - 4,3,3,3,2" << endl;
						cout << "11th - +4 - N/A - 4 - 15 - 4,3,3,3,2,1" << endl;
						cout << "12th - +4 - Ability Score Improve - 4 - 15 - 4,3,3,3,2,1" << endl;
						cout << "13th - +5 - Song of Rest(d10) - 4 - 16 - 4,3,3,3,2,1,1" << endl;
						cout << "14th - +5 - Magic Secrets, college feature - 4 - 18 - 4,3,3,3,2,1,1" << endl;
						cout << "15th - +5 - Bard Inspir.(d12) - 4 - 19 - 4,3,3,3,2,1,1,1" << endl;
						cout << "16th - +5 - Ability Score Improve - 4 - 19 - 4,3,3,3,2,1,1,1" << endl;
						cout << "17th - +6 - Song of Rest(d12) - 4 - 20 - 4,3,3,3,2,1,1,1,1" << endl;
						cout << "18th - +6 - Magic Secrets - 4 - 22 - 4,3,3,3,3,1,1,1,1" << endl;
						cout << "19th - +6 - Ability Score Improve - 4 - 22 - 4,3,3,3,3,2,1,1,1" << endl;
						cout << "20th - +6 - Superior Inspiration - 4 - 22 - 4,3,3,3,3,2,2,1,1" << endl;
						goto bardchoice;
					}

					else if (bard == "1st")
					{
						cout << endl << "1st Level Bard" << endl;
						cout << "SPELLCASTING- you are able to cast spells (the number is detailed in 'tabl')" << endl;
						cout << "your spellcasting focus is a musical instrument" << endl;
						cout << "BARDIC INSPIRATION(d6)- AS a bonus action on a turn, you can choose an animal" << endl;
						cout << "within 60ft of you. Within 10 mins, that animal can add a roll of a d6 to any" << endl;
						cout << "ability check, saving throw, or attack roll. Can only be used once in the 10 mins" << endl;
						cout << "You have an amount of uses equal to your Cha modifier. You regain all uses" << endl;
						cout << "after a long rest." << endl;
						goto bardchoice;
					}

					else if (bard == "2nd")
					{
						cout << endl << "2nd Level Bard" << endl;
						cout << "JACK OF ALL TRADES- you can add half your proficiency bonus, rounded down, to any" << endl;
						cout << "ability check in a skill you aren't already proficient in" << endl;
						cout << "SONG OF REST(d6)- After giving some performance during a short rest, if any" << endl;
						cout << "friendlies who can hear your performance would heal after the short rest, they" << endl;
						cout << "regain an extra d6 roll of HP along with their initial heal" << endl;
						goto bardchoice;
					}

					else if (bard == "3rd")
					{
						cout << endl << "3rd Level Bard" << endl;
						cout << "BARD COLLEGE- You choose a college that gives features. More details in" << endl;
						cout << "the 'cleg' option." << endl << "EXPERTISE- pick two skills that you are";
						cout << "proficient in, and double" << endl << " your proficiency bonus for checks w/ that skill" << endl;
						goto bardchoice;
					}

					else if (bard == "4th")
					{
						cout << endl << "4th Level Bard" << endl;
						bardabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto bardchoice;
					}

					else if (bard == "5th")
					{
						cout << endl << "5th Level Bard" << endl;
						cout << "FONT OF INSPIRATION- After a short or long rest you regain all expended uses of" << endl;
						cout << "Bardic Inspiration" << endl << "Bardic Inspiration changes from a d6 to a d8" << endl;
						cout << "For an explanation of Bardic Inspiration, see 1st level" << endl;
						goto bardchoice;
					}

					else if (bard == "6th")
					{
						cout << endl << "6th Level Bard" << endl;
						cout << "COUNTERCHARM- As an action, you can do a performance that lasts until the end of" << endl;
						cout << "your next turn. During the performance, you and any friendlies within 30ft of you" << endl;
						cout << "have the advantage on saving throws against being charmed or frightened" << endl;
						cout << "COLLEGE FEATURE- you gain a feature from the college you chose at 3rd level" << endl;
						goto bardchoice;
					}

					else if (bard == "7th")
					{
						cout << endl << "7th Level Bard" << endl;
						bardnofeat:
						cout << "The bard does not gain any features at this level" << endl;
						goto bardchoice;
					}

					else if (bard == "8th")
					{
						cout << endl << "8th Level Bard" << endl;
						goto bardabil;
					}

					else if (bard == "9th")
					{
						cout << endl << "9th Level Bard" << endl;
						cout << "Song of Rest changes from a d6 to a d8" << endl;
						cout << "See 2nd level for an explanation of Song of Rest" << endl;
						goto bardchoice;
					}

					else if (bard == "10th")
					{
						cout << endl << "10th Level Bard" << endl;
						cout << "Bardic Inspiration now uses a d10 instead of a d8" << endl;
						cout << "EXPERTISE- choose two skills you are proficient in. For checks on those skills," << endl;
						cout << "your proficiency bonus is doubled." << endl << "MAGICAL SECRETS- You gain two spells or cantrips";
						cout << "from ANY class (level permiting), which can include Bard if you like" << endl;
						goto bardchoice;
					}

					else if (bard == "11th")
					{
						cout << endl << "11th Level Bard" << endl;
						goto bardnofeat;
					}

					else if (bard == "12th")
					{
						cout << endl << "12th Level Bard" << endl;
						goto bardabil;
					}

					else if (bard == "13th")
					{
						cout << endl << "13th Level Bard" << endl;
						cout << "Song of Rest now uses a d10 instead of a d8" << endl;
						goto bardchoice;

					}

					else if (bard == "14th")
					{
						cout << endl << "14th Level Bard" << endl;
						cout << "MAGICAL SECRETS- you learn two spells or cantrips from ANY class, which can include bard" << endl;
						cout << "if you like" << endl << "Also, you gan a feature from your Bard College" << endl;
						goto bardchoice;
					}

					else if (bard == "15th")
					{
						cout << endl << "15th Level Bard" << endl;
						cout << "Bardic Inspiration now uses a d12 instead of a d10" << endl;
						goto bardchoice;
					}

					else if (bard == "16th")
					{
						cout << endl << "16th Level Bard" << endl;
						goto bardabil;
					}

					else if (bard == "17th")
					{
						cout << endl << "17th Level Bard" << endl;
						cout << "Song of Rest now uses a d12 instead of aa d10" << endl;
						goto bardchoice;
					}

					else if (bard == "18th")
					{
						cout << endl << "18th Level Bard" << endl;
						cout << "MAGICAL SECRETS- you learn two spells or cantrips from ANY class, which can include bard" << endl;
						cout << "if you like" << endl;
						goto bardchoice;
					}

					else if (bard == "19th")
					{
						cout << endl << "19th Level Bard" << endl;
						goto bardabil;
					}

					else if (bard == "20th")
					{
						cout << endl << "20th Level Bard" << endl;
						cout << "SUPERIOR INSPIRATION- If you roll for initiative and have no Bardic Inspir. uses left," << endl;
						cout << "you regain one use" << endl;
						goto bardchoice;
					}

					else if (bard == "cleg")
					{
						bardcleg:
						cout << endl << "--BARD COLLEGES--" << endl;
						cout << "The bard has three (3) colleges available" << endl;
						cout << "College of Lore - lore" << endl << "College of Valor - valr" << endl << "College of Whispers - wspr" << endl;
						cin >> bardcleg;

						if (bardcleg == "lore")
						{
							lorecleg:
							cout << endl << "--COLLEGE OF LORE--" << endl;
							cout << "This college is scholarly, honest, and wants to know something about everything" << endl;
							cout << "Pick which level abilities you want to see (3rd, 6th, 14th)" << endl;
							cin >> cleglvl;

							if (cleglvl == "3rd")
							{
								cout << endl << "3rd Level Lore Bard" << endl;
								cout << "BONUS PROFICIENCIES: you are proficient in three more skills of your choice" << endl;
								cout << "CUTTING WORDS: when a creature you can see within 60ft of you makes a check, attack roll, or" << endl;
								cout << "damage roll, you can use your reaction and a use of Bardic Inspiration to subtract the number" << endl;
								cout << "you roll for B. Inspir. from the target's roll. The creature is immune if it can't hear you or" << endl;
								cout << "if it immune to charming" << endl;
								goto lorecleg;
							}

							else if (cleglvl == "6th")
							{
								cout << endl << "6th Level Lore Bard" << endl;
								cout << "ADDITIONAL MAGIC SECRETS- you learn two spells or cantrips from ANY class, which can" << endl;
								cout << "include Bard if you like" << endl;
								goto lorecleg;
							}

							else if (cleglvl == "14th")
							{
								cout << endl << "14th Level Lore Bard" << endl;
								cout << "PEERLESS SKILL: When making an ability check you can use Bardic Inspiration and add the roll" << endl;
								cout << "to your check" << endl;
								goto lorecleg;
							}

							else if (cleglvl == "exit")
							{
								cout << endl;
								goto bardcleg;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto lorecleg;
							}
						}

						else if (bardcleg == "valr")
						{
							valrcleg:
							cout << endl << "--COLLEGE OF VALOR--" << endl;
							cout << "These bards have seen great battle and love talking and singing about it" << endl;
							cout << "Which level do you want to see stuff from? (3rd, 6th, 14th)" << endl;
							cin >> cleglvl;

							if (cleglvl == "3rd")
							{
								cout << endl << "3rd Level Valor Bard" << endl;
								cout << "BONUS PROFICIENCIES: Medium armor, Shields, martial weapons" << endl;
								cout << "COMBAT INSPIRATION: A creature who has a Bardic Inspiration die from you can" << endl;
								cout << "use it to add to a damage roll or, as a reaction to an attack, can add it to" << endl;
								cout << "its own AC between the attacker's roll and the declaration of a hit or miss" << endl;
								goto valrcleg;
							}

							else if (cleglvl == "6th")
							{
								cout << endl << "6th Level Valor Bard" << endl;
								cout << "You can attack twice instead of once when making the Attack action on your turn" << endl;
								goto valrcleg;
							}

							else if (cleglvl == "14th")
							{
								cout << endl << "14th Level Valor Bard" << endl;
								cout << "BATTLE MAGIC: When casting a Bard spell, you can make one weapon attack as a bonus action" << endl;
								goto valrcleg;
							}

							else if (cleglvl == "exit")
							{
								cout << endl;
								goto bardcleg;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto valrcleg;
							}
						}

						else if (bardcleg == "wspr")
						{
							cout << endl << "--COLLEGE OF WHISPERS--" << endl;
							cout << "These are the rogue bards";
							wspr:
							cout << endl << "What do you want to see stuff for? (3rd, 6th, 14th)" << endl;
							cin >> cleglvl;

							if (cleglvl == "3rd")
							{
								cout << endl << "--3rd LEVEL WHISPER BARD--" << endl;
								cout << "PSYCHIC BLADES: Once per round on your turn, when you hit a creature" << endl;
								cout << "with a weapon attack, you can use one charge of your Bardic Inspiration" << endl;
								cout << "to deal an extra 2d6 Psychic damage to that creature. The damage increases" << endl;
								cout << "to 3d6 at 5th level, 5d6 at 10th level, and 8d6 at 15th level" << endl;
								cout << "WORDS OF TERROR: If you speak to a humanoid alone for 1 minute, you can attempt" << endl;
								cout << "to make it paranoid. At the end of the conversation, the target makes a Wis save" << endl;
								cout << "against your Spell Save DC. On a fail, it is frightened of you or of one creature" << endl;
								cout << "of your choice or until it is attacked or damaged or sees an ally being attacked" << endl;
								cout << "or damaged. On a success, the creature is unaffected and doesn't know what you" << endl;
								cout << "tried to do. This is once per short or long rest" << endl;
								goto wspr;
							}

							else if (cleglvl == "6th")
							{
								cout << endl << "--6th LEVEL WHISPER BARD--" << endl;
								cout << "MANTLE OF WHISPERS: When a humanoid dies within 30ft of you, you can use your" << endl;
								cout << "reaction to magically capture its shadow. You keep it until using it or after" << endl;
								cout << "a long rest, whichever is first. You can use the shadow as an action. When you" << endl;
								cout << "do, it magically transforms into a disuise covering you that makes you look like" << endl;
								cout << "the dead person (but in perfect health). It lasts for an hour or until you end it" << endl;
								cout << "as a bonus action. While disguised, you get all knowledge the person would share" << endl;
								cout << "in casual conversation. No secrets, but some backstory and knowledge of acquaintances." << endl;
								cout << "Another creature sees through the disguise if it succeeds by a Wis(Insight) check against" << endl;
								cout << "your Cha(Deception) check. You get a +5 bonus to that check. You can capture one shadow" << endl;
								cout << "per short or long rest" << endl;
								goto wspr;
							}

							else if (cleglvl == "14th")
							{
								cout << endl << "--14th LEVEL WHISPER BARD--" << endl;
								cout << "SHADOW LORE: Once per long rest, as an action, you can magically whisper a phrase that only" << endl;
								cout << "one creature within 30ft of you can hear. It makes a Wis saving throw against your spell" << endl;
								cout << "save DC. It automatically succeeds if it doesn't share a language with you or if it can't" << endl;
								cout << "hear you. On a success, the whisper is unintelligible and has no effect. On a fail, the" << endl;
								cout << "target is charmed by you for 8 hours or until you or your allies attack it, damage it, or" << endl;
								cout << "force it to make a saving throw. It interprets the whispers as its deepest secret, which it" << endl;
								cout << "believes you know. You do not gain knowledge of this secret. The charmed creature obeys your" << endl;
								cout << "commands for fear of its secret being out. It won't risk its life or fight for you unless it" << endl;
								cout << "was already inclined to do so. It grants you favors and gifts it would offer a close friend." << endl;
								cout << "after the 8 hours, the creature doesn't know why it feared you so much" << endl;
								goto wspr;
							}

							else if (cleglvl == "exit")
							{
								cout << endl;
								goto bardcleg;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto wspr;
							}
						}

						else if (bardcleg == "exit")
						{
							cout << endl;
							goto bardchoice;
						}

						else
						{
							cout << endl << "You entered something wrong" << endl;
							goto bardcleg;
						}
					}

					else if (bard == "spel")
					{
						spelbrd:
						cout << endl << "--BARD SPELL LISTS--" << endl;
						cout << "There are 9 levels of spellcasting, as well as cantrips (lvl 0)" << endl;
						cout << "What would you like to see? (1st-9th, 'cntp' for cantrips)" << endl;
						cin >> bardspel;
						
						if (bardspel == "cntp")
						{
							cout << endl << "--BARD CANTRIPS--" << endl;
							cout << "-Blade Ward" << endl << "-Dancing Lights" << endl << "-Friends" << endl;
							cout << "-Light" << endl << "-Mage Hand" << endl << "-Mending" << endl;
							cout << "-Message" << endl << "-Minor Illusion" << endl << "-Prestidigation" << endl;
							cout << "-True Strike" << endl << "-Vicious Mockery" << endl;
							goto spelbrd;
						}

						else if (bardspel == "1st")
						{
							cout << endl << "--1st LEVEL BARD SPELLS--" << endl;
							cout << "-Animal Friendship" << endl << "-Bane" << endl << "-Charm Person" << endl;
							cout << "-Comprehend Languages" << endl << "-Cure Wounds" << endl << "-Detect Magic" << endl;
							cout << "-Disguise self" << endl << "-Dissonant whisphers" << endl << "-Faerie Fire" << endl;
							cout << "-Feather Fall" << endl << "-Healing Word" << endl << "-Heroism" << endl;
							cout << "-Identify" << endl << "-Illusory Script" << endl << "Longstrider" << endl;
							cout << "-Silent Image" << endl << "-Sleep" << endl << "-Speak with animals" << endl;
							cout << "-Tasha's Hideous Laughter" << endl << "-Thunderwave" << endl << "-Unseen Servant" << endl;
							goto spelbrd;
						}

						else if (bardspel == "2nd")
						{
							cout << endl << "--2nd LEVEL BARD SPELLS--" << endl;
							cout << "-Animal Messenger" << endl << "-Blindness / Deafness" << endl << "-Calm Emotions" << endl;
							cout << "-Cloud of Daggers" << endl << "-Crown of Madness" << endl << "-Detect Thoughts" << endl;
							cout << "-Enhance Ability" << endl << "-Enthrall" << endl << "-Heat Metal" << endl;
							cout << "-Hold Person" << endl << "-Invisibility" << endl << "-Knock" << endl;
							cout << "-Lesser Restoration" << endl << "-Locate Animals or Plants" << endl << "-Locate Object" << endl;
							cout << "-Magic Mouth" << endl << "-Phantasmal Force" << endl << "-See Invisibility" << endl;
							cout << "-Shatter" << endl << "-Silence" << endl << "-Suggestion" << endl << "-Zone of Truth" << endl;
							goto spelbrd;
						}

						else if (bardspel == "3rd")
						{
							cout << endl << "--3rd LEVEL BARD SPELLS" << endl;
							cout << "-Bestow Curse" << endl << "-Clairvoyance" << endl << "-Dispel Magic" << endl;
							cout << "-Fear" << endl << "-Feign Death" << endl << "-Glyph of Warding" << endl;
							cout << "-Hypnotic Pattern" << endl << "-Leomund’s Tiny Hut" << endl << "-Major Image" << endl;
							cout << "-Nondetection" << endl << "-Plant Growth" << endl << "-Sending" << endl;
							cout << "-Speak with Dead" << endl << "-Speak with Plants" << endl << "-Stinking Cloud" << endl;
							cout << "-Tongues" << endl;
							goto spelbrd;
						}

						else if (bardspel == "4th")
						{
							cout << endl << "--4th LEVEL BARD SPELLS" << endl;
							cout << "-Compulsion" << endl << "-Confusion" << endl << "-Dimension Door" << endl;
							cout << "-Freedom of Movement" << endl << "-Greater Invisibility" << endl;
							cout << "-Hallucinatory Terrain" << endl << "-Locate Creature" << endl << "-Polymorph" << endl;
							goto spelbrd;
						}

						else if (bardspel == "5th")
						{
							cout << endl << "--5th LEVEL BARD SPELLS" << endl;
							cout << "-Animate Objects" << endl << "-Awaken" << endl << "-Dominate Person" << endl;
							cout << "-Dream" << endl << "-Geas" << endl << "-Greater Restoration" << endl;
							cout << "-Hold Monster" << endl << "-Legend Lore" << endl << "-Mass Cure Wounds" << endl;
							cout << "-Mislead" << endl << "-Modify Memory" << endl << "-Planar Binding" << endl;
							cout << "-Raise Dead" << endl << "-Scrying" << endl << "-Seeming" << endl;
							cout << "-Teleportation Circle" << endl;
							goto spelbrd;
						}

						else if (bardspel == "6th")
						{
							cout << endl << "--6th LEVEL BARD SPELLS" << endl;
							cout << "-Eyebite" << endl << "-Find the Path" << endl << "-Guards and Wards" << endl;
							cout << "-Mass Suggestion" << endl << "-Otto’s Irresistible Dance" << endl;
							cout << "-Programmed Illusion" << endl << "-True Seeing" << endl;
							goto spelbrd;
						}

						else if (bardspel == "7th")
						{
							cout << endl << "--7th LEVEL BARD SPELLS" << endl;
							cout << "-Etherealness" << endl << "-Forcecage" << endl << "-Mirage Arcane" << endl;
							cout << "-Mordenkainen’s Magnificent Mansion" << endl << "-Mordenkainen’s Sword" << endl;
							cout << "-Project Image" << endl << "-Regenerate" << endl << "-Resurrection" << endl;
							cout << "-Symbol" << endl << "-Teleport" << endl;
							goto spelbrd;
						}

						else if (bardspel == "8th")
						{
							cout << endl << "--8th LEVEL BARD SPELLS--" << endl;
							cout << "-Dominate Monster" << endl << "-Feeblemind" << endl << "-Glibness" << endl;
							cout << "-Mind Blank" << endl << "-Power Word Stun" << endl;
							goto spelbrd;
						}

						else if (bardspel == "9th")
						{
							cout << endl << "--9th LEVEL BARD SPELLS--" << endl;
							cout << "-Foresight" << endl << "-Power Word Kill" << endl << "-Power Word Kill" << endl;
							cout << "-True Polymorph" << endl;
							goto spelbrd;
						}
						
						else if (bardspel == "exit")
						{
							cout << endl;
							goto bardchoice;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto spelbrd;
						}
					}

					else if (bard == "exit")
					{
						cout << endl;
						goto clas;
					}
					
					else
					{
						cout << endl << "You entered something wrong." << endl;
						goto bardchoice;
					}
				}

				//cleric
				//
				else if (clas == "clrc")
				{
					cout << endl << "--CLERIC--" << endl << "Saving throws : Wisdom (Primary), Charisma" << endl;
					cout << "Hit Dice: 1d8 per level" << endl << "Hit Points at 1st level: 8 + Con modifier" << endl;
					cout << "Hit Points at higher levels: 1d8 (or 5) + Con mod per level after 1st" << endl << endl;
					cout << "Spell Save DC: 8 + Prof. Bonus + Wis modifier" << endl << "Spell attack mod: Prof. bonus + ";
					cout << "Wis modifier" << endl << endl;
					cout << "--RECOMENDATIONS--" << endl << "Background: Acolyte" << endl << endl;
					cout << "--PROFICIENCIES--" << endl;
					cout << "Armor: Light, Medium, Shields" << endl << "Weapons: All simple weapons" << endl;
					cout << "Tools: none" << endl << "Skills, choose TWO: History, Insight, Medicine, Persuasion, Religion" << endl << endl;
					cout << "--EQUIPMENT--" << endl;
					cout << "-Mace OR warhammer (if proficient)" << endl << "-Scale mail, leather armor, OR chain mail (if proficient)" << endl;
					cout << "-A light crossbow with 20 bolts OR any simple weapon" << endl << "-Priest pack OR explorer pack" << endl;
					cout << "-A shield AND holy symbol" << endl;
					clrc:
					cout << endl << "What would you like to view for the Cleric? (A list is available at 'list')" << endl;
					cin >> clrc;

					if (clrc == "list")
					{
						cout << endl << "List of Choices for Cleric" << endl;
						cout << "Divine Domain options - 'ddom'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "List of Cleric spells - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto clrc;
					}

					else if (clrc == "tabl")
					{
						cout << endl << "--CLERIC LEVEL TABLE--" << endl;
						cout << "Format: Lvl - Prof. Bonus - New Feature(s) - Cantrips known - Spell slots (levels separated by commas)" << endl;
						cout << "[from 1st-9th. If a level is not used, it is not included)" << endl;
						cout << "1st - +2 - Spellcasting, Divine Domain - 3 - 2" << endl;
						cout << "2nd - +2 - Channel Divinity (1/rest), Divine Domain Feature - 3 - 3" << endl;
						cout << "3rd - +2 - N/A - 3 - 4,2" << endl;
						cout << "4th - +2 - Ability Score Improve - 3 - 4,3" << endl;
						cout << "5th - +3 - Destroy Undead (CR 1/2) - 4 - 4,3,2" << endl;
						cout << "6th - +3 - Channel Divinity (2/rest), D Domain feature - 4 - 4,3,3" << endl;
						cout << "7th - +3 - N/A - 4 - 4,3,3,1" << endl;
						cout << "8th - +3 - Ability Score Improve, Destroy Undead (CR 1), D Dom Feature - 4 - 4,3,3,2" << endl;
						cout << "9th - +4 - N/A - 4 - 4,3,3,3,1" << endl;
						cout << "10th - +4 - Divine Intervention - 5 - 4,3,3,3,2" << endl;
						cout << "11th - +4 - Destroy Undead (CR 2) - 5 - 4,3,3,3,2,1" << endl;
						cout << "12th - +4 - Ability Score Improve - 5 - 4,3,3,3,2,1" << endl;
						cout << "13th - +5 - N/A - 5 - 4,3,3,3,2,1,1" << endl;
						cout << "14th - +5 - Destroy Undead (CR 3) - 5 - 4,3,3,3,2,1,1" << endl;
						cout << "15th - +5 - N/A - 5 - 4,3,3,3,2,1,1,1" << endl;
						cout << "16th - +5 - Ability Score Improve - 5 - 4,3,3,3,2,1,1,1" << endl;
						cout << "17th - +6 - Destroy Undead (CR 4), D Dom Feature - 5 - 4,3,3,3,2,1,1,1,1" << endl;
						cout << "18th - +6 - Channel Divinity (3/rest) - 5 - 4,3,3,3,3,1,1,1,1" << endl;
						cout << "19th - +6 - Ability Score Improve - 5 - 4,3,3,3,3,2,1,1,1" << endl;
						cout << "20th - +6 - Divine Intervention Improve - 5 - 4,3,3,3,3,2,2,1,1" << endl;
						goto clrc;
					}
					
					else if (clrc == "1st")
					{
						cout << endl << "1st Level Cleric" << endl;
						cout << "SPELLCASTING: You can do magic. Your spellcasting focus is a holy symbol" << endl;
						cout << "The amount of spells you know at any given time is your Wis modifier + level" << endl;
						cout << "You prepare a list of which spells you can use each day at the beginning of the day" << endl;
						cout << "DIVINE DOMAIN: You choose a domain related to your deity (detailed in 'ddom')" << endl;
						cout << "You also receive Domain Spells, spells specific to your Domain that you always have" << endl;
						cout << "prepared and which don't count against your daily spell list preparation. If one of" << endl;
						cout << "the spells you receive is not a cleric spell, it becomes one for you" << endl;
						goto clrc;
					}

					else if (clrc == "2nd")
					{
						cout << endl << "--2nd LEVEL CLERIC--" << endl;
						cout << "CHANNEL DIVINITY: You can channel your deity to create one of two effects. You choose which effect" << endl;
						cout << "Option 1 is Turn Undead, option 2 is determined by your Divine Domain. At 2nd level you" << endl;
						cout << "can use this ability once per a long rest" << endl;
						cout << "You get a Divine Domain Feature at this level as well." << endl;
						cout << "Would you like to see what Turn Undead does? ('yes' to see, anything else to go back)" << endl;
						cin >> clrcsecondlevel;

						if (clrcsecondlevel == "yes")
						{
							cout << endl << "TURN UNDEAD: As an action, you present your holy symbol ans speak some holy words. Every undead" << endl;
							cout << "that can see or hear you within 30ft must make a Wis saving throw. If they fail, they" << endl;
							cout << "are turned for a minute or until taking damage. Turned creatures must spend their turns getting away" << endl;
							cout << "from you. It can't willingly move within 30ft of you. A turned creature cannot make reactions. It" << endl;
							cout << "can only use Dash as its action. If there is nowhere to use, it can use Dodge" << endl;
							goto clrc;
						}

						else
						{
							cout << endl;
							goto clrc;
						}
					}

					else if (clrc == "3rd")
					{
						cout << endl << "--3rd LEVEL CLERIC--" << endl;
						clrnofeat:
						cout << "You gain no features at this level" << endl;
						goto clrc;	
					}

					else if (clrc == "4th")
					{
						cout << endl << "--4th LEVEL CLERIC--" << endl;
						clrabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto clrc;
					}

					else if (clrc == "5th")
					{
						cout << endl << "--5th LEVEL CLERIC--" << endl;
						cout << "DESTROY UNDEAD: If an undead fails its saving throw for Turn Undead, it is immediately" << endl;
						cout << "destroyed if it has a challenge rating at or below 1/2" << endl;
						goto clrc;
					}

					else if (clrc == "6th")
					{
						cout << endl << "--6th LEVEL CLERIC--" << endl;
						cout << "You can now Channel Divinity two (2) times before a long rest" << endl;
						cout << "You get a Divine Domain feature" << endl;
						goto clrc;
					}

					else if (clrc == "7th")
					{
						cout << endl << "--7th LEVEL CLERIC--" << endl;
						goto clrnofeat;
					}

					else if (clrc == "8th")
					{
						cout << endl << "--8th LEVEL CLERIC--" << endl;
						cout << "Destroy Undead now works for undead with CR at or below 1" << endl;
						cout << "You get a Divine Domain feature" << endl;
						goto clrabil;
					}

					else if (clrc == "9th")
					{
						cout << endl << "--9th LEVEL CLERIC--" << endl;
						goto clrnofeat;
					}

					else if (clrc == "10th")
					{
						cout << endl << "--10th LEVEL CLERIC--" << endl;
						cout << "DIVINE INTERVENTION: You can ask your patron deity to intervene for you if your need is great" << endl;
						cout << "If you roll a number at or lower than your level, it succeeds. The DM can choose the nature" << endl;
						cout << "of how they intervene. If you succeed, you cannot use this again for another 7 days. If you" << endl;
						cout << "fail, you can use it after a long rest" << endl;
						goto clrc;
					}

					else if (clrc == "11th")
					{
						cout << endl << "--11th LEVEL CLERIC--" << endl;
						cout << "Destroy Undead now works for undead with CR at or below 2" << endl;
						goto clrc;
					}

					else if (clrc == "12th")
					{
						cout << endl << "--12th LEVEL CLERIC--" << endl;
						goto clrabil;
					}

					else if (clrc == "13th")
					{
						cout << endl << "--13th LEVEL CLERIC--" << endl;
						goto clrnofeat;
					}

					else if (clrc == "14th")
					{
						cout << endl << "--14th LEVEL CLERIC--" << endl;
						cout << "Destroy Undead now works for undead with CR at or below 3" << endl;
						goto clrc;
					}

					else if (clrc == "15th")
					{
						cout << endl << "--15th LEVEL CLERIC--" << endl;
						goto clrnofeat;
					}

					else if (clrc == "16th")
					{
						cout << endl << "--16th LEVEL CLERIC--" << endl;
						goto clrabil;
					}

					else if (clrc == "17th")
					{
						cout << endl << "--17th LEVEL CLERIC--" << endl;
						cout << "Destroy Undead now works for undead with CR at or below 4" << endl;
						cout << "You get a Divine Domain feature" << endl;
						goto clrc;
					}

					else if (clrc == "18th")
					{
						cout << endl << "--6th LEVEL CLERIC--" << endl;
						cout << "You can now Channel Divinity two (2) times before a long rest" << endl;
						goto clrc;
					}

					else if (clrc == "19th")
					{
						cout << endl << "--19th LEVEL CLERIC--" << endl;
						goto clrabil;
					}

					else if (clrc == "20th")
					{
						cout << endl << "--20th LEVEL CLERIC--" << endl;
						cout << "Divine Intervention now succeeds automatically, no roll needed" << endl;
						goto clrc;
					}

					else if (clrc == "ddom")
					{
						cout << endl << "--DIVINE DOMAIN--" << endl;
						cout << "You choose a domain at 1st level, and get features at 6th, 8th, and 17th Levels" << endl;
						cout << "You get domain spells at 1st, 3rd, 5th, 7th, and 9th levels, and your channel divinity" << endl;
						cout << "gains new abilities at 2nd Level, but can also gain abilities at your feature levels" << endl;
						ddom:
						cout << "What domain would you like to see?" << endl;
						cin >> ddom;

						if (ddom == "list")
						{
							cout << endl << "-D Domain List-" << endl;
							cout << "Death - deth" << endl << "Knowledge - kldg" << endl << "Life - life" << endl << "Light - lght" << endl;
							cout << "Nature - ntur" << endl << "Tempest - tmps" << endl << "Trickery - trik" << endl;
							cout << "War - war" << endl << endl;
							cout << "Within each domain you can also type 'gods' to view what gods are in the" << endl;
							cout << "domain, or 'tabl' to view what features and spells you gain." << endl;
							goto ddom;
						}

						else if (ddom == "kldg")
						{
							cout << endl << "--KNOWLEDGE DOMAIN--";
							kldg:
							cout << endl << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								kldgtabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--KNOWLEDGE DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Command, Identify" << endl << "3rd - Augury, Sensation" << endl;
									cout << "5th - Nondetecction, Speak With Dead" << endl << "7th - Arcane Eye, Confusion" << endl;
									cout << "9th - Legend Lore, Scrying" << endl;
									goto kldgtabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--KNOWLEDGE DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Blessings of Knowledge" << endl << "2nd - Channel Divinity: Knowledge of the Ages" << endl;
									cout << "6th - Channel Divinity: Read Thoughts" << endl << "8th - Potent Spellcasting" << endl;
									cout << "17th - Visions of the Past" << endl;
									goto kldgtabl;
								}

								else
								{
									cout << endl;
									goto kldg;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE KNOWLEDGE DEITIES--" << endl;
								cout << "Celtic: Goibhniu, Lugh, Math Mathonwy, Oghma" << endl;
								cout << "Greek: Apollo, Athena, Hecate, Hephaestus" << endl;
								cout << "Egyptian: Imhotep, Isis, Ptah, Thoth" << endl;
								cout << "Norse: Odin, Tyr" << endl;
								goto kldg;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL KNOWLEDGE CLERIC--" << endl;
								cout << "BLESSINGS OF KNOWLEDGE: You know two more languages of your choice, also you gain" << endl;
								cout << "two more skill proficiencies of your choice from: Arcana, History, Nature, or Religion" << endl;
								cout << "Your proficiency bonus is doubled for checks made using the skills you picked from this" << endl;
								goto kldg;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL KNOWLEDGE CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- KNOWLEDGE OF THE AGES: As an action, you can choose a tool or skill." << endl;
								cout << "For 10 minutes, you are proficient in the chosen tool or skill" << endl;
								goto kldg;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL KNOWLEDGE CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- READ THOUGHTS: As an action, you can choose one creature" << endl;
								cout << "you can see within 60ft of you. That creature must make a Wis saving throw" << endl;
								cout << "If it succeeds, you can't use this feature again until after a long rest. If it" << endl;
								cout << "fails, you can read its surface thoughts (feelings, directly what it's thinking," << endl;
								cout << "and what is frontmost in its mind) so long as it remains within 60ft of you. You can" << endl;
								cout << "also, as an action, end this effect and use Suggestion on the creature without expending" << endl;
								cout << "a spell slot. The creature automatically fails the save. You can only do this during the 1" << endl;
								cout << "minute time of effect" << endl;
								goto kldg;

							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL KNOWLEDGE CLERIC--" << endl;
								cout << "POTENT SPELLCASTING: You add your Wis modifier to any damage you deal with a" << endl;
								cout << "Cleric cantrip" << endl;
								goto kldg;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL KNOWLEDGE CLERIC--" << endl;
								cout << "VISIONS OF THE PAST: While holding an object or just sitting around for at least one minute in meditation," << endl;
								cout << "you get visions of recent events concerning this object. You can meditate for a number" << endl;
								cout << "of minutes equal to your Wis score. You must maintain concentration. Cannot use again" << endl;
								cout << "until after a short or long rest." << endl << endl;
								cout << "-OBJECT READING: Must be holding the object, you learn how the previous owner aquired and" << endl;
								cout << "lost the item, as well as the most significant recent event involving it (significant for" << endl;
								cout << "your purposes, not necessarily general history). You can add a minute for each owner and" << endl;
								cout << "subsequent information you want to see before the most recent" << endl << endl;
								cout << "-AREA READING: While meditating, you learn about significant events within a 50ft cube" << endl;
								cout << "around yourself. For each minute, you learn one significant event starting with the most" << endl;
								cout << "recent. Significant events can be either ones with powerful emotions (weddings, betrayal, war, etc)" << endl;
								cout << "or could just be mundane events that are relevant to your purpose" << endl;
								goto kldg;
							}

							else if (domfeat == "exit")
							{
								cout << endl;
								goto ddom;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto kldg;
							}
						}

						else if (ddom == "life")
						{
							life:
							cout << endl << "--LIFE DOMAIN--" << endl;
							cout << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								lifetabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--LIFE DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Bless, Cure wounds" << endl << "3rd - Lesser restoration, Spiritual weapon" << endl;
									cout << "5th - Beacon of hope, revivify" << endl << "7th - Death ward, guardian of faith" << endl;
									cout << "9th - Mass cure wounds, Raise dead" << endl;
									goto lifetabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--LIFE DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Bonus Prof., Disciple of life" << endl << "2nd - Channel Divinity: Preserve Life" << endl;
									cout << "6th - Blessed Healer" << endl << "8th - Divine Strike" << endl;
									cout << "17th - Supreme Healing" << endl;
									goto lifetabl;
								}

								else
								{
									cout << endl;
									goto life;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE LIFE DEITIES--" << endl;
								cout << "Celtic: Arawn, Brigantia, Diancecht, Goibhniu, Lugh" << endl;
								cout << "Greek: Apollo, Artemis, Demeter, Dionysus, Hestia" << endl;
								cout << "Egyptian: Re-Horakhty, Hathor, Isis, Osiris" << endl;
								cout << "Norse: Balder, Frey, Freya, Frigga" << endl;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL LIFE CLERIC--" << endl;
								cout << "BONUS PROFICIENCY: You are now proficient in Heavy armor" << endl;
								cout << "DISCIPLE OF LIFE: Whenever you use a 1st level or higher spell to restore a creature's HP," << endl;
								cout << "it heals an extra 2 + the spell's level" << endl;
								goto life;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL LIFE CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- PRESERVE LIFE: While Channeling Divinity, as an action you can" << endl;
								cout << "present your holy symbol and evoke healing power. You can distribute hit points" << endl;
								cout << "equal to 5x your cleric level to any creatures within 30ft of you. This ability" << endl;
								cout << "cannot heal a creature past half of their max health. This does not work on undead" << endl;
								cout << "or a construct" << endl;
								goto life;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL LIFE CLERIC--" << endl;
								cout << "BLESSED HEALER: Whenever you cast a spell of 1st or higher level to heal a creature, you" << endl;
								cout << "also regain HP equal to 2 + the level of the spell" << endl;
								goto life;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL LIFE CLERIC--" << endl;
								cout << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								cout << "deal 1d8 extra radiant damage. At 14th level, this becomes 2d8 instead of 1" << endl;
								goto life;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL LIFE CLERIC--" << endl;
								cout << "Whenever rolling dice to restore HP with a spell, you automatically use the highest number possible" << endl;
								cout << "ex. instead of rolling 2d6 to restore HP you automatically do 12" << endl;
								goto life;
							}
						}

						else if (ddom == "lght")
						{
							lght:
							cout << endl << "--LIGHT DOMAIN--" << endl;
							cout << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								lghttabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--LIGHT DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Burning hands, Faerie fire" << endl << "3rd - Flaming sphere, Scorching ray" << endl;
									cout << "5th - Daylight, fireball" << endl << "7th - Guardian of faith, Wall of fire" << endl;
									cout << "9th - Flame strike, Scrying" << endl;
									goto lghttabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--LIGHT DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Bonus Ctrp., Warding flare" << endl << "2nd - Channel Divinity: Radiance of the Dawn" << endl;
									cout << "6th - Improved Flare" << endl << "8th - Potent Spellcasting" << endl;
									cout << "17th - Corona of Light" << endl;
									goto lghttabl;
								}

								else
								{
									cout << endl;
									goto lght;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE LIGHT DEITITES--" << endl;
								cout << "Celtic: Belenus" << endl;
								cout << "Greek: Aphrodite, Apollo" << endl;
								cout << "Egyptian: Re-Horakhty, Hathor" << endl;
								cout << "Norse: Balder, Forseti, Frey, Frigga, Heimdall, Odur" << endl;
								goto lght;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL LIGHT CLERIC--" << endl;
								cout << "BONUS CANTRIP: you gain the 'Light' cantrip if you don't already know it" << endl;
								cout << "WARDING FLARE: when someone within 30ft attacks you, you can use your reaction" << endl;
								cout << "to flash light between you and them, giving them the disadvantage on the roll" << endl;
								cout << "This doesn't work if the target can't be blinded. You can use this a number" << endl;
								cout << "of times equal to your Wis modifier (minimum 1). You regain all expended uses" << endl;
								cout << "after a long rest" << endl;
								goto lght;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL LIGHT CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- RADIANCE OF THE DAWN: While Channeling Divinity, as an action, you can" << endl;
								cout << "present your holy symbol. After this, any magical darkness within 30ft of you is dispelled" << endl;
								cout << "Also, all hostiles within 30ft of you make a Con saving throw. Those creatures take 2d10 +" << endl;
								cout << "your cleric level on a failed save, and half that amount on success. A creature with total" << endl;
								cout << "cover from you is not affected" << endl;
								goto lght;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL LIGHT CLERIC--" << endl;
								cout << "IMPROVED FLARE: You can now use warding flare to block an attack on a creature within 30ft" << endl;
								cout << "of you" << endl;
								goto lght;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL LIGHT CLERIC--" << endl;
								cout << "POTENT SPELLCASTING: You add your Wis modifier to any damage you deal with a" << endl;
								cout << "Cleric cantrip" << endl;
								goto lght;
							}

							else if (domfeat == "17th")
							{
								cout << "--17th LEVEL LIGHT CLERIC--" << endl;
								cout << "You can use your action to make an aura of light that lasts for 1 minute or" << endl;
								cout << "until you stop it with another action. You emit bright light for 60ft and " << endl;
								cout << "dim light for another 30ft after that. Enemies in your bright light have" << endl;
								cout << "disadvantage on saving throws againsts any spell that deals fire or radiant" << endl;
								cout << "damage" << endl;
								goto lght;
							}

							else if (domfeat == "exit")
							{
								cout << endl;
								goto ddom;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
							}
						}

						else if (ddom == "deth")
						{
							cout << endl << "--DEATH DOMAIN--" << endl;
							cout << "NOTE: This subclass option is only available if the DM allows it, as it" << endl;
							cout << "is typically for use by NPC's. However, most DMs should allow it, since it" << endl;
							cout << "is included in the DM Guide for 5e" << endl;
							deth:
							cout << endl << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								dethtabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--DEATH DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - False Life, Ray of Sickness" << endl << "3rd - Blindness/Deafness, Ray of Enfeeblement" << endl;
									cout << "5th - Animate dead, Vampiric touch" << endl << "7th - Blight, Death ward" << endl;
									cout << "9th - Antilife shell, Cloudkill" << endl;
									goto dethtabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--DEATH DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Bonus Prof., Reaper" << endl << "2nd - Channel Divinity: Touch of Death" << endl;
									cout << "6th - Inescapable Destruction" << endl << "8th - Divine Strike" << endl;
									cout << "17th - Improved Reaper" << endl;
									goto dethtabl;
								}

								else
								{
									cout << endl;
									goto deth;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE DEATH DEITIES--" << endl;
								cout << "Celtic - Arawn" << endl << "Greek - Hades" << endl << "Egyptian - Anubis, Nephthys, Osiris, Set" << endl;
								cout << "Norse - Hel" << endl;
								goto deth;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL DEATH CLERIC--" << endl;
								cout << "BONUS PROFICIENCY: You gain proficiency in Martial weapons" << endl;
								cout << "REAPER: You learn one Necromancy cantrip from any spell list." << endl;
								cout << "When you cast a Necromancy cantrip that targets only one creature," << endl;
								cout << "it instead can target two creatures within range and within" << endl;
								cout << "5ft of each other" << endl;
								goto deth;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL DEATH CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- TOUCH OF DEATH: While Channeling Divinity, when" << endl;
								cout << "you hit a creature with a melee weapon attack, you can add 5 + double" << endl;
								cout << "your Cleric level in necrotic damage to the attack" << endl;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL DEATH CLERIC--" << endl;
								cout << "INESCAPABLE DESTRUCTION: Necrotic damage dealt by your Cleric spells" << endl;
								cout << "and Channel Divinity ignores resistance to necrotic damage" << endl;
								goto deth;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL DEATH CLERIC--" << endl;
								cout << "DIVINE STRIKE: Once per your turn, when you hit a creature with a" << endl;
								cout << "weapon attack, you can deal an extra 1d8 necrotic damage. When" << endl;
								cout << "you reach 14th level, that damage becomes 2d8" << endl;
								goto deth;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL DEATH CLERIC--" << endl;
								cout << "IMPROVED REAPER: Your Reaper ability now also includes necromancy spells of" << endl;
								cout << "1st-5th Level, not just cantrips. If the spell requires Material components," << endl;
								cout << "you must include the material for both targets" << endl;
								goto deth;
							}
						}

						else if (ddom == "ntur")
						{
							ntur:
							cout << endl << "--NATURE DOMAIN--" << endl;
							cout << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								nturtabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--NATURE DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Animal friendship, Speak with animals" << endl << "3rd - Barkskin, Spike growth" << endl;
									cout << "5th - Plant growth, Wind wall" << endl << "7th - Dominate beast, Grasping Vine" << endl;
									cout << "9th - Insect plague, Tree stride" << endl;
									goto nturtabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--NATURE DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Bonus Prof., Acolyte of Nature" << endl << "2nd - Channel Divinity: Charm Animals and Plants" << endl;
									cout << "6th - Dampen Elements" << endl << "8th - Divine Strike" << endl;
									cout << "17th - Master of Nature" << endl;
									goto nturtabl;
								}

								else
								{
									cout << endl;
									goto ntur;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE NATURE DEITIES--" << endl;
								cout << "Celtic: The Daghda, Dunatis, Manannan mac Lir, Silvanus" << endl;
								cout << "Greek: Artemis, Pan" << endl;
								cout << "Egyptian: Osiris, Sobek" << endl;
								cout << "Norse: Njord, Skadi, Uller" << endl;
								goto ntur;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL NATURE CLERIC--" << endl;
								cout << "BONUS PROFICIENCY: You are now proficient with Heavy Armor" << endl;
								cout << "ACOLYTE OF NATURE: You learn one (1) druid cantrip of your choice and gain" << endl;
								cout << "proficiency in One (1) skill out of Animal Handling, Nature, or Survival" << endl;
								goto ntur;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL NATURE CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- CHARM ANIMALS AND PLANTS: While Channeling Divinity, as" << endl;
								cout << "an action, you present your holy symbol and invoke the name of your deity." << endl;
								cout << "Then every beast or plant within 30ft that can see you makes a Wis saving" << endl;
								cout << "throw. If it fails, they are charmed for 1 minute or until taking damage" << endl;
								cout << "Charmed creatures are friendly to you and other creatures you designate" << endl;
								goto ntur;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL NATURE CLERIC--" << endl;
								cout << "DAMPEN ELEMENTS: When you or a creature within 30 ft of you takes acid, cold," << endl;
								cout << "fire, lightning, or thunder damage, you can use your reaction to grant that" << endl;
								cout << "creature resistance to that instance of the damage" << endl;
								goto ntur;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL NATURE CLERIC--" << endl;
								cout << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								cout << "deal 1d8 extra cold, fire, or lightning damage (type of your choice). At 14th level, this" << endl;
								cout << "becomes 2d8 instead of 1" << endl;
								goto life;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL NATURE CLERIC--" << endl;
								cout << "MASTER OF NATURE: While creatures are charmed from your Charm Animals and Plants feature," << endl;
								cout << "you can use a bonus action on your turns to verbally command what each of those creatures" << endl;
								cout << "will do on its next turn" << endl;
								goto ntur;
							}

							else if (domfeat == "exit")
							{
								cout << endl;
								goto ddom;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
							}
						}

						else if (ddom == "tmps")
						{
							tmps:
							cout << endl << "--TEMPEST DOMAIN--" << endl;
							cout << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								tmpstabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--TEMPEST DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Fog cloud, Thunderwave" << endl << "3rd - Gust of wind, Shatter" << endl;
									cout << "5th - Call lightning, Sleet storm" << endl << "7th - Control water, Ice storm" << endl;
									cout << "9th - Insect plague, Destructive wave" << endl;
									goto tmpstabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--TEMPEST DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Bonus Prof., Wrath of the Storm" << endl << "2nd - Channel Divinity: Destructive Wrath" << endl;
									cout << "6th - Thunderbolt Strike" << endl << "8th - Divine Strike" << endl;
									cout << "17th - Stormborn" << endl;
									goto tmpstabl;
								}

								else
								{
									cout << endl;
									goto tmps;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE TEMPEST DEITIES--" << endl;
								cout << "Celtic: Manannan mac Lir" << endl;
								cout << "Greek: Zeus, Hercules, Poseidon" << endl;
								cout << "Egyptian: Set, Sobek" << endl;
								cout << "Norse: Aegir, Njord, Thor" << endl;
								goto tmps;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL TEMPEST CLERIC--" << endl;
								cout << "BONUS PROFICIENCIES: You are now proficient with Martial weapons and Heavy armor" << endl;
								cout << "WRATH OF THE STORM: When a creature within 5ft of you that you can see hits you" << endl;
								cout << "with an attack, you force them to make a Dex save. They take 2d8 lightning damage" << endl;
								cout << "on a failed save, half that much on success. You can use this a number of times equal" << endl;
								cout << "to your Wis modifier (min. 1). You regain all expended uses after a long rest" << endl;
								goto tmps;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL TEMPEST CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- DESTRUCTIVE WAVE: While Channeling Divinity, when you roll lightning" << endl;
								cout << "or thunder damage, you can deal maximum damage instead of rolling" << endl;
								goto tmps;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL TEMPEST CLERIC--" << endl;
								cout << "THUNDERBOLT STRIKE: When you deal lightning damage to a Large or smaller creature, you" << endl;
								cout << "can also push it up to 10ft back" << endl;
								goto tmps;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL TEMPEST CLERIC--" << endl;
								cout << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								cout << "deal 1d8 extra thunder damage. At 14th level, this becomes 2d8 instead of 1" << endl;
								goto tmps;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL TEMPEST CLERIC--" << endl;
								cout << "While not underground or indoors, you have a flying speed equal to your walking speed" << endl;
								goto tmps;
							}

							else if (domfeat == "exit")
							{
								cout << endl;
								goto ddom;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
							}
						}

						else if (ddom == "trik")
						{
							trik:
							cout << endl << "--TRICKERY DOMAIN--" << endl;
							cout << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								triktabl:
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--TRICKERY DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Charm person, Disguise self" << endl << "3rd - Mirror Image, Pass without trace" << endl;
									cout << "5th - Blink, Dispel magic" << endl << "7th - Dimension door, Polymorph" << endl;
									cout << "9th - Dominate person, Modify memory" << endl;
									goto triktabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--TRICKERY DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Blessing of the Trickster" << endl << "2nd - Channel Divinity: Invoke Duplicity" << endl;
									cout << "6th - Channel Divinity: Cloak of Shadows" << endl << "8th - Divine Strike" << endl;
									cout << "17th - Improved Duplicity" << endl;
									goto triktabl;
								}

								else
								{
									cout << endl;
									goto trik;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE TRICKERY DEITIES--" << endl;
								cout << "Celtic: The Daghdha" << endl;
								cout << "Greek: Hecate, Hera, Hermes, Tyche" << endl;
								cout << "Egyptian: Apep, Bes, Set" << endl;
								cout << "Norse: Hermod, Loki" << endl;
								goto trik;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL TRICKERY CLERIC--" << endl;
								cout << "BLESSINGS OF THE TRICKSTER: When you touch a willing creature, you give them the" << endl;
								cout << "acvantage on Dex (Stealth) checks for one (1) hour or until you use this feature" << endl;
								cout << "again" << endl;
								goto trik;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL TRICKERY CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- INVOKE DUPLICITY: While Channeling Divinity, as an action, you can create" << endl;
								cout << "a perfect illusion of yourself that lasts for one minute of until you lose concentration." << endl;
								cout << "The illusion appears in an unoccupied space you can see within 30ft of you. As a bonus action" << endl;
								cout << "you can move the illusion 30ft in any direction within a 120ft range of you. You can cast spells" << endl;
								cout << "as if you were in that space, but you use your own stats and senses. Also, when you and your" << endl;
								cout << "illusion are both within 5ft of a creature that can see the illusion, you have the advantage on" << endl;
								cout << "attack rolls toward that creature" << endl;
								goto trik;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL TRICKERY CLERIC--" << endl;
								cout << "CHANNEL DIVINIY- CLOAK OF SHADOWS: While Channeling Divinity, as an action, you can become" << endl;
								cout << "invisible until your next turn. You become visible if you attack or cast a spell" << endl;
								goto trik;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL TRICKERY CLERIC--" << endl;
								cout << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								cout << "deal 1d8 extra poison damage. At 14th level, this becomes 2d8 instead of 1" << endl;
								goto trik;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL TRICKERY CLERIC--" << endl;
								cout << "IMPROVED DUPLICITY: You can now make 4 illusions instead of 1 when using your Invoke Duplicity" << endl;
								cout << "feature. You can move any number of them on each turn as a bonus action, with the same limitations" << endl;
								cout << "you had with the one (30ft per turn within 120ft of you)" << endl;
								goto trik;
							}

							else if (domfeat == "exit")
							{
								cout << endl;
								goto ddom;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
							}
						}

						else if (ddom == "war")
						{
							war:
							cout << endl << "--WAR DOMAIN--" << endl;
							cout << "What would you like to see? (Level numbers, 'gods', or 'tabl')" << endl;
							cin >> domfeat;

							if (domfeat == "tabl")
							{
								cout << endl << "Spell Table or Feature Table?" << endl;
								cout << "'spel' or 'feat', anything else will bring you back to the domain you chose" << endl;
								cin >> x;

								if (x == "spel")
								{
									cout << endl << "--WAR DOMAIN SPELLS--" << endl;
									cout << "Format: Level - Spells" << endl;
									cout << "1st - Divine favor, Shield of faith" << endl << "3rd - Magic weapon, Spiritual weapon" << endl;
									cout << "5th - Crusader's mantle, Spiritual guardian" << endl << "7th - Freedom of movement, Stoneskin" << endl;
									cout << "9th - Flame strike, Hold monster" << endl;
									goto nturtabl;
								}

								else if (x == "feat")
								{
									cout << endl << "--WAR DOMAIN FEATURES--" << endl;
									cout << "Format: Level - Feature" << endl;
									cout << "1st - Bonus Prof., War Priest" << endl << "2nd - Channel Divinity: Guided Strike" << endl;
									cout << "6th - Channel Divinity: War God's Blessing" << endl << "8th - Divine Strike" << endl;
									cout << "17th - Avatar of War" << endl;
									goto nturtabl;
								}

								else
								{
									cout << endl;
									goto war;
								}
							}

							else if (domfeat == "gods")
							{
								cout << endl << "--POSSIBLE WAR DEITIES--" << endl;
								cout << "Celtic: Morrigan, Duada" << endl;
								cout << "Greek: Ares, Athena, Hercules, Nike" << endl;
								cout << "Egyptian: Bast" << endl;
								cout << "Norse: Odin, Heimdall, Sif, Surtur, Thor, Thrym, Tyr" << endl;
								goto war;
							}

							else if (domfeat == "1st")
							{
								cout << endl << "--1st LEVEL WAR CLERIC" << endl;
								cout << "BONUS PROFICIENCIES: You are now proficient with Martial weapons and Heavy armor" << endl;
								cout << "WAR PRIEST: When you use the Attack action, you can make a weapon attack as a" << endl;
								cout << "bonus action. You can use this feature a number of times equal to your Wis mod." << endl;
								cout << "(minimum 1). You regain expended uses after a long rest" << endl;
								goto war;
							}

							else if (domfeat == "2nd")
							{
								cout << endl << "--2nd LEVEL WAR CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- GUIDED STRIKE: While Channeling Divinity, when you make an attack" << endl;
								cout << "roll, you can add 10 to the roll between the dice roll and the DM declaring a hit or" << endl;
								cout << "miss" << endl;
								goto war;
							}

							else if (domfeat == "6th")
							{
								cout << endl << "--6th LEVEL WAR CLERIC--" << endl;
								cout << "CHANNEL DIVINITY- WAR GOD'S BLESSING: When a creature within 30ft of you makes an attack" << endl;
								cout << "roll, you can use your reaction to give the roll a +10 bonus so long as you do it between" << endl;
								cout << "the roll and the DM declaring hit or miss" << endl;
								goto war;
							}

							else if (domfeat == "8th")
							{
								cout << endl << "--8th LEVEL WAR CLERIC--" << endl;
								cout << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								cout << "deal 1d8 extra damage of the same kind as was dealt by the weapon. At 14th level, this becomes" << endl;
								cout << "2d8 instead of 1" << endl;
								goto war;
							}

							else if (domfeat == "17th")
							{
								cout << endl << "--17th LEVEL WAR CLERIC--" << endl;
								cout << "AVATAR OF BATTLE: You gain resistance to bludgeoning, slashing, and piercing damage from" << endl;
								cout << "nonmagical weapons" << endl;
								goto war;
							}

							else if (domfeat == "exit")
							{
								cout << endl;
								goto ddom;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
							}
						}

						else if (ddom == "exit")
						{
							cout << endl;
							goto clrc;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto ddom;
						}
					}

					else if (clrc == "spel")
					{
						spelclr:
						cout << endl << "--CLERIC SPELL LISTS--" << endl;
						cout << "There are 9 levels of spellcasting, as well as cantrips (lvl 0)" << endl;
						cout << "What would you like to see? (1st-9th, 'cntp' for cantrips)" << endl;
						cin >> clrspel;

						if (clrspel == "cntp")
						{
							cout << endl << "--CLERIC CANTRIPS--" << endl;
							cout << "Guidance" << endl << "Light" << endl << "Mending" << endl;
							cout << "Resistance" << endl << "Sacred Flame" << endl << "Spare the Dying" << endl;
							cout << "Thaumaturgy" << endl;
							goto spelclr;
						}

						else if (clrspel == "1st")
						{
							cout << endl << "--1st LEVEL CLERIC SPELLS--" << endl;
							cout << "Bane" << endl << "Bless" << endl << "Command" << endl;
							cout << "Create or Destroy Water" << endl << "Cure Wounds" << endl << "Detect Evil and Good" << endl;
							cout << "Detect Magic" << endl << "Detect Poison and Disease" << endl << "Guiding Bolt" << endl;
							cout << "Healing Word" << endl << "Inflict Wounds" << endl << "Protection from Evil and Good" << endl;
							cout << "Purify Food and Drink" << endl << "Sanctuary" << endl << "Shield of Faith" << endl;
							goto spelclr;
						}

						else if (clrspel == "2nd")
						{
							cout << endl << "--2nd LEVEL CLERIC SPELLS--" << endl;
							cout << "Aid" << endl << "Augury" << endl << "Blindness / Deafness" << endl << "Calm Emotions" << endl;
							cout << "Continual Flame" << endl << "Enhance Ability" << endl << "Find Traps" << endl;
							cout << "Gentle Repose" << endl << "Hold Person" << endl << "Lesser Restoration" << endl;
							cout << "Locate Object" << endl << "Prayer of Healing" << endl << "Protection from Poison" << endl;
							cout << "Silence" << endl << "Spiritual Weapon" << endl << "Warding Bond" << endl << "Zone of Truth" << endl;
							goto spelclr;
						}

						else if (clrspel == "3rd")
						{
							cout << endl << "--3rd LEVEL CLERIC SPELLS--" << endl;
							cout << "Animate Dead" << endl << "Beacon of Hope" << endl << "Bestow Curse" << endl;
							cout << "Clairvoyance" << endl << "Create Food and Water" << endl << "Daylight" << endl;
							cout << "Dispel Magic" << endl << "Feign Death" << endl << "Glyph of Warding" << endl;
							cout << "Magic Circle" << endl << "Mass Healing Word" << endl << "Meld into Stone" << endl;
							cout << "Protection from Energy" << endl << "Remove Curse" << endl << "Revivify" << endl;
							cout << "Sending" << endl << "Speak with Dead" << endl << "Spirit Guardians" << endl;
							cout << "Tongues" << endl << "Water Walk" << endl;
							goto spelclr;
						}

						else if (clrspel == "4th")
						{
							cout << endl << "--4th LEVEL CLERIC SPELLS--" << endl;
							cout << "Banishment" << endl << "Control Water" << endl << "Death Ward" << endl;
							cout << "Divination" << endl << "Freedom of Movement" << endl << "Guardian of Faith" << endl;
							cout << "Locate Creature" << endl << "Stone Shape" << endl;
							goto spelclr;
						}

						else if (clrspel == "5th")
						{
							cout << endl << "--5th LEVEL CLERIC SPELLS--" << endl;
							cout << "Commune" << endl << "Contagion" << endl << "Dispel Evil and Good" << endl;
							cout << "Flame Strike" << endl << "Geas" << endl << "Greater Restoration" << endl;
							cout << "Hallow" << endl << "Insect Plague" << endl << "Legend Lore" << endl;
							cout << "Mass Cure Wounds" << endl << "Planar Binding" << endl << "Raise Dead" << endl;
							cout << "Scrying" << endl;
							goto spelclr;
						}

						else if (clrspel == "6th")
						{
							cout << endl << "--6th LEVEL CLERIC SPELLS--" << endl;
							cout << "Blade Barrier" << endl << "Create Undead" << endl << "Find the Path" << endl;
							cout << "Forbiddance" << endl << "Harm" << endl << "Heal" << endl << "Heroes’ Feast" << endl;
							cout << "Planar Ally" << endl << "True Seeing" << endl << "Word of Recall" << endl;
							goto spelclr;
						}

						else if (clrspel == "7th")
						{
							cout << endl << "--7th LEVEL CLERIC SPELLS--" << endl;
							cout << "Conjure Celestial" << endl << "Divine Word" << endl << "Etherealness" << endl;
							cout << "Fire Storm" << endl << "Plane Shift" << endl << "Regenerate" << endl;
							cout << "Resurrection" << endl << "Symbol" << endl;
							goto spelclr;
						}

						else if (clrspel == "8th")
						{
							cout << endl << "--8th LEVEL CLERIC SPELLS--" << endl;
							cout << "Antimagic Field" << endl << "Control Weather" << endl << "Earthquake" << endl;
							cout << "Holy Aura" << endl;
							goto spelclr;
						}

						else if (clrspel == "9th")
						{
							cout << endl << "--9th LEVEL CLERIC SPELLS--" << endl;
							cout << "Astral Projection" << endl << "Gate" << endl << "Mass Heal" << endl;
							cout << "True Ressurection" << endl;
							goto spelclr;
						}

						else if (clrspel == "exit")
						{
							cout << endl;
							goto clrc;
						}

						else
						{
							cout << endl << "You entered something wrong" << endl;
							goto spelclr;
						}
					}

					else if (clrc == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto clrc;
					}
				}

				//druid
				//
				else if (clas == "drid")
				{
					cout << endl << "--DRUID--" << endl << "Saving throws: Int, Wis(primary)" << endl;
					cout << "Hit dice: 1d8 per Level" << endl << "Hit Points at 1st Level: 8 + Con Modifier" << endl;
					cout << "HP at higher Levels: 1d8 (or 5) + Con Modifier per Level after 1st" << endl;
					cout << "Spell Save DC: 8 + Wis Mod + Prof Bonus" << "Spell Attack Modifier: Wis mod + Prof Bonus" << endl;
					cout << "--RECCOMENDATIONS--" << endl << "Background: Hermit" << endl << endl;
					cout << "--PROFICIENCIES--" << endl << "Armor: Light, Medium, Shield (druids will not use anything metal though)" << endl;
					cout << "Weapons: Clubs, daggers, darts, javelin, mace, quarterstaffs, scimtars, sickles, slings, spears" << endl;
					cout << "Tools: Herbalism Kit" << endl << "Skills (choose TWO): Arcana, Animal handling, Insight, Medicine, ";
					cout << "Nature, Perception, Religion, or Survival" << endl << endl << "--EQUIPMENT--" << endl;
					cout << "-A wood shield OR any simple weapon" << endl << "-A scimtar OR any simple melee weapon" << endl;
					cout << "-Leather armor, an explorer's pack, and a druidic focus" << endl;
					drid:
					cout << "What would you like to view for the Druid? (A list is available at 'list')" << endl;
					cin >> drid;

					if (drid == "list")
					{
						cout << endl << "List of Choices for Druid" << endl;
						cout << "Druid Circle options - 'dcrl'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "List of Druid spells - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto drid;
					}

					else if (drid == "tabl")
					{
						cout << endl << "--DRUID LEVEL TABLE--" << endl;
						cout << "Format: Lvl - Prof. Bonus - New Feature(s) - Cantrips known - Spell slots (levels separated by commas)" << endl;
						cout << "1st - +2 - Druidic, Spellcasting - 2 - 2" << endl;
						cout << "2nd - +2 - Wild Shape, Druid Circle - 2 - 3" << endl;
						cout << "3rd - +2 - N/A - 2 - 4,2" << endl;
						cout << "4th - +2 - Wild Shape Improve, Ability Score Improve - 3 - 4,3" << endl;
						cout << "5th - +3 - N/A - 3 - 4,3,2" << endl;
						cout << "6th - +3 - Druid Circle Feature - 3 - 4,3,3" << endl;
						cout << "7th - +3 - N/A - 3 - 4,3,3,1" << endl;
						cout << "8th - +4 - Wild Shape Improve, Ability Score Improve - 3 - 4,3,3,2" << endl;
						cout << "9th - +4 - N/A - 3 - 4,3,3,3,1" << endl;
						cout << "10th - +4 - Druid Circle Feature - 4 - 4,3,3,3,2" << endl;
						cout << "11th - +4 - N/A - 4 - 4,3,3,3,2,1" << endl;
						cout << "12th - +4 - Ability Score Improve - 4 - 4,3,3,3,2,1" << endl;
						cout << "13th - +5 - N/A - 4 - 4,3,3,3,2,1,1" << endl;
						cout << "14th - +5 - Druid Circle Feature - 4 - 4,3,3,3,2,1,1" << endl;
						cout << "15th - +5 - N/A - 4 - 4,3,3,3,2,1,1,1" << endl;
						cout << "16th - +5 - Ability Score Improve - 4 - 4,3,3,3,2,1,1,1" << endl;
						cout << "17th - +6 - N/A - 4 - 4,3,3,3,2,1,1,1,1" << endl;
						cout << "18th - +6 - Timeless Body, Beast Spells - 4 - 4,3,3,3,3,1,1,1,1" << endl;
						cout << "19th - +6 - Ability Score Improve - 4 - 4,3,3,3,3,2,1,1,1" << endl;
						cout << "20th - +6 - Archdruid - 4 - 4,3,3,3,3,2,2,1,1" << endl;
						goto drid;
					}

					else if (drid == "1st")
					{
						cout << endl << "--1st LEVEL DRUID--" << endl;
						cout << "SPELLCASTING: You can do magic. After each long rest you prepare a list of spells you can use" << endl;
						cout << "until your next long rest. The number of spells that can be on the list is equal to your Wis" << endl;
						cout << "modifier + your your druid level (minimum one spell)." << endl;
						cout << "DRUIDIC: You can automatically spot and decipher any message left in the secret Druid language" << endl;
						cout << "Other players must make a DC 15 Wis (Perception) saving throw to spot it, and cannot decipher" << endl;
						cout << "it without magic" << endl;
						goto drid;
					}

					else if (drid == "2nd")
					{
						cout << endl << "--2nd LEVEL DRUID--" << endl;
						cout << "DRUID CIRCLE: You pick what Druid Circle you will be a part of (info at 'dcrl')" << endl;
						cout << "WILD SHAPE: You can use your action to magically assume the form of a beast you" << endl;
						cout << "have seen before. You can use this feature twice. You regain expended uses after" << endl;
						cout << "a long rest. Your beast has a max CR of 1/4 and no flying or swimming speed. You" << endl;
						cout << "can stay in this form for an amount of hours equal to half your Druid level, rounded" << endl;
						cout << "down per use. You can use a bonus action on your turn to revert back early. You revert" << endl;
						cout << "automatically when becoming unconscious, falling to 0 HP, or dying. Would you like to" << endl;
						cout << "view the rest of the Wild Shape rules? ('yes' to do so, anything else will return you" << endl;
						cout << "to the choice before this one)" << endl;
						cin >> wshape;

						if (wshape == "yes")
						{
							cout << endl << "--WILD SHAPE EXTRA RULES--" << endl;
							cout << "-Your stats are replaced by those of the beast, save for your Int, Wis, and Cha scores" << endl;
							cout << "you also retain saving throws and skills, as well as getting those of the beast. If the" << endl;
							cout << "beast and you share a proficiency, and the beast's bonus is higher, you can use its bonus" << endl;
							cout << "for that stat. You cannot use lair or legendary actions, even if your beast has them" << endl << endl;
							cout << "-You get the beast's HP and Hit Dice. When you revert to your normal form, you go back" << endl;
							cout << "to the amount of HP you had before transforming unless you reverted as a result of hitting" << endl;
							cout << "0 HP, in which case the excess damage carries to your normal form. You are not knocked unconscious" << endl;
							cout << "unless that brings your normal form to 0 HP" << endl << endl;
							cout << "-You can't cast spells, and your ability to speak and take an action is limited by your form" << endl;
							cout << "Transforming doesn't break your concentration for spells or hinder you for taking actions for" << endl;
							cout << "a spell you've already cast" << endl << endl;
							cout << "-You choose if your equipment falls to the ground, merges with you, or is worn by your beast" << endl;
							cout << "the DM decides if the equipment is practical or usable for your creature (equipment doesn't" << endl;
							cout << "change size). If it can't be used, it has to fall to the ground or merge with you. Merged" << endl;
							cout << "equipment has no effect, but it will appear back on you when you revert back" << endl;
							cout << "-Any physical ability you have (i.e. Darkvision) does not carry over unless the beast also" << endl;
							cout << "has the ability" << endl;
							goto drid;
						}

						else
						{
							goto drid;
						}
					}

					else if (drid == "3rd")
					{
						cout << endl << "--3rd LEVEL DRUD--" << endl;
						dridnofeat:
						cout << "You do not get any features at this level" << endl;
						goto drid;
					}

					else if (drid == "4th")
					{
						cout << endl << "--4th LEVEL DRUID--" << endl;
						cout << "WILD FORM IMPROVE: You no longer have the 'no swimming speed' limit, and your max CR" << endl;
						cout << "increases to 1/2" << endl;
						dridabil:
						cout << "ABILITY SCORE IMPROVE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto drid;
					}

					else if (drid == "5th")
					{
						cout << endl << "--5th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "6th")
					{
						cout << endl << "--6th LEVEL DRUID--" << endl;
						druidcircle:
						cout << "You gain a feature from your Druid Circle" << endl;
						goto drid;
					}

					else if (drid == "7th")
					{
						cout << endl << "--7th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "8th")
					{
						cout << endl << "--8th LEVEL DRUID--" << endl;
						cout << "WILD FORM IMPROVE: You no longer have the 'no flying speed' limit, and your max CR" << endl;
						cout << "increases to 1" << endl;
						goto dridabil;
					}

					else if (drid == "9th")
					{
						cout << endl << "--9th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "10th")
					{
						cout << endl << "--10th LEVEL DRUID--" << endl;
						goto druidcircle;
					}

					else if (drid == "11th")
					{
						cout << endl << "--11th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "12th")
					{
						cout << endl << "--12th LEVEL DRUID--" << endl;
						goto dridabil;
					}

					else if (drid == "13th")
					{
						cout << endl << "--13th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "14th")
					{
						cout << endl << "--14th LEVEL DRUID--" << endl;
						goto druidcircle;
					}

					else if (drid == "15th")
					{
						cout << endl << "--15th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "16th")
					{
						cout << endl << "--16th LEVEL DRUID--" << endl;
						goto dridabil;
					}

					else if (drid == "17th")
					{
						cout << endl << "--17th LEVEL DRUID--" << endl;
						goto dridnofeat;
					}

					else if (drid == "18th")
					{
						cout << endl << "--18th LEVEL DRUID--" << endl;
						cout << "BEAST SPELLS: While in Wild Shape, you can cast most druid spells. You can give Verbal" << endl;
						cout << "and Somatic components, but cannot provide Material components" << endl;
						cout << "TIMELESS BODY: For every 10 years that pass, you only age 1 year" << endl;
						goto drid;
					}

					else if (drid == "19th")
					{
						cout << endl << "--19th LEVEL DRUID--" << endl;
						goto dridabil;
					}

					else if (drid == "20th")
					{
						cout << endl << "--20th LEVEL DRUID--" << endl;
						cout << "ARCHDRUID: You can use Wild Shape an unlimited number of times" << endl;
						goto drid;
					}

					else if (drid == "dcrl")
					{
						dridcrl:
						cout << endl << "--DRUID CIRCLE--" << endl;
						cout << "Your Circle options are Circle of the Land ('land') or Circle of the Moon ('moon')" << endl;
						cout << "You get features at 2nd, 6th, 10th, and 14th Levels. In the Circle, you can type" << endl;
						cout << "the level number to view the Circle feature for that level" << endl;
						cin >> dridcrl;

						if (dridcrl == "land")
						{
							cout << endl << "--CIRCLE OF THE LAND--" << endl;
							cout << "In the Circle of the Land, you gain spells at 3rd, 5th, 7th, and 9th Levels" << endl;
							cout << "In addidion to choosing what level abilities you would like to see, you can" << endl;
							cout << "type 'spel' to access the Circle Spells page" << endl;
							land:
							cout << "What would you like to see?" << endl;
							cin >> crlopt;

							if (crlopt == "2nd")
							{
								cout << endl << "--2nd LEVEL LAND DRUID--" << endl;
								cout << "BONUS CANTRIP: You learn an extra druid cantrip of your choice" << endl;
								cout << "NATURAL RECOVERY: During a short rest, you can recover spell" << endl;
								cout << "slots of your choice. Their combined level is equal to half your" << endl;
								cout << "druid level, rounded down. None of the slots can be 6th level or" << endl;
								cout << "higher. You can't use this feature again until after a long rest" << endl;
								goto land;
							}

							else if (crlopt == "6th")
							{
								cout << endl << "--6th LEVEL LAND DRUID--" << endl;
								cout << "LAND'S STRIDE: Moving through nonmagical difficult terrain costs" << endl;
								cout << "no extra movement. You can also pass through nonmagical plants" << endl;
								cout << "without any negative effects (i.e. Thorn damage, slow). You have" << endl;
								cout << "the advantage on saving throws against magically created or controlled" << endl;
								cout << "plants made to impede movement, like those from the 'Entangle' spell" << endl;
								goto land;
							}

							else if (crlopt == "10th")
							{
								cout << endl << "--10th LEVEL LAND DRUID--" << endl;
								cout << "NATURE'S WARD: You can't be charmed by elementals or fey, and are" << endl;
								cout << "immune to poison and disease" << endl;
								goto land;
							}

							else if (crlopt == "14th")
							{
								cout << endl << "--14th LEVEL LAND DRUID--" << endl;
								cout << "NATURE'S SANCTUARY: Creatures of the natural world can sense your" << endl;
								cout << "connection to nature, and are hesitant to attack you. When a beast" << endl;
								cout << "or plant creature attacks you, it must make a Wis save against your" << endl;
								cout << "druid spell save DC. On a failed save, they must choose a new target" << endl;
								cout << "or the roll just fails. On success, they are immune to this effect" << endl;
								cout << "for 24 hours. The creature is aware of this effect before making the" << endl;
								cout << "attack roll on you" << endl;
								goto land;
							}

							else if (crlopt == "spel")
							{
								cout << endl << "--LAND CIRCLE SPELLS--" << endl;
								cout << "You get some spells (At 3rd, 5th, 7th, and 9th levels) based on where" << endl;
								cout << "you became a druid. 'list' will show you what places are available" << endl;
								cout << "If a spell you receive from this feature is not a druid spell, it" << endl;
								cout << "becomes one for you. These spells are always prepared for you and do" << endl;
								cout << "not detract from the amount that you prepare after a long rest" << endl;
								landspells:
								cout << "From where do you draw your druid magic?" << endl;
								cin >> x;

								if (x == "list")
								{
									cout << endl << "--LAND DRUID ORIGINS--" << endl;
									cout << "Arctic - rtic" << endl << "Coast - cost" << endl << "Desert - dsrt" << endl;
									cout << "Forest - frst" << endl << "Grassland - glnd" << endl << "Mountain - mntn" << endl;
									cout << "Swamp - swmp" << endl << "Underdark - udrk" << endl;
									goto landspells;
								}

								else if (x == "rtic")
								{
									cout << endl << "--ARCTIC LAND DRUID SPELLS--" << endl;
									cout << "3rd- Hold person, Spike growth" << endl << "5th- Sleet storm, Slow" << endl;
									cout << "7th- Freedom of movement, Ice storm" << endl << "9th- Commune with nature, Cone of cold" << endl;
									goto landspells;
								}

								else if (x == "cost")
								{
									cout << endl << "--COAST LAND DRUID SPELLS--" << endl;
									cout << "3rd- Mirror image, Misty step" << endl << "5th- Water breathing, Water walk" << endl;
									cout << "7th- Control water, Freedom of movement" << endl << "9th- Conjure elemental, Scrying" << endl;
									goto landspells;
								}

								else if (x == "dsrt")
								{
									cout << endl << "--DESERT LAND DRUID SPELLS--" << endl;
									cout << "3rd- Blur, Silence" << endl << "5th- Create food and water, Protection from energy" << endl;
									cout << "7th- Blight, Hallucinatory terrain" << endl << "9th- Insect plague, Wall of stone" << endl;
									goto landspells;
								}

								else if (x == "frst")
								{
									cout << endl << "--FOREST LAND DRUID SPELLS--" << endl;
									cout << "3rd- Barkskin, Spider climb" << endl << "5th- Call lightning, Plant growth" << endl;
									cout << "7th- Divination, Freedom of movement" << endl << "9th- commune with nature, Tree stride" << endl;
									goto landspells;
								}

								else if (x == "glnd")
								{
									cout << endl << "--GRASSLAND LAND DRUID SPELLS--" << endl;
									cout << "3rd- Invisibility, Pass without trace" << endl << "5th- Daylight, Haste" << endl;
									cout << "7th- Divination, Freedom of movement" << endl << "9th- Dream, Insect plague" << endl;
									goto landspells;
								}

								else if (x == "mntn")
								{
									cout << endl << "--MOUNTAIN LAND DRUID SPELLS--" << endl;
									cout << "3rd- Spider climb, Spike growth" << endl << "5th- Lightning bolt, Meld into stone" << endl;
									cout << "7th- Stone shape, Stoneskin" << endl << "9th- Passwall, Wall of stone" << endl;
									goto landspells;
								}

								else if (x == "swmp")
								{
									cout << endl << "--SWAMP LAND DRUID SPELLS--" << endl;
									cout << "3rd- Darkness, Melf ’s acid arrow" << endl << "5th- Water walk, Stinking cloud" << endl;
									cout << "7th- Freedom of movement, Locate creature" << endl << "9th- Insect plague, Scrying" << endl;
									goto landspells;
								}

								else if (x == "udrk")
								{
									cout << endl << "--UNDERDARK LAND DRUID SPELLS--" << endl;
									cout << "3rd- Spider climb, Web" << endl << "5th- Gaseous form, Stinking cloud" << endl;
									cout << "7th- Greater invisibility, Stone shape" << endl << "9th- Cloudkill, Insect plague" << endl;
									goto landspells;
								}

								else if (x == "exit")
								{
									cout << endl;
									goto land;
								}

								else
								{
									cout << endl << "You typed something wrong" << endl;
									goto landspells;
								}
							}

							else if (crlopt == "exit")
							{
								cout << endl;
								goto dridcrl;
							}

							else
							{
								cout << endl << "You typed something wrong." << endl;
								goto land;
							}
						}

						else if (dridcrl == "moon")
						{
							cout << endl << "--CIRCLE OF THE MOON--" << endl;
							cout << "You can type level numbers to view the specific Circle features for that level" << endl;
							moon:
							cout << "What would you like to see?" << endl;
							cin >> crlopt;

							if (crlopt == "2nd")
							{
								cout << endl << "--2nd LEVEL MOON DRUID--" << endl;
								cout << "COMBAT WILD SHAPE: You can use Wild Shape as a bonus action on your turn" << endl;
								cout << "instead of an action. Also, while transformed, you can use a bonus action" << endl;
								cout << "to expend a spell slot and regain HP equal to 1d8 per level of the slot" << endl;
								cout << "expended" << endl;
								cout << "CIRCLE FORMS: You can become more dangerous creatures. Your wild form" << endl;
								cout << "has a max CR of 1, but all other limitations stay." << endl;
								goto moon;
							}

							else if (crlopt == "6th")
							{
								cout << endl << "--6th LEVEL MOON DRUID--" << endl;
								cout << "PRIMAL STRIKE: Attacks while using Wild Form become magical for the purpose" << endl;
								cout << "of overcoming resistance and immunity to nonmagical attacks and damage" << endl;
								cout << "Also, at this level, your Circle Forms feature allows you to turn into" << endl;
								cout << "beasts with a CR equal to a third of your Druid level, rounded down" << endl;
								goto moon;
							}

							else if (crlopt == "10th")
							{
								cout << endl << "--10th LEVEL MOON DRUID--" << endl;
								cout << "ELEMENTAL WILD SHAPE: You can expend 2 uses of Wild Shape at once to" << endl;
								cout << "turn into an earth, wind, fire, or water elemental" << endl;
								goto moon;
							}

							else if (crlopt == "14th")
							{
								cout << endl << "--14th LEVEL MOON DRUID--" << endl;
								cout << "THOUSAND FORMS: You have a great grasp of Wild Shape, and can alter" << endl;
								cout << "details instead of your whole form. You can cast 'alter self' at will" << endl;
								goto moon;
 							}

							else if (crlopt == "exit")
							{
								cout << endl;
								goto dridcrl;
							}

							else
							{
								cout << endl << "You typed something wrong." << endl;
								goto moon;
							}
						}

						else if (dridcrl == "exit")
						{
							cout << endl;
							goto drid;
						}

						else
						{
							cout << endl << "You entered something wrong" << endl;
							goto dridcrl;
						}
					}

					else if (drid == "spel")
					{
						cout << endl << "--DRUID SPELL LISTS--" << endl;
						cout << "There are 9 levels of spellcasting, as well as cantrips (lvl 0)" << endl;
						dridspel:
						cout << "What would you like to see? (1st-9th, 'cntp' for cantrips)" << endl;
						cin >> dridspel;

						if (dridspel == "cntp")
						{
							cout << endl << "--DRUID CANTRIPS--" << endl;
							cout << "Druidcraft" << endl << "Guidance" << endl << "Mending" << endl;
							cout << "Poison Spray" << endl << "Produce Flame" << endl;
							cout << "Resistance" << endl << "Shillelagh" << endl << "Thorn Whip" << endl;
							goto dridspel;
						}

						else if (dridspel == "1st")
						{
							cout << endl << "--1st LEVEL DRUID SPELLS--" << endl;
							cout << "Animal Friendship" << endl << "Charm Person" << endl << "Create or Destroy Water" << endl;
							cout << "Cure Wounds" << endl << "Detect Magic" << endl << "Detect Poison and Disease" << endl;
							cout << "Entangle" << endl << "Faerie Fire" << endl << "Fog Cloud" << endl << "Goodberry" << endl;
							cout << "Healing Word" << endl << "Jump" << endl << "Longstrider" << endl << "Purify Food and Drink" << endl;
							cout << "Speak with Animals" << endl << "Thunderwave" << endl;
							goto dridspel;
						}

						else if (dridspel == "2nd")
						{
							cout << endl << "--2nd LEVEL DRUID SPELLS--" << endl;
							cout << "Animal Messenger" << endl << "Barkskin" << endl << "Beast Sense" << endl;
							cout << "Darkvision" << endl << "Enhance Ability" << endl << "Find Traps" << endl;
							cout << "Flame Blade" << endl << "Flaming Sphere" << endl << "Gust of Wind" << endl;
							cout << "Heat Metal" << endl << "Hold Person" << endl << "Lesser Restoration" << endl;
							cout << "Locate Animals or Plants" << endl << "Locate Object" << endl << "Moonbeam" << endl;
							cout << "Pass without Trace" << endl << "Protection from Poison" << endl << "Spike Growth" << endl;
							goto dridspel;
						}

						else if (dridspel == "3rd")
						{
							cout << endl << "--3rd LEVEL DRUID SPELLS--" << endl;
							cout << "Call Lightning" << endl << "Conjure Animals" << endl << "Daylight" << endl;
							cout << "Dispel Magic" << endl << "Feign Death" << endl << "Meld into Stone" << endl;
							cout << "Plant Growth" << endl << "Protection from Energy" << endl << "Sleet Storm" << endl;
							cout << "Speak with Plants" << endl << "Water Breathing" << endl << "Water Walk" << endl;
							cout << "Wind Wall" << endl;
							goto dridspel;
						}

						else if (dridspel == "4th")
						{
							cout << endl << "--4th LEVEL DRUID SPELLS--" << endl;
							cout << "Blight" << endl << "Confusion" << endl << "Conjure Minor Elementals" << endl;
							cout << "Conjure Woodland Beings" << endl << "Control Water" << endl << "Dominate Beast" << endl;
							cout << "Freedom of Movement" << endl << "Giant Insect" << endl << "Grasping Vine" << endl;
							cout << "Hallucinatory Terrain" << endl << "Ice Storm" << endl << "Locate Creature" << endl;
							cout << "Polymorph" << endl << "Stone Shape" << endl << "Stoneskin" << endl << "Wall of Fire" << endl;
							goto dridspel;
						}

						else if (dridspel == "5th")
						{
							cout << endl << "--5th LEVEL DRUID SPELLS--" << endl;
							cout << "Antilife Shell" << endl << "Awaken" << endl << "Commune with Nature" << endl;
							cout << "Conjure Elemental" << endl << "Contagion" << endl << "Geas" << endl;
							cout << "Greater Restoration" << endl << "Insect Plague" << endl << "Mass Cure Wounds" << endl;
							cout << "Planar Binding" << endl << "Reincarnate" << endl;
							cout << "Scrying" << endl << "Tree Stride" << endl << "Wall of Stone" << endl;
							goto dridspel;
						}

						else if (dridspel == "6th")
						{
							cout << endl << "--6th LEVEL DRUID SPELLS--" << endl;
							cout << "Conjure Fey" << endl << "Find the Path" << endl << "Heal" << endl;
							cout << "Heroes’ Feast" << endl << "Move Earth" << endl << "Sunbeam" << endl;
							cout << "Transport via Plants" << endl << "Wall of Thorns" << endl << "Wind Walk" << endl;
							goto dridspel;
						}

						else if (dridspel == "7th")
						{
							cout << endl << "--7th LEVEL DRUID SPELLS--" << endl;
							cout << "Fire Storm" << endl << "Mirage Arcane" << endl << "Plane Shift" << endl;
							cout << "Regenerate" << endl << "Reverse Gravity" << endl;
							goto dridspel;
						}

						else if (dridspel == "8th")
						{
							cout << endl << "--8th LEVEL DRUID SPELLS--" << endl;
							cout << "Animal Shapes" << endl << "Antipathy / Sympathy" << endl << "Control Weather" << endl;
							cout << "Earthquake" << endl << "Feeblemind" << endl << "Sunburst" << endl << "Tsunami" << endl;
							goto dridspel;
						}

						else if (dridspel == "9th")
						{
							cout << endl << "--9th LEVEL DRUID SPELLS--" << endl;
							cout << "Foresight" << endl << "Shapechange" << endl << "Storm of Vengeance" << endl;
							cout << "True Resurrection" << endl;
							goto dridspel;
						}

						else if (dridspel == "exit")
						{
							cout << endl;
							goto drid;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto dridspel;
						}
					}

					else if (drid == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto drid;
					}
				}

				//fighter
				else if (clas == "fitr")
				{
					cout << endl << "--FIGHTER--" << endl << "Saving throws: Str(Primary. Dex is alternative), Con" << endl;
					cout << "Hit Dice: 1d10 per Fighter Level" << endl << "Hit Points at 1st Level: 10 + Con Modifier" << endl;
					cout << "HP at higher levels: 1d10 (or 6) + Con mod per level after 1st" << endl << endl;
					cout << "--RECCOMENDATIONS--" << endl;
					cout << "Background: Soldier" << endl << "1st highest stat as Str or Dex (if you want range or finesse). Second highest as" << endl;
					cout << "Con or Int (If you plan to choose the Eldritch Knight archetype)" << endl << endl;
					cout << "--PROFICIENCIES--" << endl;
					cout << "Armor: All armor, shields" << endl << "Weapons: Simple and martial" << endl;
					cout << "Tools: none" << endl << "Skills (Choose 2): Acrobatics, Animal handling, Athletics, History, Insight, Intimidation, Perception," << endl;
					cout << "or Survival" << endl << endl;
					cout << "--EQUIPMENT--" << endl;
					cout << "-Chain mail OR Leather armor, a longbow, and 20 arrows" << endl;
					cout << "-A martial weapon and shield OR two martial weapons" << endl;
					cout << "-A light crossbow and 20 bolts OR two handaxes" << endl;
					cout << "-A dungeoneer's pack OR an explorer's pack" << endl;
					fitr:
					cout << endl << "What would you like to see about the Fighter?" << endl;
					cin >> fitr;

					if (fitr == "list")
					{
						cout << "List of Choices for Fighter" << endl;
						cout << "Martial Archetypes - 'marc'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto fitr;
					}

					else if (fitr == "tabl")
					{
						cout << endl << "--FIGHTER LEVEL STAT TABLE--" << endl;
						cout << "Format: Level - Prof bonus - New features" << endl;
						cout << "1st - +2 - Second Wind, Fighting Style" << endl << "2nd - +2 - Action surge (1 use)" << endl;
						cout << "3rd - +2 - Martial Archetype" << endl << "4th - +2 - Ability score improve" << endl;
						cout << "5th - +3 - Extra attack" << endl << "6th - +3 - Ability score improve" << endl;
						cout << "7th - +3 -  Martial Archetype Feature" << endl << "8th - +3 - Ability score improve" << endl;
						cout << "9th - +4 - Indomitable (1 use)" << endl << "10th - +4 - Martial Archetype feature" << endl;
						cout << "11th - +4 - Extra attack (2)" << endl << "12th - +4 - Ability score improve" << endl;
						cout << "13th - +5 - Indomitable (2 uses)" << endl << "14th - +5 - Ability score improve" << endl;
						cout << "15th - +5 - Martial archetype feature" << endl << "16th - +5 - Ability score improve" << endl;
						cout << "17th - +6 - Action surge (2 use), Indomitable (3 use)" << endl << "18th - +6 - Martial archetype feature" << endl;
						cout << "19th - +6 - Ability score improve" << endl << "20th - +6 - Extra Attack (3)" << endl;
						goto fitr;
					}

					else if (fitr == "1st")
					{
						cout << endl << "--1st LEVEL FIGHTER--" << endl;
						cout << "SECOND WIND: On your turn, you can take a bonus action to regain HP equal to" << endl;
						cout << "1d10 + your Fighter Level. You cannot use this again until after a short or" << endl;
						cout << "long rest" << endl;
						cout << "FIGHTING STYLE: You choose a particular style of fighting as a specialty. You" << endl;
						cout << "only have 1 at any given time, even if you get to choose again later. You get" << endl;
						cout << "a bonus based on your style. To look at styles, type 'fsty'. Otherwise, you" << endl;
						cout << "be brought back to the Fighter option area" << endl;
						cin >> x;

						if (x == "fsty")
						{
							cout << endl << "--FIGHTING STYLES--" << endl;
							cout << "ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;
							cout << "DEFENSE: Extra +2 to AC while wearing armor" << endl;
							cout << "DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
							cout << "you get a +2 bonus on damage rolls with that weapon" << endl;
							cout << "GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
							cout << "for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
							cout << "even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
							cout << "'2-handed' or 'versatile' property" << endl;
							cout << "PROTECTION: When a creature you see attacks another creature you see within" << endl;
							cout << "5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
							cout << "roll. You must be using a shield" << endl;
							cout << "TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
							cout << "put your ability modifier on the second attack" << endl;
							goto fitr;
						}

						else
						{
							goto fitr;
						}
					}

					else if (fitr == "2nd")
					{
						cout << endl << "--2nd LEVEL FIGHTER--" << endl;
						cout << "ACTION SURGE: You can take an extra Action on your turn. You can only use this" << endl;
						cout << "once before needing a short or long rest" << endl;
						goto fitr;
					}

					else if (fitr == "3rd")
					{
						cout << endl << "--3rd LEVEL FIGHTER--" << endl;
						cout << "You choose your Martial Archetype (more details in 'marc')" << endl;
						goto fitr;
					}

					else if (fitr == "4th")
					{
						cout << endl << "--4th LEVEL FIGHTER--" << endl;
						fitrabil:
						cout << "ABILITY SCORE IMPROVE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto fitr;
					}

					else if (fitr == "5th")
					{
						cout << endl << "--5th LEVEL FIGHTER--" << endl;
						cout << "EXTRA ATTACK: You can attack twice on the Attack action on your turn" << endl;
						goto fitr;
					}

					else if (fitr == "6th")
					{
						cout << endl << "--6th LEVEL FIGHTER--" << endl;
						goto fitrabil;
					}

					else if (fitr == "7th")
					{
						cout << "--7th LEVEL FIGHTER--" << endl;
						marcabil:
						cout << "You gain a feature from your Martial Archetype (more detail in 'marc')" << endl;
						goto fitr;
					}

					else if (fitr == "8th")
					{
						cout << endl << "--8th LEVEL FIGHTER--" << endl;
						goto fitrabil;
					}

					else if (fitr == "9th")
					{
						cout << endl << "--9th LEVEL FIGHTER--" << endl;
						cout << "INDOMITABLE: WHen you fail a saving throw, you can reroll it. You MUST" << endl;
						cout << "use this new roll. You can only use this once per long rest" << endl;
						goto fitr;
					}

					else if (fitr == "10th")
					{
						cout << endl << "--10th LEVEL FIGHTER--" << endl;
						goto marcabil;
					}

					else if (fitr == "11th")
					{
						cout << endl << "--11th LEVEL FIGHTER--" << endl;
						cout << "EXTRA ATTACK: You can attack three times on the Attack action on your turn" << endl;
						goto fitr;
					}

					else if (fitr == "12th")
					{
						cout << endl << "--12th LEVEL FIGHTER--" << endl;
						goto fitrabil;
					}

					else if (fitr == "13th")
					{
						cout << endl << "--13th LEVEL FIGHTER--" << endl;
						cout << "You can now use your Indomitable feature twice per long rest" << endl;
						goto fitr;
					}

					else if (fitr == "14th")
					{
						cout << endl << "--14th LEVEL FIGHTER--" << endl;
						goto fitrabil;
					}

					else if (fitr == "15th")
					{
						cout << endl << "--15th LEVEL FIGHTER--" << endl;
						goto marcabil;
					}

					else if (fitr == "16th")
					{
						cout << endl << "--16th LEVEL FIGHTER--" << endl;
						goto fitrabil;
					}

					else if (fitr == "17th")
					{
						cout << endl << "--17th LEVEL FIGHTER--" << endl;
						cout << "You can now use your Indomitable feature three times per long rest" << endl;
						cout << "You can now use your Action Surge feature twice per long rest" << endl;
						goto fitr;
					}

					else if (fitr == "18th")
					{
						cout << endl << "--18th LEVEL FIGHTER--" << endl;
						goto marcabil;
					}

					else if (fitr == "19th")
					{
						cout << endl << "--19th LEVEL FIGHTER--" << endl;
						goto fitrabil;
					}

					else if (fitr == "20th")
					{
						cout << endl << "--20th LEVEL FIGHTER--" << endl;
						cout << "EXTRA ATTACK: You can attack four times on the Attack action on your turn" << endl;
						goto fitr;
					}

					else if (fitr == "marc")
					{
						cout << endl << "--MARTIAL ARCHETYPES--" << endl;
						cout << "There are three Martial Archetypes to choose from: Champion ('cmpn'), Battle" << endl;
						cout << "Master ('bmas'), or Eldritch Knight ('ekni')." << endl;
						cout << "They will give you features when you choose them at 3rd level, as well as at" << endl;
						cout << "7th, 10th, 15th, and 18th Level";
						marc:
						cout << endl << "Which Martial Archetype would you like to view?" << endl;
						cin >> marc;

						if (marc == "cmpn")
						{
							cout << endl << "--CHAMPION FIGHTER--" << endl;
							cmpn:
							cout << "Which Level would you like to see the abilities for?" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL CHAMPION FIGHTER--" << endl;
								cout << "IMPROVED CRITICAL: Your weapon attacks score a crit when you roll a 19 or 20" << endl;
								goto cmpn;
							}

							else if (x == "7th")
							{
								cout << endl << "--7th LEVEL CHAMPION FIGHTER--" << endl;
								cout << "REMARKABLE ATHLETE: You can ass half your prof. bonus (round up) to any Str, Dex," << endl;
								cout << "or Con check you make that doesn't already use your proficiency bonus. Also, when" << endl;
								cout << "you do a running long jump, the distance you can cover increases by a number of ft" << endl;
								cout << "equal to your Str modifier" << endl;
								goto cmpn;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL CHAMPION FIGHTER--" << endl;
								cout << "ADDITIONAL FIGHTING STYLE: You are allowed to pick an extra Fighting Style" << endl;
								goto cmpn;
							}

							else if (x == "15th")
							{
								cout << endl << "--15th LEVEL CHAMPION FIGHTER--" << endl;
								cout << "SUPERIOR CRITICAL: Your weapon attacks score a crit on a roll of 18-20" << endl;
								goto cmpn;
							}

							else if (x == "18th")
							{
								cout << endl << "--18th LEVEL CHAMPION FIGHTER--" << endl;
								cout << "SURVIVOR: At the start of each of your turns, if you are at or below half your" << endl;
								cout << "Max HP, you gain HP equal to 5 + your Con modifier" << endl;
								goto cmpn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto marc;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto cmpn;
							}
						}

						else if (marc == "bmas")
						{
							cout << endl << "--BATTLE MASTER FIGHTER--" << endl;
							cout << "In addition to viewing features, you can look at the Maneuvers list by typing 'mnvr'" << endl;
							cout << "(Maneuvers explained in 3rd level area)" << endl;
							bmas:
							cout << "Which Level would you like to see the abilities for?" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL BATTLE MASTER FIGHTER--" << endl;
								cout << "STUDENT OF WAR: You gain a proficiency in one Artisan's Tools of your choice" << endl;
								cout << "COMBAT SUPERIORITY: You learn Maneuvers fueled by Superiority dice" << endl << endl;
								cout << "Maneuvers: You learn 3 Maneuvers of your choice. Mostly, they enhance an attack" << endl;
								cout << "in some way. You can only use 1 maneuver per attack. You learn 2 extra Maneuvers" << endl;
								cout << "of your choice at 7th, 10th, and 15th Levels. At any of those levels, you can also" << endl;
								cout << "replace a Maneuver you've chosen with a different one" << endl << endl;
								cout << "Superiority Dice: You have four Superiority Dice (d8's). A superiority dice is expended" << endl;
								cout << "every time you use one. You regain all dice after a short or long rest. you gain another" << endl;
								cout << "superiority die at 7th and 15th Level" << endl << endl;
								cout << "Saving Throws: Some Maneuvers require the target to make a saving throw to resist its" << endl;
								cout << "effects. The DC is 8 + your Str or Dex modifier (your choice)" << endl;
								goto bmas;
							}

							else if (x == "7th")
							{
								cout << endl << "--7th LEVEL BATTLE MASTER FIGHTER--" << endl;
								cout << "KNOW YOUR ENEMY: If you spend at least 1 minute observing or interacting with" << endl;
								cout << "a creature outside battle, you learn info about it as it relates to you. The DM" << endl;
								cout << "tells you if they are equal, better, or worse in two of the following areas (your" << endl;
								cout << "choice)" << endl << "-Str Score" << endl << "-Dex Score" << endl << "-Con Score" << endl << "-AC" << endl;
								cout << "-Current HP" << endl << "-Total class levels (if any)" << endl << "-Figher Class Levels (if any)" << endl;
								goto bmas;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL BATTLE MASTER FIGHTER--" << endl;
								cout << "IMPROVED COMBAT SUPERIORITY: Your Superiority die become d10's" << endl;
								goto bmas;
							}

							else if (x == "15th")
							{
								cout << endl << "--15th LEVEL BATTLE MASTER FIGHTER--" << endl;
								cout << "RELENTLESS: When you roll for Initiative and have no Superiority" << endl;
								cout << "left, you regain 1 Superiority die" << endl;
								goto bmas;
							}

							else if (x == "18th")
							{
								cout << endl << "--18th LEVEL BATTLE MASTER FIGHTER--" << endl;
								cout << "SUPERIOR COMBAT SUPERIORITY: Your Superiority die become d12's" << endl;
								goto bmas;
							}

							else if (x == "mnvr")
							{
								cout << endl << "--BATTLE MASTER FIGHTER MANEUVERS--" << endl;
								cout << "Type 'list' for the list of Maneuvers as well as their codes. Type a " << endl;
								cout << "Maneuver code to view it" << endl;
								mnvr:
								cout << "What would you like to view?" << endl;
								cin >> x;

								if (x == "list")
								{
									cout << endl << "--MANEUVER LIST--" << endl;
									cout << "-Commander's Strike 'cmst'" << endl << "-Disarming Attack 'datk'" << endl << "-Distracting Strike 'dstr'" << endl;
									cout << "-Evasive Footwork 'evft'" << endl << "-Feinting Attack 'fatk'" << endl << "-Goading Attack 'gatk'" << endl;
									cout << "-Lunging Attack 'latk'" << endl << "-Maneuvering Attack 'matk'" << endl << "Menacing Attack 'metk'" << endl;
									cout << "-Parry 'pary'" << endl << "-Precision Attack 'prtk'" << endl << "-Pushing Attack 'putk'" << endl << "-Rally 'raly" << endl;
									cout << "-Reposte 'rpst'" << endl << "-Sweeping Attack 'satk'" << endl << "-Trip Attack 'tatk'" << endl;
									goto mnvr;
								}

								else if (x == "cmst")
								{
									cout << endl << "--COMMANDER'S STRIKE--" << endl;
									cout << "On your Attack, you can skip attacking and use a bonus action to command a friendly" << endl;
									cout << "that can see and hear you to attack. They can use their reaction to immediately make" << endl;
									cout << "an attack. Upon doing so, you expend a Superiority die. They add the roll to their" << endl;
									cout << "attack's damage roll" << endl;
									goto mnvr;
								}

								else if (x == "datk")
								{
									cout << endl << "--DISARMING ATTACK--" << endl;
									cout << "When you hit a creature with a weapon attack, you can attempt to disarm it" << endl;
									cout << "by using a Superiority diethis forces the creature to drop an item it's holding" << endl;
									cout << "of your choice. You add the Superiority die roll to your damage. The creature" << endl;
									cout << "must make a Str save. On a failed save, they drop the item to their feet" << endl;
									goto mnvr;
								}

								else if (x == "dstr")
								{
									cout << endl << "--DISTRACTING STRIKE--" << endl;
									cout << "When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
									cout << "die to cause an opening for a teammate. Add the Superiority roll to the" << endl;
									cout << "damage. The next attack roll to that creature, so long as it is before" << endl;
									cout << "your next turn and not made by you, has the advantage" << endl;
									goto mnvr;
								}

								else if (x == "evft")
								{
									cout << endl << "--EVASIVE FOOTWORK--" << endl;
									cout << "While moving, you can expend a Superiority die. You add the roll to your AC" << endl;
									cout << "until you stop moving" << endl;
									goto mnvr;
								}

								else if (x == "fatk")
								{
									cout << endl << "--FEINTING ATTACK--" << endl;
									cout << "You can spend a Superiority die and a bonus action on your turn to feint," << endl;
									cout << "choosing a creature within 5ft of you. You have the advantage on your next" << endl;
									cout << "attack roll on that creature. On a hit, add the Superiority roll to the damage" << endl;
									goto mnvr;
								}

								else if (x == "gatk")
								{
									cout << endl << "--GOADING ATTACK--" << endl;
									cout << "When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
									cout << "die to goad them. Add the Superiority roll to the damage. That creature" << endl;
									cout << "makes a Wis saving throw. On a failed save, that creature has the disadvantage" << endl;
									cout << "on attack rolls against anyone but you until your next turn" << endl;
									goto mnvr;
								}

								else if (x == "latk")
								{
									cout << endl << "--LUNGING ATTACK--" << endl;
									cout << "When making a melee attack, you can expend a Superiority die to extend your" << endl;
									cout << "attack reach by 5ft. If you hit, add the Superiority roll to the attack's" << endl;
									cout << "damage" << endl;
									goto mnvr;
								}

								else if (x == "matk")
								{
									cout << endl << "--MANEUVERING ATTACK--" << endl;
									cout << "When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
									cout << "die to maneuver a friend into a better position. Add the Superiority roll" << endl;
									cout << "to your attack damage. Choose a friendly creature who can see or hear you." << endl;
									cout << "That creature can use their reaction to move up to half their normal speed" << endl;
									cout << "without provoking Opportunity Attacks from enemies" << endl;
									goto mnvr;
								}

								else if (x == "metk")
								{
									cout << endl << "--MENACING ATTACK--" << endl;
									cout << "When you hit a creature with a weapon attack, you can expend a Superiotity" << endl;
									cout << "die to try to frighten them. Add the Superiority roll to your attack damage." << endl;
									cout << "That creature must make a Wis saving throw. On a failed save, they are" << endl;
									cout << "frightened of you until the end of your next turn" << endl;
									goto mnvr;
								}

								else if (x == "pary")
								{
									cout << endl << "--PARRY--" << endl;
									cout << "When damaged by a melee attack, you can expend a Superiority die to reduce the" << endl;
									cout << "damage you take by the Superiority roll + your Dex modifier" << endl;
									goto mnvr;
								}

								else if (x == "prtk")
								{
									cout << endl << "--PRECISION ATTACK--" << endl;
									cout << "When you make a weapon attack roll against a creature, you can expend a" << endl;
									cout << "Superiority die to add it to the roll. You must do this before any effects" << endl;
									cout << "of the attack are applied, but can do it before or after the roll" << endl;
									goto mnvr;
								}

								else if (x == "putk")
								{
									cout << endl << "--PUSHING ATTACK--" << endl;
									cout << "When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
									cout << "die to try to push them back. Add the Superiority roll to the damage. They" << endl;
									cout << "make a Str saving throw. On a failed save, they are pushed up to 15ft back" << endl;
									goto mnvr;
								}

								else if (x == "raly")
								{
									cout << endl << "--RALLY--" << endl;
									cout << "On your turn, as a bonus action, you expend a Superiority die. Choose a" << endl;
									cout << "friendly creature that can see or hear you. You bolster their morale," << endl;
									cout << "granting them Temporary HP equal to the Superiority roll + your Cha" << endl;
									cout << "modifier" << endl;
									goto mnvr;
								}

								else if (x == "rpst")
								{
									cout << endl << "--RIPOSTE--" << endl;
									cout << "When a creature misses you with a melee attack, you can use your reaction and one Superiority" << endl;
									cout << "die to make a melee attack on that creature. On a hit, add the Superiority roll to your damage" << endl;
									cout << "roll" << endl;
									goto mnvr;
								}

								else if (x == "satk")
								{
									cout << endl << "--SWEEPING ATTACK--" << endl;
									cout << "When you hit a creature with a melee weapon attack, you can expend one Superiority die to try" << endl;
									cout << "to damage another target witht the attack. If they are within 5ft and your reach, and your" << endl;
									cout << "original attack roll would work on that creature, they take damage of the same type as the" << endl;
									cout << "first damage equal to the Superiority roll" << endl;
									goto mnvr;
								}

								else if (x == "tatk")
								{
									cout << endl << "--TRIP ATTACK--" << endl;
									cout << "When you hit a creature with a weapon attack, you can use a Superiority die to attempt" << endl;
									cout << "to trip them. You add the Superiority roll to your damage roll. Target creature must" << endl;
									cout << "make a Str saving throw. On a failed save, you knock them prone" << endl;
									goto mnvr;
								}

								else if (x == "exit")
								{
									cout << endl;
									goto bmas;
								}

								else
								{
									cout << endl << "You entered something wrong" << endl;
									goto mnvr;
								}
							}

							else if (x == "exit")
							{
								cout << endl;
								goto marc;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto bmas;
							}
						}

						else if (marc == "ekni")
						{
							cout << endl << "--ELDRITCH KNIGHT FIGHTER--" << endl;
							ekni:
							cout << "Which Level would you like to see the abilities for?" << endl;
							cout << "You can cast spells as an Eldritch Knight. To see your spell slot table, type" << endl;
							cout << "'stabl'" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL ELDRITCH KNIGHT FIGHTER--" << endl;
								cout << "SPELLCASTING: You know Cantrips from the Wizard table. The Spells you learn" << endl;
								cout << "must be from the School of Abjuration or Evocation, save for one of the first" << endl;
								cout << "three you learn and the ones learned at 8th, 14th, and 20th Level (those can" << endl;
								cout << "be any school). Each time you level up, you can replace one spell with another" << endl;
								cout << "on your Known list. The new spell must be from Abjuration or Evocation, unless" << endl;
								cout << "you are replacing one you learned at 8th, 14th, or 20th Level, in which case" << endl;
								cout << "the new spell can be from any list. Your spellcasting ability is Int." << endl;
								cout << "Spell Save DC: 8 + Prof bonus + Int modifier" << endl << "Spell Attack modifier: Prof. Bonus + Int modifier" << endl;
								cout << "WEAPON BOND: You learn a ritual that makes a bond between you and a weapon. The" << endl;
								cout << "ritual takes place over an hour, and can be performed during a short rest. The" << endl;
								cout << "weapon must be within reach the whole time. At the end, you touch the weapon," << endl;
								cout << "creating the bond. A bonded weapon cannot be disarmed from you and, if it is" << endl;
								cout << "on the same plane of existance, you can summon it as a bonus action on your" << endl;
								cout << "turn, making it teleport to your hand. You can have up to 2 bonded weapons" << endl;
								cout << "at a time. If you want to bond to a third weapon, you must sever the bond" << endl;
								cout << "from one of the first two" << endl;
								goto ekni;
							}

							else if (x == "7th")
							{
								cout << endl << "--7th LEVEL ELDRITCH KNIGHT FIGHTER--" << endl;
								cout << "WAR MAGIC: When you use your action to cast a cantrip, you can make a weapon" << endl;
								cout << "attack as a bonus action" << endl;
								goto ekni;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL ELDRITCH KNIGHT FIGHTER--" << endl;
								cout << "ELDRITCH STRIKE: Your weapon attacks undercut resistance to your spells" << endl;
								cout << "When you hit a creature with a weapon attack, it has the disadvantage on" << endl;
								cout << "the next saving throw for a spell you cast before the end of your next turn" << endl;
								goto ekni;
							}

							else if (x == "15th")
							{
								cout << endl << "--15th LEVEL ELDRITCH KNIGHT FIGHTER--" << endl;
								cout << "While using Action Surge, you can teleport up to 30ft away to an unnocupied space" << endl;
								cout << "you can see. You can do this before or after the additional action" << endl;
								goto ekni;
							}

							else if (x == "18th")
							{
								cout << endl << "--18th LEVEL ELDRITCH KNIGHT FIGHTER--" << endl;
								cout << "IMPROVED WAR MAGIC: When you use your action to cast a spell, you can make a weapon" << endl;
								cout << "attack as a bonus action" << endl;
								goto ekni;
							}

							else if (x == "stabl")
							{
								cout << endl << "--ELDRITCH KNIGHT SPELL SLOT TABLE--" << endl;
								cout << "FORMAT: Level - Cantrips Known - Spells Known - Spell Slots (Levels separated by comma)" << endl;
								cout << "3rd - 2 - 2 - 2" << endl << "4th - 2 - 4 - 3" << endl << "5th - 2 - 4 - 3" << endl;
								cout << "6th - 2 - 4 - 3" << endl << "7th - 2 - 5 - 4,2" << endl << "8th - 2 - 6 - 4,2" << endl;
								cout << "9th - 2 - 6 - 4,2" << endl << "10th - 3 - 7 - 4,3" << endl << "11th - 3 - 8 - 4,3" << endl;
								cout << "12th - 3 - 8 - 4,3" << endl << "13th - 3 - 9 - 4,3,2" << endl << "14th - 3 - 10 - 4,3,2" << endl;
								cout << "15th - 3 - 10 - 4,3,2" << endl << "16th - 3 - 11 - 4,3,3" << endl << "17th - 3 - 11 - 4,3,3" << endl;
								cout << "18th - 3 - 11 - 4,3,3" << endl << "19th - 3 - 12 - 4,3,3,1" << endl << "20th - 3 - 13 - 4,3,3,1" << endl;
								goto ekni;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto marc;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto ekni;
							}
						}

						else if (marc == "exit")
						{
							cout << endl;
							goto fitr;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto marc;
						}
					}

					else if (fitr == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto fitr;
					}
				}

				//monk
				//
				else if (clas == "monk")
				{
					cout << endl << "--MONK--" << endl << "Saving throws: Str, Dex (Primary, along w/ Wis)" << endl;
					cout << "Hit Dice: 1d8 per Monk level" << endl << "Hit Points at 1st Level: 8 + Con Modifier" << endl;
					cout << "HP at Higher Levels: 1d8 (or 5) + Con Modifier per Level after 1st" << endl << endl;
					cout << "--PROFICIENCIES--" << endl;
					cout << "Armor: None" << endl << "Weapons: Simple, Shortswords" << endl;
					cout << "Tools: Choose 1 artisan's tools OR musical instrument" << endl;
					cout << "Skills (Choose 2): Acrobatics, Athletics, History, Insight, Religion, Stealth" << endl << endl;
					cout << "--EQUIPMENT--" << endl;
					cout << "-A shortsword OR any simple weapon" << endl << "-A dungeoneer's pack OR an Explorer's pack" << endl;
					cout << "-10 darts" << endl << endl;
					cout << "--RECCOMENDATIONS--" << endl;
					cout << "Background: Hermit" << endl;
					monk:
					cout << endl << "What would you like to see about the Monk?" << endl;
					cin >> monk;

					if (monk == "list")
					{
						cout << endl << "List of Choices for Monk" << endl;
						cout << "Monastic Traditions - 'mtra'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto monk;
					}

					else if (monk == "tabl")
					{
						cout << endl << "--MONK LEVEL TABLE--" << endl;
						cout << "Format: Lvl - Prof. Bonus - Martial Arts - Ki Points - Unarmored Movement - New Feature(s)" << endl;
						cout << "1st - +2 - 1d4 - N/A - N/A - Unarmored Defense, Martial Arts" << endl;
						cout << "2nd - +2 - 1d4 - 2 - +10ft - Ki, Unarmored Movement" << endl;
						cout << "3rd - +2 - 1d4 - 3 - +10ft - Monastic Tradition, Deflect Missiles" << endl;
						cout << "4th - +2 - 1d4 - 4 - +10ft - Slow Fall, Ability Score Improve" << endl;
						cout << "5th - +3 - 1d6 - 5 - +10ft - Extra Attack, Stunning Strike" << endl;
						cout << "6th - +3 - 1d6 - 6 - +15ft - Ki-Empowered Strike, Monastic Tradition Feature" << endl;
						cout << "7th - +3 - 1d6 - 7 - +15ft - Evasion, Stillness of Mind" << endl;
						cout << "8th - +3 - 1d6 - 8 - +15ft - Ability Score Improve" << endl;
						cout << "9th - +4 - 1d6 - 9 - +15ft - Unarmored Movement Improve" << endl;
						cout << "10th - +4 - 1d6 - 10 - +20ft - Purity of Body" << endl;
						cout << "11th - +4 - 1d8 - 11 - +20ft - Monastic Tradition Feature" << endl;
						cout << "12th - +4 - 1d8 - 12 - +20ft - Ability Score Improve" << endl;
						cout << "13th - +5 - 1d8 - 13 - +20ft - Tongue of the Sun and Moon" << endl;
						cout << "14th - +5 - 1d8 - 14 - +25ft - Diamond Soul" << endl;
						cout << "15th - +5 - 1d8 - 15 - +25ft - Timeless Body" << endl;
						cout << "16th - +5 - 1d8 - 16 - +25ft - Ability Score Improve" << endl;
						cout << "17th - +6 - 1d10 - 17 - +25ft - Monastic Tradition Feature" << endl;
						cout << "18th - +6 - 1d10 - 18 - +30ft - Empty Body" << endl;
						cout << "19th - +6 - 1d10 - 19 - +30ft - Ability Score Improve" << endl;
						cout << "20th - +6 - 1d10 - 20 - +30ft - Perfect Self" << endl;
						goto monk;
					}

					else if (monk == "1st")
					{
						cout << endl << "--1st LEVEL MONK--" << endl;
						cout << "UNARMORED DEFENSE: While not using armor or a shield, your AC is 10 + your Dex" << endl;
						cout << "modifier + your Wis mod" << endl;
						cout << "MARTIAL ARTS: To start, a monk weapon is a shortsword or a simple weapon w/o the" << endl;
						cout << "Two-Handed or Heavy property. While unarmored and only using monk weapons, you" << endl;
						cout << "Gain the following benefits:" << endl << endl;
						cout << "-You can use Dex instead of Str for attack and damage rolls for unarmed strikes" << endl;
						cout << "and monk weapons" << endl << endl;
						cout << "You roll can a d4 instead for damage for your unarmed attacks and monk weapons." << endl;
						cout << "This changes per level (shown in the Martial Arts section of 'tabl')" << endl << endl;
						cout << "-When you take the Attack action on your turn with an unarmed strike or monk" << endl;
						cout << "weapon, you can make an unarmed strike as a bonus action" << endl << endl;
						cout << "Some monk orders have special weapons, like Nunchaku (2 clubs + chain), or Kama" << endl;
						cout << "(sickle with shorter blade). To use a weapon like this, find out what weapon it" << endl;
						cout << "weapon it is most like in the Weapons section" << endl;
						goto monk;
					}

					else if (monk == "2nd")
					{
						cout << endl << "--2nd LEVEL MONK--" << endl;
						cout << "UNARMORED MOVEMENT: WHile not wearing armor or a shield, your speed increases" << endl;
						cout << "by the amount shown in the Unarmored Movement section of 'tabl'" << endl;
						cout << "KI: Ki Points work sort of like spell slots. They help you do Monk abilities." << endl;
						cout << "The amount of points that you have per level is detailed in 'tabl'. Some abilities" << endl;
						cout << "require a Saving throw to be made. The DC for this is 8 + your proficiency bonus +" << endl;
						cout << "your Wis modifier. You regain expended Points after a short or long rest, so long " << endl;
						cout << "as 30 minutes of said rest are spent meditating. You start with 3 such abilities" << endl << endl;
						cout << "-FLURRY OF BLOWS: Immediately after taking the Attack action on your turn, you can" << endl;
						cout << "make 2 unarmed strikes as a bonus action" << endl << endl;
					}

					else if (monk == "3rd")
					{
						cout << endl << "--3rd LEVEL MONK--" << endl;
						cout << "DEFLECT MISSILE: As a reaction, when hit by a ranged weapon attack, you can attempt" << endl;
						cout << "to deflect or catch the missile. When you do, damage is reduced by 1d10 + Your Dex" << endl;
						cout << "modifier + your Monk Level. If you reduce the damage to 0 in this way, you catch" << endl;
						cout << "the missile if you have a hand open and the item can fit in your hand. If you" << endl;
						cout << "catch the missile in this way, you can spend 1 Ki to throw it. You are proficient" << endl;
						cout << "with the ammunition for the purpose of this throw. If it is not a Monk weapon, it" << endl;
						cout << "becomes one for this feature. This throw is part of the same reaction" << endl;
						cout << "MONASTIC TRADITION: You choose your Monastic Tradition. More info in 'marc'" << endl;
						goto monk;
					}

					else if (monk == "4th")
					{
						cout << endl << "--4th LEVEL MONK--" << endl;
						cout << "SLOW FALL: You can use your reaction to a fall to reduce the damage taken" << endl;
						cout << "from the fall by 5 x your Monk Level" << endl;
						monkabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto monk;
					}

					else if (monk == "5th")
					{
						cout << endl << "--5th LEVEL MONK--" << endl;
						cout << "EXTRA ATTACK: You can attack twice when you take the Attack action on your turn" << endl;
						goto monk;
					}

					else if (monk == "6th")
					{
						cout << endl << "--6th LEVEL MONK--" << endl;
						cout << "KI-EMPOWERED STRIKES: Your unarmed strikes count as magical for the purpose" << endl;
						cout << "of overcoming resistance to nonmagical attacks and damage" << endl;
						monkfeat:
						cout << "MONASTIC TRADITION FEATURE: You gain a feature from your Monastic Tradition" << endl;
						cout << "More info in 'marc'" << endl;
						goto monk;
					}

					else if (monk == "7th")
					{
						cout << endl << "--7th LEVEL MONK--" << endl;
						cout << "EVASION: When subjected to a damage affect that requires a Dex save to take half damage," << endl;
						cout << "you take no damage on a success and half damage on a fail" << endl;
						goto monk;
					}

					else if (monk == "8th")
					{
						cout << endl << "--8th LEVEL MONK--" << endl;
						goto monkabil;
					}

					else if (monk == "9th")
					{
						cout << endl << "--9th LEVEL MONK--" << endl;
						cout << "UNARMORED MOVEMENT IMPROVEMENT: On your turn, while not wearing armor or a shield," << endl;
						cout << "you can move across vertical or liquid surfaces without falling" << endl;
						goto monk;
					}

					else if (monk == "10th")
					{
						cout << endl << "--10th LEVEL MONK--" << endl;
						cout << "PURITY OF BODY: You can no longer be affected by poison or disease" << endl;
						goto monk;
					}

					else if (monk == "11th")
					{
						cout << endl << "--11th LEVEL MONK--" << endl;
						goto monkfeat;
					}

					else if (monk == "12th")
					{
						cout << endl << "--12th LEVEL MONK--" << endl;
						goto monkabil;
					}

					else if (monk == "13th")
					{
						cout << endl << "--13th LEVEL MONK--" << endl;
						cout << "TOUNGUE OF THE SUN AND MOON: You now understand all spoken languages. Additionally," << endl;
						cout << "any creature that understands any language can understand what you say" << endl;
						goto monk;
					}

					else if (monk == "14th")
					{
						cout << endl << "--14th LEVEL MONK--" << endl;
						cout << "DIAMOND SOUL: You not have proficiency in all saving throws. Additionally, if" << endl;
						cout << "you fail a saving throw, you can spend 1 Ki to reroll it and take the second" << endl;
						cout << "roll" << endl;
						goto monk;
					}

					else if (monk == "15th")
					{
						cout << endl << "--15th LEVEL MONK--" << endl;
						cout << "TIMELES BODY: You do not suffer the frailty of old age. You can still die of old age" << endl;
						cout << "Additionally, you no longer need food or water" << endl;
						goto monk;
					}

					else if (monk == "16th")
					{
						cout << endl << "--16th LEVEL MONK--" << endl;
						goto monkabil;
					}

					else if (monk == "17th")
					{
						cout << endl << "--17th LEVEL MONK--" << endl;
						goto monkfeat;
					}

					else if (monk == "18th")
					{
						cout << endl << "--18th LEVEL MONK--" << endl;
						cout << "EMPTY BODY: You can use your action to spend 4 Ki Points and become invisible" << endl;
						cout << "During that time, you have resistance to all damage except Force. Additionally," << endl;
						cout << "you can use 8 Ki points to use the Astral Projection spell without material" << endl;
						cout << "components. When you do, you cannot take anyone else with you" << endl;
						goto monk;

					}

					else if (monk == "19th")
					{
						cout << endl << "--19th LEVEL MONK--" << endl;
						goto monkabil;
					}

					else if (monk == "20th")
					{
						cout << endl << "--20th LEVEL MONK--" << endl;
						cout << "PERFECT SELF: When you roll initiative and have no Ki Points left," << endl;
						cout << "you regain 4 Ki Points" << endl;
						goto monk;
					}

					else if (monk == "mtra")
					{
						cout << endl << "--MONASTIC TRADITIONS--" << endl;
						cout << "You choose a tradition to study in, which gives you different features" << endl;
						cout << "based on the fighting style of the tradition. You get features at 3rd," << endl;
						cout << "6th, 11th, and 17th Levels. You can type those level numbers to view" << endl;
						cout << "The tradition features at that level while inside a Tradition menu." << endl;
						cout << "There are three Traditions:" << endl;
						cout << "-Way of the Open Hand - 'hand'" << endl << "-Way of Shadow - 'shad'" << endl;
						cout << "-Way of the Four Elements - 'lmns'" << endl;
						mtra:
						cout << "Which tradition would you like to view?" << endl;
						cin >> mtra;

						if (mtra == "hand")
						{
							cout << endl << "--WAY OF THE OPEN HAND--" << endl;
							cout << "This Monastic Tradition centers around martial arts and meditation" << endl;
							hand:
							cout << "What Level would you like to view features for?" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL HAND MONK--" << endl;
								cout << "OPEN HAND TECHNIQUE: When you hit an enemy with one of the extra Flurry of Blows attacks, " << endl;
								cout << "you can impose one of the following effects:" << endl;
								cout << "-Succeed a Dex throw or be knocked prone" << endl;
								cout << "-Succeed a Str throw or be pushed up to 15ft back" << endl;
								cout << "-Can't take reactions until the end of your next turn" << endl;
								goto hand;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL HAND MONK--" << endl;
								cout << "WHOLENESS OF BODY: As an action, you can gain HP equal to 3x your monk level" << endl;
								cout << "You can only use this once per long rest" << endl;
								goto hand;
							}

							else if (x == "11th")
							{
								cout << endl << "--11th LEVEL HAND MONK--" << endl;
								cout << "TRANQUILITY: At the end of a long rest, you gain the effect of a Sanctuary" << endl;
								cout << "spell. The spell can end early as normal. The saving throw DC is 8 + Wis" << endl;
								cout << "modifier + proficiency bonus" << endl;
								goto hand;
							}

							else if (x == "17th")
							{
								cout << endl << "--17th LEVEL HAND MONK--" << endl;
								cout << "QUIVERING PALM: When you hit a creature with an unarmed strike, you can spend 3 Ki Points" << endl;
								cout << "to start imperceptible vibrations in that creature, which can last up to an amount of days" << endl;
								cout << "equal to your monk level. They are harmless unless you use your action to end them. To end" << endl;
								cout << "them, you must be on the same plance of existence. When you end them, the creature makes a" << endl;
								cout << "Con saving throw. On a fail, it drops to 0 HP. On a success, it takes 10d10 necrotic damage" << endl;
								cout << "  You can only have one creature with your vibrations at a time. You can end the vibrations" << endl;
								cout << "harmlessly without using an action" << endl;
								goto hand;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto mtra;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto hand;
							}
						}

						else if (mtra == "shad")
						{
							cout << endl << "--WAY OF SHADOW--" << endl;
							cout << "This Monastic Tradition centers around martial deception and stealth" << endl;
							cout << "Basically, ninjas" << endl;
							shad:
							cout << "What Level would you like to view features for?" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL SHADOW MONK--" << endl;
								cout << "SHADOW ARTS: You can use your Ki to duplicate some spells. As an" << endl;
								cout << "action, you can spend 2 Ki Points to cast Darkvision, Darkness, Pass" << endl;
								cout << "Pass Without Trace, or Silence without needing the Material Components" << endl;
								cout << "Additionally, you know the Minor Illusion cantrip if you don't already" << endl;
								cout << "know it" << endl;
								goto shad;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL SHADOW MONK--" << endl;
								cout << "SHADOW STEP: As a bonus action, while in dim light or darkness, you can" << endl;
								cout << "teleport up to 60ft in an unnocupied space you can see that is also in" << endl;
								cout << "in dim light or darkness. You then have the advantage on the first melee" << endl;
								cout << "attack you make before the end of the turn" << endl;
								goto shad;
							}

							else if (x == "11th")
							{
								cout << endl << "--11th LEVEL SHADOW MONK--" << endl;
								cout << "CLOAK OF DARKNESS: When you are in an area of dim light or darkness, you" << endl;
								cout << "can use your action to become invisible. You stay that way until making" << endl;
								cout << "an attack, cast a spell, or go into a space with bright light" << endl;
								goto shad;
							}

							else if (x == "17th")
							{
								cout << endl << "--17th LEVEL SHADOW MONK--" << endl;
								cout << "OPPORTUNIST: When a creature within 5ft of you is hit by a creature other" << endl;
								cout << "than you, you can use your reaction to make a melee attack on the first" << endl;
								cout << "creature" << endl;
								goto shad;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto mtra;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto shad;
							}
						}

						else if (mtra == "lmns")
						{
							cout << endl << "--WAY OF THE OPEN HAND--" << endl;
							cout << "This Monastic Tradition centers around elemental arts, which are kinda" << endl;
							cout << "like magic.Rules for techniques that let you actually use spells described" << endl;
							cout << "in 'rules'" << endl;
							cout << "Instead of set features, you get Techniques. You start with the Technique" << endl;
							cout << "Elemental Attunement along with another of your choice. You learn an additional" << endl;
							cout << "Technique at each level you would usually get a Tradition Feature. Some Techniques" << endl;
							cout << "have a level requirement. Type the Level like usual to view those options. Options" << endl;
							cout << "without a level requirement will be in '3rd'" << endl;
							elemence:
							cout << "What Level would you like to view Techniques for?" << endl;
							cin >> x;

							if (x == "rules")
							{
								cout << endl << "--RULES FOR ELEMENTAL SPELLS--" << endl;
								cout << "For any spell, you do not need material components. Once you reach 5th Level," << endl;
								cout << "you can spend additional Ki Points to increase the level of your spell. 1 Ki" << endl;
								cout << "point spent this way raises the level by 1. There is a table below for the max" << endl;
								cout << "Ki Points you can spend in total on a spell." << endl;
								cout << "5th-8th: 3 Ki Points" << endl << "9th-12th: 4 Ki Points" << endl << "13th-16th: 5 Ki Points" << endl;
								cout << "17th-20th: 6 Ki Points" << endl;
								goto elemence;
							}

							else if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL REQUIREMENT TECHNIQUES--" << endl;
								cout << "-ELEMENTAL ATTUNEMENT: You can use your action to cause an elemental effect" << endl;
								cout << "	of your choice of the following options:" << endl;
								cout << "	-Create a harmless sensory effect related to one of the four elements" << endl;
								cout << "	such as some mist or sparks" << endl;
								cout << "	-Instantaneously light or snuff out a candle, torch, or small campfire" << endl;
								cout << "	-Chill or warm up to 1 pound of nonliving material for up to 1 hour" << endl;
								cout << "	-Cause earth, fire, water, or mist to shape itself within a 1ft cube" << endl;
								cout << "	into a crude form of your choice" << endl;
								cout << "-FANGS OF FIRE STRIKE: When you use the Attack action on your turn, you" << endl;
								cout << "	can spend 1 Ki Point to make flames come from your fists and feet. Your" << endl;
								cout << "	unarmed strikes have an extra 10 ft of range and deal flame damage instead" << endl;
								cout << "	of bludgeoning. Also, while rolling for damage you can spend 1 Ki Point to" << endl;
								cout << "	deal an extra 1d10 of fire damage" << endl;
								cout << "-FIST OF FOUR THUNDERS: You can spend 2 Ki Points to cast Thunderwave" << endl;
								cout << "-FIST OF UNBROKEN AIR: You can create an air blast that functions like a fist." << endl;
								cout << "	You spend 2 Ki Points and choose a creature within 30ft of you. They must make" << endl;
								cout << "	a Str saving throw. On a fail, they take 3d10 bludgeoning damage plus 1d10 for" << endl;
								cout << "	each extra Ki Point you spend. You can push them back up to 20ft and knock them" << endl;
								cout << "	prone. On success, they take half that much damage and aren't pushed back or knocked" << endl;
								cout << "	prone." << endl;
								cout << "-RUSH OF THE GALE SPIRITS: You can spend 2 Ki Points to cast Gust of Wind" << endl;
								cout << "-SHAPE THE FLOWING WATER: As an action, you can spend 1 Ki Point to choose an area" << endl;
								cout << "	no larger than a 30ft cube within 120ft of you. Within that area, you can freely" << endl;
								cout << "	manipulate ice. You can change it into any shape you want, raise or lower elevation," << endl;
								cout << "	create pillars, and so forth. The thing you create cannot be larger than half the" << endl;
								cout << "	area's dimension (15ft items if the area is 30ft). Also, you can change water to" << endl;
								cout << "	ice and vice versa. You cannot use this to trap or injure a creature" << endl;
								cout << "-SWEEPING CINDER STRIKE: You can spent 2 Ki Points to cast Burning Hands" << endl;
								cout << "-WATER WHIP: You can spend 2 Ki Points as a bonus action to create a whip of water" << endl;
								cout << "	that and choose a creature to hit with the whip. They must make a Dex save. On" << endl;
								cout << "	a fail, they take 3d10 bludgeoning damage plus 1d10 for each extra Ki Point you" << endl;
								cout << "	spend. Also, they can either be knocked prone or pulled up to 25ft closer to you" << endl;
								cout << "	On a success, they take half that damage and aren't pulled or knocked prone" << endl;
								goto elemence;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL REQUIREMENT TECHNIQUES--" << endl;
								cout << "-CLENCH OF THE NORTH WIND: You can spend 3 Ki Points to cast Hold Person" << endl;
								cout << "-GONG OF THE SUMMIT: You can spend 3 Ki Points to cast Shatter" << endl;
								goto elemence;
							}

							else if (x == "11th")
							{
								cout << endl << "--11th LEVEL REQUIREMENT TECHNIQUES--" << endl;
								cout << "-ETERNAL MOUNTAIN DEFENSE: You can spend 5 Ki Points to cast Stoneskin, targetting yourself" << endl;
								cout << "-FLAMES OF THE PHOENIX: You can spend 4 Ki Points to cast Fireball" << endl;
								cout << "-MIST STANCE: You can spend 4 Ki Points to cast Gaseous Form, targetting yourself" << endl;
								cout << "-RIDE THE WIND: You can spend 4 Ki Points to cast Fly, targetting yourself" << endl;
								goto elemence;
							}

							else if (x == "17th")
							{
								cout << endl << "--17th LEVEL REQUIREMENT TECHNIQUES--" << endl;
								cout << "-BREATH OF WINTER: You can spend 6 Ki Points to cast Cone of Cold" << endl;
								cout << "-RIVER OF HUNGRY FLAME: You can spend 5 Ki Points to cast Wall of Fire" << endl;
								cout << "-WAVE OF ROLLING EARTH: You can spend 6 Ki Points to cast Wall of Stone" << endl;
								goto elemence;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto mtra;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto elemence;
							}
						}

						else if (mtra == "exit")
						{
							cout << endl;
							goto monk;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto mtra;
						}
					}

					else if (monk == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto monk;
					}
				}

				//paladin
				//
				else if (clas == "pldn")
				{
					cout << endl << "--PALADIN--" << endl << "Saving throws: Wis, Cha(primary, along w/ str)" << endl;
					cout << "Hit Dice: 1d10" << endl << "Hit Points at 1st Level: 10 + your Con. Modifier" << endl;
					cout << "Hit Points at Higher Levels: 1d10 (or 6) + Con mod. per Level after 1st" << endl;
					cout << "Spell save DC: 8 + Prof. bonus + Cha modifier" << endl << "Spell attack modifier: Prof. bonus + Cha modifier" << endl << endl;
					cout << "--PROFICIENCIES--" << endl << "Armor: All armor, shields" << endl << "Weapons: Simple, Martial" << endl;
					cout << "Tools: none" << endl << "Skills (Choose 2): Athletics, Insight, Intimidation, Medicine, Persuasion, Religion" << endl;
					cout << endl << "--RECCOMENDED--" << endl;
					cout << "Background: Noble" << endl << endl;
					cout << "--EQUIPMENT--" << endl;
					cout << "-A martial weapon and a shield OR two martial weapons" << endl;
					cout << "-Five javelins OR any simple melee weapon" << endl;
					cout << "-A priest's pack OR an explorer's pack" << endl;
					cout << "-Chain mail AND a holy symbol" << endl;
					pldn:
					cout << "What would you like to see for the Paladin?" << endl;
					cin >> pldn;

					if (pldn == "list")
					{
						cout << endl << "List of Choices for Paladin" << endl;
						cout << "Sacred Oath options - 'soth'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "List of Paladin spells - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto pldn;
					}

					else if (pldn == "tabl")
					{
						cout << endl << "--PALADIN LEVEL TABLE--" << endl;
						cout << "FORMAT: Level - Prof. Bonus - New Features - Spell slots (levels separated by commas)" << endl;
						cout << "1st - +2 - Divine Sense, Lay on Hands - No Slots" << endl;
						cout << "2nd - +2 - Fighting Style, Spellcasting, Divine Smite - 2" << endl;
						cout << "3rd - +2 - Divine Health, Sacred Oath - 3" << endl;
						cout << "4th - +2 - Ability Score Improve - 3" << endl;
						cout << "5th - +3 - Extra Attack - 4,2" << endl;
						cout << "6th - +3 - Aura of Protection - 4,2" << endl;
						cout << "7th - +3 - Sacred Oath Feature - 4,3" << endl;
						cout << "8th - +3 - Ability Score Improve - 4,3" << endl;
						cout << "9th - +4 - N/A - 4,3,2" << endl;
						cout << "10th - +4 - Aura of Courage - 4,3,2" << endl;
						cout << "11th - +4 - Divine Smite Improve - 4,3,3" << endl;
						cout << "12th - +4 - Ability Score Improve - 4,3,3" << endl;
						cout << "13th - +5 - N/A - 4,3,3,1" << endl;
						cout << "14th - +5 - Cleansing Touch - 4,3,3,1" << endl;
						cout << "15th - +5 - Sacred Oath Feature - 4,3,3,2" << endl;
						cout << "16th - +5 - Ability Score Improve - 4,3,3,2" << endl;
						cout << "17th - +6 - N/A - 4,3,3,3,1" << endl;
						cout << "18th - +6 - Aura Improvement - 4,3,3,3,1" << endl;
						cout << "19th - +6 - Ability Score Improve - 4,3,3,3,2" << endl;
						cout << "20th - +6 - Sacred Oath feature - 4,3,3,3,2" << endl;
						goto pldn;
					}

					else if (pldn == "1st")
					{
						cout << endl << "--1st LEVEL PALADIN--" << endl;
						cout << "DIVINE SENSE: You can sense the presence of good and evil. As an action," << endl;
						cout << "you open your senses to these forces. Until the end of your next turn," << endl;
						cout << "you know the location of any celestial, fiend, or undead within 60ft of " << endl;
						cout << "you that isn't completely covered. You know the type of being you sense," << endl;
						cout << "but no real specifics (like species or name). Within the same radius, you" << endl;
						cout << "can sense any consecrated or desecrated land, like with the Hallow spell." << endl;
						cout << "You can use this an amount of times equal to 1 + Cha modifier per long" << endl;
						cout << "rest" << endl;
						cout << "LAY ON HANDS: You have a pool of healing power that replenishes after a" << endl;
						cout << "long rest. The amount in that bad boy is 5 * your Paladin level. As an" << endl;
						cout << "action, you can touch a creature to heal if for HP with a max of however" << endl;
						cout << "much is left in the pool. Additionally, you can use 5 points from the pool" << endl;
						cout << "to cure the target of one disease or neutralize one posion affecting it. You" << endl;
						cout << "can cure multiple things with one use, points permitting. This has no effect" << endl;
						cout << "on undead or constructs." << endl;
						goto pldn;
					}

					else if (pldn == "2nd")
					{
						cout << endl << "--2nd LEVEL PALADIN--" << endl;
						cout << "DIVINE SMITE: If you hit a creature with a melee weapon attack, you can use" << endl;
						cout << "a spell slot to deal extra radiant damage. The damage for a 1st level slot is" << endl;
						cout << "2d8, and increases by 1d8 for each slot higher (max of 5d8). If the target is" << endl;
						cout << "an undead or a fiend, the damege increases by 1d8, unnaffected by the max." << endl;
						cout << "SPELLCASTING: You can into magic! You prepare a list of available spells from" << endl;
						cout << "the Paladin spell list. The amount of spells on this list is equal to your Cha" << endl;
						cout << "modifier + half your Paladin level (rounded down). You can change the list after" << endl;
						cout << "a long rest. This time in meditation equal to 1 minute per spell level for each" << endl;
						cout << "spell on the list." << endl;
						cout << "FIGHTING STYLE: You choose 1 fighting style. You cannot have more than one, even" << endl;
						cout << "if you later get to choose again" << endl;
						cout << "Type 'style' if you want to look at the style options, or anything else to return" << endl;
						cout << "to the Paladin page" << endl;
						cin >> x;

						if (x == "style")
						{
							cout << endl << "--PALADIN FIGHTING STYLES--" << endl;
							cout << "-DEFENSE: While wearing armor, you get an extra +1 to AC" << endl << endl;
							cout << "DUELING: While wielding a weapon in one hand and no other weapon, you" << endl;
							cout << "gain a +2 bonus to damage with that weapon" << endl << endl;
							cout << "GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
							cout << "for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
							cout << "even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
							cout << "'2-handed' or 'versatile' property" << endl << endl;
							cout << "PROTECTION: When a creature you see attacks another creature you see within" << endl;
							cout << "5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
							cout << "roll. You must be using a shield" << endl;
							Sleep(2000);
							goto pldn;
						}
						else
						{
							cout << endl;
							goto pldn;
						}
					}

					else if (pldn == "3rd")
					{
						cout << endl << "--3rd LEVEL PALADIN--" << endl;
						cout << "DIVINE HEALTH: You are immune to disease" << endl;
						cout << "SACRED OATH: You choose which Oath to take, which will give you features and" << endl;
						cout << "spells. You always have those spells prepared, they don't count against the amount" << endl;
						cout << "you can have prepared. Any non-Paladin spell you gain this way becomes one for you" << endl;
						cout << "Eachoath also gives you the ability to Channel Divinity. The Oaths give you different" << endl;
						cout << "options for this, and explai how to use it. You can only use Channel Divinity once per" << endl;
						cout << "short or long rest. And saving throw DC is equal to your Spell Save DC" << endl;
						cout << "More in 'soth'" << endl;
						goto pldn;
					}

					else if (pldn == "4th")
					{
						cout << endl << "--4th LEVEL PALADIN--" << endl;
						pldnabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto pldn;
					}

					else if (pldn == "5th")
					{
						cout << endl << "--5th LEVEL PALADIN--" << endl;
						cout << "EXTRA ATTACK: You can attack twice instead of once when taking the Attack action on" << endl;
						cout << "your turn" << endl;
						goto pldn;
					}

					else if (pldn == "6th")
					{
						cout << endl << "--6th LEVEL PALADIN--" << endl;
						cout << "AURA OF PROTECTION: Within 10ft of you, if a friendly makes a saving throw" << endl;
						cout << "they gain a bonus equal to your Cha modifier. You must be conscious for this" << endl;
						goto pldn;
					}

					else if (pldn == "7th")
					{
						cout << endl << "--7th LEVEL PALADIN--" << endl;
						sothfeat:
						cout << "You get a feature from your Sacred Oath. More in 'soth'" << endl;
						goto pldn;
					}

					else if (pldn == "8th")
					{
						cout << endl << "--8th LEVEL PALADIN--" << endl;
						goto pldnabil;
					}

					else if (pldn == "9th")
					{
						cout << endl << "--9th LEVEL PALADIN--" << endl;
						pldnnofeat:
						cout << "There are no new features at this level" << endl;
						goto pldn;
					}

					else if (pldn == "10th")
					{
						cout << endl << "--10th LEVEL PALADIN--" << endl;
						cout << "AURA OF COURAGE: Within 10ft of you, friendlies can't be frightened while you" << endl;
						cout << "are conscious" << endl;
						goto pldn;
					}

					else if (pldn == "11th")
					{
						cout << endl << "--11th LEVEL PALADIN--" << endl;
						cout << "IMPROVED DIVINE SMITE: Any time you hit a creature with a melee weapon attack," << endl;
						cout << "You deal an extra 1d8 radiant damage. If using Divine Smite, this damage is added" << endl;
						cout << "to the bonus of Divine Smite" << endl;
						goto pldn;
					}

					else if (pldn == "12th")
					{
						cout << endl << "--12th LEVEL PALADIN--" << endl;
						goto pldnabil;
					}

					else if (pldn == "13th")
					{
						cout << endl << "--13th LEVEL PALADIN--" << endl;
						goto pldnnofeat;
					}

					else if (pldn == "14th")
					{
						cout << endl << "--14th LEVEL PALADIN--" << endl;
						cout << "CLEANSING TOUCH: You can use your action to end a spell's effect on you" << endl;
						cout << "or a willing creature. You can use this a number of times equal to your" << endl;
						cout << "Cha modifier per long rest" << endl;
						goto pldn;
					}

					else if (pldn == "15th")
					{
						cout << endl << "--15th LEVEL PALADIN--" << endl;
						goto sothfeat;
					}

					else if (pldn == "16th")
					{
						cout << endl << "--16th LEVEL PALADIN--" << endl;
						goto pldnabil;
					}

					else if (pldn == "17th")
					{
						cout << endl << "--17th LEVEL PALADIN--" << endl;
						goto pldnnofeat;
					}

					else if (pldn == "18th")
					{
						cout << endl << "--18th LEVEL PALADIN--" << endl;
						cout << "The radius of your Aura abilities (Protection and Courage) both increase to 30ft" << endl;
						goto pldn;
					}

					else if (pldn == "19th")
					{
						cout << endl << "--19th LEVEL PALADIN--" << endl;
						goto pldnabil;
					}

					else if (pldn == "20th")
					{
						cout << endl << "--20th LEVEL PALADIN--" << endl;
						goto sothfeat;
					}

					else if (pldn == "soth")
					{
						cout << endl << "--SACRED OATHS--" << endl;
						cout << "Your three options are Devotion, Ancient, and Vengeance" << endl;
						cout << "('dvtn', 'acnt', 'vngc' respectively)" << endl;
						cout << "In every area, your options are '3rd', '7th', '15th', '20th', 'tenets', and" << endl;
						cout << "'spells'. '3rd' has Channel Divinity abilities. Tenets details the vows you" << endl;
						cout << "take in the Oath, mostly for characterization purposes" << endl;
						cout << "Extra rules detailed in the 3rd Level section from the main page" << endl;
						soth:
						cout << "Which Oath would you like to see?" << endl;
						cin >> soth;

						if (soth == "dvtn")
						{
							cout << endl << "--OATH OF DEVOTION--";
							dvtn:
							cout << endl << "What would you like to see?" << endl;
							cin >> sothchoice;

							if (sothchoice == "3rd")
							{
								cout << endl << "--3rd LEVEL DEVOTION PALADIN--" << endl;
								cout << "CHANNEL DIVINITY OPTIONS:" << endl;
								cout << "-SACRED WEAPON: Using your Channel Divinity, as an action, you can embue a weapon" << endl;
								cout << "you are holding with your power. For 1 minute, you add your Cha modifier to attack" << endl;
								cout << "rolls made with the weapon. Also,it emits bright light for 20ft and dim light for" << endl;
								cout << "20ft beyond that. If it is not already magical, it becomes so for the duration. You" << endl;
								cout << "can end this effect on your turn as part of any other action. If you are no longer" << endl;
								cout << "holding or carrying the weapon, or fall unconscious, the effect ends." << endl << endl;
								cout << "-TURN THE UNHOLY: As an action, you present your holy symbol ans speak some holy words. Every undead" << endl;
								cout << " or fiend that can see or hear you within 30ft must make a Wis saving throw. If they fail, they" << endl;
								cout << "are turned for a minute or until taking damage. Turned creatures must spend their turns getting away" << endl;
								cout << "from you. It can't willingly move within 30ft of you. A turned creature cannot make reactions. It" << endl;
								cout << "can only use Dash as its action. If there is nowhere to use, it can use Dodge" << endl;
							}

							else if (sothchoice == "7th")
							{
								cout << endl << "--7th LEVEL DEVOTION PALADIN--" << endl;
								cout << "AURA OF DEVOTION: You and friendlies within 10ft of you can't" << endl;
								cout << "be charmed while you are conscious" << endl;
								goto dvtn;
							}

							else if (sothchoice == "15th")
							{
								cout << endl << "--15th LEVEL DEVOTION PALADIN--" << endl;
								cout << "PURITY OF SPIRIT: You are constantly under the effects of a 'Protection" << endl;
								cout << "from Good and Evil' spell." << endl;
								goto dvtn;
							}

							else if (sothchoice == "20th")
							{
								cout << endl << "--20th LEVEL DEVOTION PALADIN--" << endl;
								cout << "HOLY NIMBUS- As an action, you emit an aura of sunlight. For 1" << endl;
								cout << "minute, brightlight shines from you in a 30ft radiius, and dim" << endl;
								cout << "light goes 30ft beyond that. When an enemy creature starts its" << endl;
								cout << "turn in the bright light, it takes 10 radiant damage. Also, for" << endl;
								cout << "the duration, you have the advantage on saving throws against" << endl;
								cout << "spells from fiends and undead. This can be used once per long" << endl;
								cout << "rest" << endl;
								goto dvtn;
							}

							else if (sothchoice == "tenets")
							{
								cout << endl << "--TENETS OF DEVOTION OATH--" << endl;
								cout << "-Honesty: Don't lie or cheat" << endl;
								cout << "-Courage: Never fear to act" << endl;
								cout << "-Compassion: Protect the weak, treat foes with as much mercy as possible" << endl;
								cout << "-Honor: Do as much good as you can, do least harm possible" << endl;
								cout << "-Duty: Be responsible to actions and promises" << endl;
								Sleep(2500);
								goto dvtn;
							}

							else if (sothchoice == "spells")
							{
								cout << endl << "--DEVOTION PALADIN SPELLS--" << endl;
								cout << "3rd Level: Protectioh from Evil and Good, Sanctuary" << endl;
								cout << "5th: Lesser restoration, Zone of Truth" << endl;
								cout << "9th: Beacon of Hope, Dispel Magic" << endl;
								cout << "13th: Freedom of Movement, Guardian of Faith" << endl;
								cout << "17th: Commune, Flame Strike" << endl;
								Sleep(4000);
								goto dvtn;
							}

							else if (sothchoice == "exit")
							{
								cout << endl;
								goto soth;
							}

							else
							{
								cout << endl << "You typed something wrong." << endl;
								goto dvtn;
							}
						}

						else if (soth == "acnt")
						{
							cout << endl << "--OATH OF THE ANCIENTS--" << endl;
							acnt:
							cout << "What would you like to see?" << endl;
							cin >> sothchoice;

							if (sothchoice == "3rd")
							{
								cout << endl << "--3rd LEVEL ANCIENT PALADIN--" << endl;
								cout << "CHANNEL DIVINITY OPTIONS:" << endl;
								cout << "-NATURE'S WRATH: As an action, cause a creature you can see within 10ft of you" << endl;
								cout << "to ensnare with spectral vines. The creature must succeed a Str of Dex (its choice)" << endl;
								cout << "or be restrained. While restrained, it repeats this at the end of its turns as well." << endl;
								cout << "On success, it frees itself and the vines vanish." << endl;
								cout << "-TURN THE FAITHLESS: As an action, you present your holy symbol ans speak some holy words. Every fey" << endl;
								cout << " or fiend that can see or hear you within 30ft must make a Wis saving throw. If they fail, they" << endl;
								cout << "are turned for a minute or until taking damage. Turned creatures must spend their turns getting away" << endl;
								cout << "from you. It can't willingly move within 30ft of you. A turned creature cannot make reactions. It" << endl;
								cout << "can only use Dash as its action. If there is nowhere to use, it can use Dodge" << endl;
								Sleep(4000);
								goto acnt;
							}

							else if (sothchoice == "7th")
							{
								cout << endl << "--7th LEVEL ANCIENT PALADIN--" << endl;
								cout << "AURA OF WARDING: You and friendlies within 10ft of you have resistance" << endl;
								cout << "to spell damage" << endl;
								goto acnt;
							}

							else if (sothchoice == "15th")
							{
								cout << endl << "--15th LEVELANCIENT PALADIN--" << endl;
								cout << "UNDYING SENTINEL: When reduced to 0 HP but not outright killed, you" << endl;
								cout << "can choose to drop to 1 HP instead. Can only use 1 per long rest. Also," << endl;
								cout << "you don't suffer the effects of old age and can't be aged magically" << endl;
								goto acnt;
							}

							else if (sothchoice == "20th")
							{
								cout << endl << "--20th LEVEL ANCIENT PALADIN--" << endl;
								cout << "ELDER CHAMPION: As an action, you can transform into the form of an" << endl;
								cout << "ancient force of nature (examples: green skin, leafy hair, etc.). This" << endl;
								cout << "lasts for 1 minute, and for hat time you get the following benefits:" << endl;
								cout << "-At the beginning of your turns, you regain 10 HP" << endl;
								cout << "-When you use a Paladin spell with a casting time of 1 action, you can" << endl;
								cout << " do it as a bonus action instead" << endl;
								cout << "-Ememies within 10ft of you have disadvantage on saving throws against" << endl;
								cout << " your spells and Channel Divinity options" << endl;
								cout << "Once per long rest" << endl;
								Sleep(4000);
								goto acnt;
							}

							else if (sothchoice == "tenets")
							{
								cout << "--OATH OF THE ANCIENTS TENETS" << endl;
								cout << "-Kindle the Light: Kindle the light of hope in the world, beat back" << endl;
								cout << " despair with your kind and merciful actions" << endl;
								cout << "-Shelter the Light: Where life flourishes, proect it from death" << endl;
								cout << "-Protect your own Light: Delight in the good of the world, for" << endl;
								cout << " without light in your heart, you cannot protect it elsewhere" << endl;
								cout << "-Be the Light: Be a beacon for those in despair. Let your Light" << endl;
								cout << " show in your actions" << endl;
								goto acnt;
							}

							else if (sothchoice == "spells")
							{
								cout << "--ANCIENT PALADIN SPELLS--" << endl;
								cout << "3rd Level Spells: Ensnaring strike, Speak with animals" << endl;
								cout << "5th: Moonbeam, Misty step" << endl;
								cout << "9th: Plant growth, protection from energy" << endl;
								cout << "13th: Ice storm, Stoneskin" << endl;
								cout << "17th: Commune with nature, Tree stride" << endl;
								Sleep(1000);
								goto acnt;
							}

							else if (sothchoice == "exit")
							{
								cout << endl;
								goto soth;
							}

							else
							{
								cout << endl << "You typed something wrong." << endl;
								goto acnt;
							}
						}

						else if (soth == "vngc")
						{
							cout << endl << "--OATH OF VENGEANCE--" << endl;
							vngc:
							cout << "What would you like to see?" << endl;
							cin >> sothchoice;

							if (sothchoice == "3rd")
							{
								cout << endl << "--3rd LEVEL VENGEANCE PALADIN--" << endl;
								cout << "CHANNE DIVINITY OPTIONS:" << endl;
								cout << "-ABJURE ENEMY: As an action, you present your holy symbol ans speak a prayer of denunciation" << endl;
								cout << "Using your Channel Divinity, choose a creature within 60ft of you that you can see. That" << endl;
								cout << "creature must make a Wis saving throw. Fiends and undead have the disadvantage on this throw." << endl;
								cout << "On a fail, they become frightened for 1 minute of until it takes damage. While frightened, its" << endl;
								cout << "speed is 0 and it can't benifit from any speed bonuses. On a success, its speed is halved for" << endl;
								cout << "a minute of until it takes damage" << endl << endl;
								cout << "-VOW OF ENMITY: As a bonus action, you can take a Vow of Enmity against a creature you can see" << endl;
								cout << "within 10ft of you, using Channel Divinity. You get the advantage on attack rolls on that" << endl;
								cout << "creature for 1 minute or until it falls unconscious or hits 0 HP" << endl;
								goto vngc;
							}

							else if (sothchoice == "7th")
							{
								cout << endl << "--7th LEVEL VENGEANCE--" << endl;
								cout << "RELENTLESS AVENGER: When you hit an enemy with an opportunity" << endl;
								cout << "attack, you can move up to half your movement speed immediately" << endl;
								cout << "after as part of the same reaction. This doesn't provoke opportunity" << endl;
								cout << "attacks on you" << endl;
								goto vngc;
							}

							else if (sothchoice == "15th")
							{
								cout << endl << "--15th LEVEL VENGEANCE PALADIN--" << endl;
								cout << "SPIRIT OF VENGEANCE: When a creature under your Vow of Enmity (see 3rd level area)" << endl;
								cout << "makes an attack, you can use your reaction to make a melee weapon attack on them" << endl;
								cout << "if they are in range" << endl;
								goto vngc;
							}

							else if (sothchoice == "20th")
							{
								cout << endl << "--20th LEVEL VENGEANCE PALADIN--" << endl;
								cout << "AVENGING ANGEL: Using your action, you can transform. For 1 hour, you" << endl;
								cout << "Gain the following features:" << endl;
								cout << "-Wings sprout from your back, you get a flying speed of 60ft" << endl;
								cout << "-You emanate a 30ft aura of menace. The first time an enemy enters the" << endl;
								cout << " aura or starts a turn there, they become frightened for 1 minute or" << endl;
								cout << " until taking damage. Attack rolls on those creatures have the advantage" << endl;
								cout << "You can use this feature once per long rest" << endl;
								goto vngc;
							}

							else if (sothchoice == "tenets")
							{
								cout << endl << "--VENGEANCE OATH TENETS--" << endl;
								cout << "-Fight the Greater Evil: Always choose to fight the enemy more dangerous," << endl;
								cout << " or your sworn enemies" << endl;
								cout << "-No Mercy for the Wicked: Ordinary foes may glean mercy, but sworn enemies" << endl;
								cout << " will never" << endl;
								cout << "-By Any Means: My personal feelings will not get in the way of my mission" << endl;
								cout << "-Restitution: It is my fault if my foes wreak havoc, as I let them escape." << endl;
								cout << " Therefore, I must assist those affected" << endl;
								Sleep(4000);
								goto vngc;
							}

							else if (sothchoice == "spells")
							{
								cout << endl << "--VENGEANCE PALADIN SPELLS--" << endl;
								cout << "3rd Level: Bane, Hunter's mark" << endl;
								cout << "5th: Hold person, Misty step" << endl;
								cout << "9th: Haste, Protection from energy" << endl;
								cout << "13th: Banishment, Dimension door" << endl;
								cout << "17th: Hold monster, Scrying" << endl;
								goto vngc;
							}

							else if (sothchoice == "exit")
							{
								cout << endl;
								goto soth;
							}

							else
							{
								cout << endl << "You typed something wrong." << endl;
								goto vngc;
							}
						}

						else if (soth == "exit")
						{
							cout << endl;
							goto pldn;
						}
					}

					else if (pldn == "spel")
					{
						cout << endl << "--PALADIN SPELL LISTS--" << endl;
						cout << "Type the spell level (1st-5th). Paladins have no cantrips";
						pldnspel:
						cout << endl << "Which spell list would you like to see?" << endl;
						cin >> pldnspel;

						if (pldnspel == "1st")
						{
							cout << endl << "--1st LEVEL PALADIN SPELLS--" << endl;
							cout << "Bless" << endl << "Command" << endl << "Compelled Duel" << endl;
							cout << "Cure Wounds" << endl << "Detect Evil and Good" << endl << "Detect Magic" << endl;
							cout << "Detect Poison and Disease" << endl << "Divine Favor" << endl << "Heroism" << endl;
							cout << "Protection from Evil and Good" << endl << "Purify Food and Drink" << endl << "Searing Smite" << endl;
							cout << "Shield of Faith" << endl << "Thunderous Smite" << endl << "Wrathful Smite" << endl;
							Sleep(3000);
							goto pldnspel;
						}

						else if (pldnspel == "2nd")
						{
							cout << endl << "--2nd LEVEL PALADIN SPELLS--" << endl;
							cout << "Aid" << endl << "Branding Smite" << "Fine Steed" << endl;
							cout << "Lesser Restoration" << endl << "Locate Object" << endl << "Magic Weapon" << endl;
							cout << "Protection from Poison" << endl << "Zone of Truth" << endl;
							Sleep(2500);
							goto pldnspel;
						}

						else if (pldnspel == "3rd")
						{
							cout << endl << "--3rd LEVEL PALADIN SPELLS--" << endl;
							cout << "Aura of Vitality" << endl << "Blinding Smite" << endl << "Create Food and Water" << endl;
							cout << "Crusader's Mantle" << endl << "Daylight" << endl << "Dispel Magic" << endl;
							cout << "Elemental Weapon" << endl << "Magic Circle" << endl << "Remove Curse" << endl << "Revivify" << endl;
							Sleep(3000);
							goto pldnspel;
						}

						else if (pldnspel == "4th")
						{
							cout << endl << "--4th LEVEL PALADIN SPELLS--" << endl;
							cout << "Aura of Life" << endl << "Aura of Purity" << endl << "Banishment" << endl;
							cout << "Death Ward" << endl << "Locate Creature" << endl << "Staggering Smite" << endl;
							Sleep(2500);
							goto pldnspel;
						}

						else if (pldnspel == "5th")
						{
							cout << endl << "--5th LEVEL PALADIN SPELLS--" << endl;
							cout << "Banishing Smite" << endl << "Circle of Power" << endl << "Destructive Smite" << endl;
							cout << "Dispel Evil and Good" << endl << "Geas" << endl << "Raise Dead" << endl;
							Sleep(2250);
							goto pldnspel;
						}

						else if (pldnspel == "exit")
						{
							cout << endl;
							goto pldn;
						}
					}

					else if (pldn == "exit")
					{
						cout << endl;
						goto clas;
					}

					else 
					{
						cout << endl << "You typed something wrong" << endl;
						goto pldn;
					}
				}
				 
				//ranger
				//
				else if (clas == "rngr")
				{
					cout << endl << "--RANGER--" << endl << "Saving throws: Str, Dex(primary, along w/ Wis)" << endl;
					cout << "Hit Dice: 1d10 per Ranger level" << endl << "Hit Points at 1st Level: 10 + Con modifier" << endl;
					cout << "HP at higher Levels: 1d10(or 6) + Con Mod per Ranger level after 1st" << endl;
					cout << "Spell Save DC: 8 + Proficiency bonus + Wis modifier" << endl;
					cout << "Spell attack modifier: Wis modifier + Proficiency bonus" << endl;
					cout << endl << "--PROFICIENCIES--" << endl;
					cout << "Armor: Light, Medium, Shields" << endl << "Weapons: Simple, Martial" << endl;
					cout << "Tools: None" << endl;
					cout << "Skills (choose 3): Animal Handling, Athletics, Insight, Investigation, Nature, Perception," << endl;
					cout << "Stealth, Survival" << endl;
					cout << endl << "--RECCOMENDED--" << endl << "Background: Outlander" << endl;
					cout << endl << "--EQUIPMENT--" << endl;
					cout << "-Scale mail OR Leather armor" << endl << "-2 shortswords OR 2 simple melee weapons" << endl;
					cout << "-A dungeoneer's pack OR an explorer's pack" << endl << "A longbow AND quiver of 20 arrows" << endl;
					rngr:
					cout << endl << "What would you like to see for the ranger?" << endl;
					cin >> rngr;

					if (rngr == "list")
					{
						cout << endl << "List of Choices for Ranger" << endl;
						cout << "Ranger Archetype options - 'rarc'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "List of Ranger spells - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto rngr;
					}

					else if (rngr == "tabl")
					{
						cout << endl << "--RANGER LEVEL TABLE--" << endl;
						cout << "FORMAT: Level - Prof. Bonus - New Features - Spells Known - Spell slots (levels separated by commas)" << endl;
						cout << "1st - +2 - Favored enemy, Natural explorer - N/A - N/A" << endl;
						cout << "2nd - +2 - Fighting style, Spellcasting - 2 - 2" << endl;
						cout << "3rd - +2 - Ranger archetype, Primeval awareness - 3 - 3" << endl;
						cout << "4th - +2 - Ability score improve - 3 - 3" << endl;
						cout << "5th - +3 - Extra attack - 4 - 4,2" << endl;
						cout << "6th - +3 - Favored enemy/Natural explorer improve - 4 - 4,2" << endl;
						cout << "7th - +3 - Ranger archetype feature - 5 - 4,3" << endl;
						cout << "8th - +3 - Ability score improve, Ranger's stride - 5 - 4,3" << endl;
						cout << "9th - +4 - N/A - 6 - 4,3,2" << endl;
						cout << "10th - +4 - Natural explorer improve, Hide in plain sight - 6 - 4,3,2" << endl;
						cout << "11th - +4 - Ranger archetype feature - 7 - 4,3,3" << endl;
						cout << "12th - +4 - Ability score improve - 7 - 4,3,3" << endl;
						cout << "13th - +5 - N/A - 8 - 4,3,3,1" << endl;
						cout << "14th - +5 - Favored enemy improve, Varnish - 8 - 4,3,3,1" << endl;
						cout << "15th - +5 - Ranger archetype feature - 9 - 4,3,3,2" << endl;
						cout << "16th - +5 - Ability score improve - 9 - 4,3,3,2" << endl;
						cout << "17th - +6 - N/A - 10 - 4,3,3,3,1" << endl;
						cout << "18th - +6 - Feral senses - 10 - 4,3,3,3,1" << endl;
						cout << "19th - +6 - Ability score improve - 11 - 4,3,3,3,2" << endl;
						cout << "20th - +6 - Foe slayer - 11 - 4,3,3,3,2" << endl;
						goto rngr;
					}

					else if (rngr == "1st")
					{
						cout << endl << "--1st LEVEL RANGER--" << endl;
						cout << "FAVORED ENEMY: Choose a type of favored enemy OR two types of humanoid enemies." << endl;
						cout << "You have the advantage on Wis(Survival) checks to track thhat kind of enemy and" << endl;
						cout << "on Int checks to recall information about them. You also learn one additional" << endl;
						cout << "language spoken by that type of enemy, if they speak one." << endl;
						cout << "Your Favored Enemy type choices are:" << endl;
						cout << "Aberrations, beasts, celestials, constructs, dragons, elementals, fey, fiends," << endl;
						cout << "giants, monstrosities, oozes, plants, and undead" << endl << endl;
						cout << "NATURAL EXPLORER: You choose a type of favored terrain from  arctic, coast," << endl;
						cout << "desert, forest, grassland, mountain, swamp, or the Underdark. If you make a" << endl;
						cout << "Wis or Int check related to that terrain, your proficiency bonus is doubled" << endl;
						cout << "If you are proficient in the skill being used. Also, in this terrain, you and" << endl;
						cout << "your party gain the following effects: " << endl;
						cout << "-Diffucult terrain doesn't slow your travel" << endl;
						cout << "-Your group can't get lost except by magical means" << endl;
						cout << "-Even while doing another activity during travel (i.e. foraging), you are alert" << endl;
						cout << " for danger" << endl;
						cout << "-If travelling alone, you can move stealthily at a normal pace" << endl;
						cout << "-When foraging, you find twice as much food as normal" << endl;
						cout << "-When tracking creatures in the terrain, you can also tell their number, size, and" << endl;
						cout << " how long ago they were in the area" << endl;
						cout << "-When using Primeval Awareness (3rd Level), the range increases to 6 miles for you" << endl;
						goto rngr;
					}

					else if (rngr == "2nd")
					{
						cout << endl << "--2nd LEVEL RANGER--" << endl;
						cout << "SPELLCASTING: You can do magic. Every time you learn a new spell, it must be" << endl;
						cout << "of a level for which you have spell slots. Additionally, when learning a new" << endl;
						cout << "spell, you can replace an old spell with another one for which you have a " << endl;
						cout << "spell slot" << endl;
						cout << "FIGHTING STYLE: You choose a particular style of fighting as a specialty. You" << endl;
						cout << "only have 1 at any given time, even if you get to choose again later. You get" << endl;
						cout << "a bonus based on your style. Your options are:" << endl;
						cout << "-ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;
						cout << "-DEFENSE: Extra +2 to AC while wearing armor" << endl;
						cout << "-DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
						cout << " you get a +2 bonus on damage rolls with that weapon" << endl;
						cout << "-TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
						cout << " put your ability modifier on the second attack" << endl;
						goto rngr;
					}

					else if (rngr == "3rd")
					{
						cout << endl << "--3rd LEVEL RANGER--" << endl;
						cout << "PRIMEVAL AWARENESS: You can use your action and a spell slot to focus on the" << endl;
						cout << "area around you. For 1 minute per spell slot level used, you can sense if" << endl;
						cout << "aberrations, celestials, dragons, elementals, fey, fiends, or undead are within" << endl;
						cout << "1 mile of you. This feature doesn't reveal the creatures' location or number" << endl;
						cout << "RANGER ARCHETYPE: You choose a Ranger Archetype at ths level. More in 'rarc'" << endl;
						goto rngr;
					}

					else if (rngr == "4th")
					{
						cout << endl << "--4th LEVEL PALADIN--" << endl;
						rngrabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto rngr;
					}

					else if (rngr == "5th")
					{
						cout << endl << "--5th LEVEL RANGER--" << endl;
						cout << "EXTRA ATTACK: You can attack twice instead of once when you take the Attack" << endl;
						cout << "action on your turn" << endl;
						goto rngr;
					}

					else if (rngr == "6th")
					{
						cout << endl << "--6th LEVEL RANGER--" << endl;
						cout << "You can choose an additional Favored Enemy" << endl;
						cout << "You can choose an additional favored terrain for your Natural Explorer" << endl;
						cout << "feature" << endl;
						goto rngr;
					}

					else if (rngr == "7th")
					{
						cout << endl << "--7th LEVEL RANGER--" << endl;
						rarcfeat:
						cout << "You get a feature for your Ranger Archetype. More in 'rarc'" << endl;
						goto rngr;
					}

					else if (rngr == "8th")
					{
						cout << endl << "--8th LEVEL RANGER--" << endl;
						cout << "LAND'S STRIDE: Moving through difficult nonmagical terrain costs you no" << endl;
						cout << "extra movement. You can also pass through nonmagical plants without being" << endl;
						cout << "slowed or taking damage from thorns, spines, etc. Additionally, you have the" << endl;
						cout << "advantage on saving throws against magical plants used to impede movement," << endl;
						cout << "such as those made by the 'entangle' spell" << endl;
						goto rngrabil;
					}

					else if (rngr == "9th")
					{
						cout << endl << "--9th LEVEL RANGER--" << endl;
						rngrnofeat:
						cout << "You gain no new features at this Level" << endl;
						goto rngr;
					}

					else if (rngr == "10th")
					{
						cout << endl << "--10th LEVEL RANGER--" << endl;
						cout << "HIDE IN PLAIN SIGHT: You can spend 1 minute to apply camoflauge to" << endl;
						cout << "yourself, given access to mud, dirt, plants, and other naturalmaterials" << endl;
						cout << "for camoflauge. Once camoflauged, you can hide by pressing up against" << endl;
						cout << "a solid surface at least as tall and wide as you are. You gain a +10" << endl;
						cout << "bonus to Dex(Stealth) checks as long as you stay there without moving" << endl;
						cout << "or taking actions. If you do, you must reapply camoflauge to regain the" << endl;
						cout << "benefit." << endl;
						cout << "You gain another favored terrain for your Natural Explorer" << endl;
						goto rngr;
					}

					else if (rngr == "11th")
					{
						cout << endl << "--11th LEVEL RANGER--" << endl;
						goto rarcfeat;
					}

					else if (rngr == "12th")
					{
						cout << endl << "--12th LEVEL RANGER--" << endl;
						goto rngrabil;
					}

					else if (rngr == "13th")
					{
						cout << endl << "--13th LEVEL RANGER--" << endl;
						goto rngrnofeat;
					}

					else if (rngr == "14th")
					{
						cout << endl << "--14th LEVEL RANGER--" << endl;
						cout << "VANISH: You can use the Hide action as a bonus action on your turn. Also," << endl;
						cout << "you can't be tracked by nonmagical means, unless you choose to leave a" << endl;
						cout << "trail" << endl;
						cout << "You gain another Favored Enemy" << endl;
						goto rngr;
					}

					else if (rngr == "15th")
					{
						cout << endl << "--15th LEVEL RANGER--" << endl;
						goto rarcfeat;
					}

					else if (rngr == "16th")
					{
						cout << endl << "--16th LEVEL RANGER--" << endl;
						goto rngrabil;
					}

					else if (rngr == "17th")
					{
						cout << endl << "--17th LEVEL RANGER--" << endl;
						goto rngrnofeat;
					}

					else if (rngr == "18th")
					{
						cout << endl << "--18th LEVEL RANGER--" << endl;
						cout << "FERAL SENSES: When you attack a creature you can't see, your inability" << endl;
						cout << "to see it doesn't impose a disadvantage on attack rolls against it. Also," << endl;
						cout << "you are aware of the location of any invisible creature within 30ft of you," << endl;
						cout << "provided it isn't hidden from you and you aren't deafened or blinded" << endl;
						goto rngr;
					}

					else if (rngr == "19th")
					{
						cout << endl << "--19th LEVEL RANGER--" << endl;
						goto rngrabil;
					}

					else if (rngr == "20th")
					{
						cout << endl << "--20th LEVEL RANGER--" << endl;
						cout << "FOE SLAYER: Once per your turn, you can add your Wis modifier to the attack" << endl;
						cout << "or damage roll made on one of your Favored Enemies. You can do this before or" << endl;
						cout << "after the roll, but it must be before the effects of the roll are done" << endl;
					}

					else if (rngr == "rarc")
					{
						cout << endl << "--RANGER ARCHETYPE--" << endl;
						cout << "You have two options for Ranger Archetypes, Beast Master (bmst) and" << endl;
						cout << "Hunter (hntr). You gain features ar 3rd, 7th, 11th, and 15th levels" << endl;
						rarc:
						cout << "Which Archetype would you like to see?" << endl;
						cin >> rarc;

						if (rarc == "hntr")
						{
							cout << endl << "--HUNTER RANGER--";
							hntr:
							cout << endl << "What level would you like to see the features for?" << endl;
							cin >> bmst;

							if (bmst == "3rd")
							{
								cout << endl << "--3rd LEVEL HUNTER RANGER--" << endl;
								cout << "HUNTER'S PREY: Pick ONE of the following features:" << endl;
								cout << "-COLLOSSUS SLAYER: If you higt a creature with a weapon attack and it is" << endl;
								cout << " below its max HP, it takes an extra 1d8 damage. You can do this once per" << endl;
								cout << " turn" << endl;
								cout << "-GIANT KILLER: If a Large or larger creature is within 5ft of you and hits" << endl;
								cout << " or misses you with an attack, you can use your reaction to attack it right" << endl;
								cout << " after its attack, so long as you can see it" << endl;
								cout << "-HORDE BREAKER: Once per your turn when you make a weapon attack, you can make" << endl;
								cout << " another attack with the same weapon to a creature within 5ft of the first and" << endl;
								cout << " within the range of your weapon" << endl;
								goto hntr;
							}

							else if (bmst == "7th")
							{
								cout << endl << "--7th LEVEL HUNTER RANGER--" << endl;
								cout << "DEFENSIVE TACTICS: Choose ONE of the following features:" << endl;
								cout << "-ESCAPE THE HORDE: Opportunity attacks against you have the disadvantage" << endl;
								cout << "-MULTIATTACK DEFENSE: When a creature hits you with a weapon attack, you gain" << endl;
								cout << " a +4 bonus to AC against all subsequent attacks from that creature until the" << endl;
								cout << " end of the turn" << endl;
								cout << "-STEEL WILL: You have the advantage on saving throws against being frightened" << endl;
								goto hntr;
							}

							else if (bmst == "11th")
							{
								cout << endl << "--11th LEVEL HUNTER RANGER--" << endl;
								cout << "MULTIATTACK: Choose ONE of the following options:" << endl;
								cout << "-VOLLEY: You can use your action to make a ranged weapon attack to any number" << endl;
								cout << " of creatures within 10ft of a point you can see. You must have ammunition for" << endl;
								cout << " each target, and must make a separate attack roll for each" << endl;
								cout << "-WHIRLWIND ATTACK: You can use your action to make a weapon attack to any number" << endl;
								cout << " of creatures within 5ft of you, with a separate attack roll for each target" << endl;
								goto hntr;
							}

							else if (bmst == "15th")
							{
								cout << endl << "--15th LEVEL HUNTER RANGER--" << endl;
								cout << "SUPERIOR HUNTER'S DEFENSE: Choose ONE of the following options:" << endl;
								cout << "-EVASION: When you make a dex throw that normally yields taking half damage on" << endl;
								cout << " a success, you instead take no damage on a success and half damage on a fail" << endl;
								cout << "-STAND AGAINST THE TIDE: When a creature misses you with a weapon attack, you" << endl;
								cout << " can use your reaction to force it to make the same attack on another creature" << endl;
								cout << " of your choice, other than itself" << endl;
								cout << "-UNCANNY DODGE: When an attacker you can see hits you with an attack, you can" << endl;
								cout << " use your reaction to halve the damage" << endl;
								goto hntr;
							}

							else if (bmst == "exit")
							{
								cout << endl;
								goto rarc;
							}

							else
							{
								cout << endl << "You entered something wrong" << endl;
								goto bmst;
							}
						}

						else if (rarc == "bmst")
						{
							cout << endl << "--BEAST MASTER RANGER--";
							bmst:
							cout << endl << "What level would you like to view features for?" << endl;
							cin >> hntr;

							if (hntr == "3rd")
							{
								cout << endl << "--3rd LEVEL BEAST MASTER RANGER--" << endl;
								cout << "RANGER'S COMPANION: You get a beast companion. Choose a beast no" << endl;
								cout << "larger than Medium with a CR of 1/4 or lower. Add your proficiency" << endl;
								cout << "bonus to its AC, attack rolls, damage rolls, and any saving throws" << endl;
								cout << "or skill checks the beast is proficient in. Its HP is its normal" << endl;
								cout << "or 4x your Ranger level, whichever is higher. The beast obeys you" << endl;
								cout << "as best it can. It takes its turn on your initiative, but doesn't" << endl;
								cout << "act unless you tell it to. On your turn you can tell it where to" << endl;
								cout << "move without using an action. You can use your action to tell it" << endl;
								cout << "to make the Attack, Dash, Disengage, Dodge, or Help action. Once" << endl;
								cout << "you have the Extra Attack feature, you can do one attack with the" << endl;
								cout << "beast and one with you. While travelling in a Favored terrain with" << endl;
								cout << "only the beast, you can move stealthily at a normal pace. If it dies," << endl;
								cout << "you can get a new one by spending 8 hours magically bonding with a" << endl;
								cout << "new creature which can be the same or a new type as the old one, so" << endl;
								cout << "long as it still meets the requirements" << endl;
								goto bmst;
							}

							else if (hntr == "7th")
							{
								cout << endl << "--7th LEVEL BEAST MASTER RANGER--" << endl;
								cout << "EXCEPTIONAL TRAINING: On any turn your beast doesn't attack, you can use" << endl;
								cout << "a bonus action to command it to take the Dash, Disengage, Dodge, or Help" << endl;
								cout << "action on its turn" << endl;
								goto bmst;
							}

							else if (hntr == "11th")
							{
								cout << endl << "--11th LEVEL BEAST MASTER RANGER--" << endl;
								cout << "Your beast can make two attacks when you command it to make the Attack" << endl;
								cout << "action on your turn" << endl;
								goto bmst;
							}

							else if (hntr == "15th")
							{
								cout << endl << "--15th LEVEL BEAST MASTER RANGER--" << endl;
								cout << "When you cast a spell targetting yourself, you can also target your beast" << endl;
								cout << "if it is within 30ft of you" << endl;
								goto bmst;
							}

							else if (hntr == "exit")
							{
								cout << endl;
								goto rarc;
							}

							else
							{
								cout << endl << "You entered something wrong" << endl;
								goto hntr;
							}
						}

						else if (rarc == "exit")
						{
							cout << endl;
							goto rngr;
						}

						else
						{
							cout << endl << "You entered something wrong" << endl;
							goto rarc;
						}
					}

					else if (rngr == "spel")
					{
						cout << endl << "--RANGER SPELL LISTS--" << endl;
						cout << "The Ranger has spells from 1st to 5th level." << endl;
						rngrspel:
						cout << "What level would you like to see the Ranger spells for?" << endl;
						cin >> rngrspel;

						if (rngrspel == "1st")
						{
							cout << endl << "--1st LEVEL RANGER SPELLS--" << endl;
							cout << "Alarm" << endl << "Animal Friendship" << endl << "Cure Wounds" << endl;
							cout << "Detect Magic" << endl << "Detect Poison and Disease" << endl << "Ensnaring Strike" << endl;
							cout << "Fog Cloud" << endl << "Goodberry" << endl << "Hail of Thorns" << endl;
							cout << "Hunter’s Mark" << endl << "Jump" << endl << "Longstrider" << endl << "Speak with Animals" << endl;
							goto rngrspel;
						}

						else if (rngrspel == "2nd")
						{
							cout << endl << "--2nd LEVEL RANGER SPELLS--" << endl;
							cout << "Animal Messenger" << endl << "Barkskin" << endl << "Beast Sense" << endl;
							cout << "Cordon of Arrows" << endl << "Darkvision" << endl << "Find Traps" << endl;
							cout << "Lesser Restoration" << endl << "Locate Animals or Plants" << endl;
							cout << "Locate Object" << endl << "Pass without Trace" << endl;
							cout << "Protection from Poison" << endl << "Silence" << endl << "Spike Growth" << endl;
							goto rngrspel;
						}

						else if (rngrspel == "3rd")
						{
							cout << endl << "--3rd LEVEL RANGER SPELLS--" << endl;
							cout << "Conjure Animals" << endl << "Conjure Barrage" << endl << "Daylight" << endl;
							cout << "Lightning Arrow" << endl << "Nondetection" << endl << "Plant Growth" << endl;
							cout << "Protection from Energy" << endl << "Speak with Plants" << endl;
							cout << "Water Breathing" << endl << "Water Walk" << endl << "Wind Wall" << endl;
							goto rngrspel;
						}

						else if (rngrspel == "4th")
						{
							cout << endl << "--4th LEVEL RANGER SPELLS--" << endl;
							cout << "Conjure Woodland Beings" << endl << "Freedom of Movement" << endl;
							cout << "Grasping Vine" << endl << "Locate Creature" << endl << "Stoneskin" << endl;
							goto rngrspel;
						}

						else if (rngrspel == "5th")
						{
							cout << endl << "--5th LEVEL RANGER SPELLS--" << endl;
							cout << "Commune with Nature" << endl << "Conjure Volley" << endl;
							cout << "Swift Quiver" << endl << "Tree Stride" << endl;
							goto rngrspel;
						}

						else if (rngrspel == "exit")
						{
							cout << endl;
							goto rngr;
						}

						else
						{
							cout << endl << "You typed something wrong." << endl;
							goto rngrspel;
						}
					}

					else if (rngr == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto rngr;
					}
				}

				//rogue
				//
				else if (clas == "rog")
				{
					cout << endl << "--ROGUE--" << endl << "Saving throws: Dex(primary), Int or Cha" << endl;
					cout << "Hit Dice: 1d8 per Rogue Level" << endl;
					cout << "Hit Points at 1st Level: 8 + Con modifier" << endl;
					cout << "HP at Higher Levels: 1d8 (or 5) + Constitution modifier per level after 1st" << endl;
					cout << endl << "--PROFICIENCIES--" << endl;
					cout << "Armor: Light" << endl << "Weapons: Simple, Hand crossbows, Rapiers, Long/Short swords" << endl;
					cout << "Tools: Thieves' Tools" << endl;
					cout << "Skills (Choose 4): Acrobatics, Athletics, Deception. Insight, Intimidation, Investigation," << endl;
					cout << "Perception, Perform ance.Persuasion, Sleight of Hand, Stealth" << endl;
					cout << endl << "--RECCOMENDED--" << endl;
					cout << "If you want to be good with the Investigation skill or be of the Arcane Trickster" << endl;
					cout << "archetype, choose Int as your second highest ability. If you want to be good at" << endl;
					cout << "deception or social interaction, choose Cha instead. Choose the Charlatan" << endl;
					cout << "background" << endl;
					cout << endl << "--EQUIPMENT--" << endl; 
					cout << "-Rapier OR shortsword" << endl << "-Shortbow w/ quiver of 20 arrows OR shortsword" << endl;
					cout << "-Burglar's pack, Dungeoneer's pack, OR Explorer's pack" << endl;
					cout << "-Leather armor, two daggers, AND thieves' tools";
					rog:
					cout << endl << "What would you like to see for the rogue?" << endl;
					cin >> rog;

					if (rog == "list")
					{
						cout << endl << "List of Choices for Rogue" << endl;
						cout << "Roguish Archetype options - 'rorc'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto rog;
					}

					else if (rog == "tabl")
					{
						cout << endl << "--ROGUE LEVEL TABLE--" << endl;
						cout << "Format: Level - Proficiency bonus - Sneak Attack - New features" << endl;
						cout << "1st - +2 - 1d6 - Expertise, Sneak attack, Thieves' Cant" << endl; 
						cout << "2nd - +2 - 1d6 - Cunning Action" << endl;
						cout << "3rd - +2 - 2d6 - Roguish Archetype" << endl;
						cout << "4th - +2 - 2d6 - Ability Score Improve" << endl;
						cout << "5th - +3 - 3d6 - Uncanny Dodge" << endl;
						cout << "6th - +3 - 3d6 - Expertise" << endl;
						cout << "7th - +3 - 4d6 - Evasion" << endl;
						cout << "8th - +3 - 4d6 - Ability score improve" << endl;
						cout << "9th - +4 - 5d6 - Roguish archetype feature" << endl;
						cout << "10th - +4 - 5d6 - Ability score improve" << endl;
						cout << "11th - +4 - 6d6 - Reliable Talent" << endl;
						cout << "12th - +4 - 6d6 - Ability score improve" << endl;
						cout << "13th - +5 - 7d6 - Roguish archetype feature" << endl;
						cout << "14th - +5 - 7d6 - Blind sense" << endl;
						cout << "15th - +5 - 8d6 - Slippery mind" << endl;
						cout << "16th - +5 - 8d6 - Ability score improve" << endl;
						cout << "17th - +6 - 9d6 - Roguish archetype feature" << endl;
						cout << "18th - +6 - 9d6 - Elusive" << endl;
						cout << "19th - +6 - 10d6 - Ability score improve" << endl;
						cout << "20th - +6 - 10d6 - Stroke of luck" << endl;
						goto rog;
					}

					else if (rog == "1st")
					{
						cout << endl << "--1st LEVEL ROGUE--" << endl;
						cout << "EXPERTISE: Choose two skill proficiencies or one skill and thieves' tools." << endl;
						cout << "all checks made with these skills (or tools) have a doubled proficiency" << endl;
						cout << "bonus." << endl;
						cout << "SNEAK ATTACK: If you have the advantage on an attack roll, you can deal" << endl;
						cout << "an extra 1d6 of damage of the weapon is ranged or finesse. You can use" << endl;
						cout << "this once per turn. You don't need to have the advantage on the roll" << endl;
						cout << "if another enemy of the target is within 5ft of it, if you don't have" << endl;
						cout << "the disadvantage, AND if it isn't incapacitated. The amount of damage" << endl;
						cout << "from this increases with level, shown in the 'tabl' section." << endl;
						cout << "THIEVES' CANT: You know the secret language of thieves. Only another" << endl;
						cout << "creature that knows Thieve's Cant can understand such messages. It" << endl;
						cout << "takes 4x longer to convey messages this way than regularly. Also," << endl;
						cout << "you understand a set of simple secret signs and symbols used for" << endl;
						cout << "short messages, such as if there is dangerous territory nearby, if" << endl;
						cout << "a territory is owned by the thieves' guild, if loot is nearby, if the" << endl;
						cout << "people in an area are easy targets, or if a safe house for thieves are" << endl;
						cout << "nearby" << endl;
						goto rog;
					}

					else if (rog == "2nd")
					{
						cout << endl << "--2nd LEVEL ROGUE--" << endl;
						cout << "CUNNING ACTION: You can take a bonus action on each of your turns in combat." << endl;
						cout << "This can only be used to make the Dash, Disengage, or Hide actions" << endl;
						goto rog;
					}

					else if (rog == "3rd")
					{
						cout << endl << "--3rd LEVEL ROGUE--" << endl;
						cout << "ROGUISH ARCHETYPE: You choose a Roguish Archetype. More in 'rorc'" << endl;
						goto rog;
					}

					else if (rog == "4th")
					{
						cout << endl << "--4th LEVEL ROGUE--" << endl;
						rogabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto rog;
					}

					else if (rog == "5th")
					{
						cout << endl << "--5th LEVEL ROGUE--" << endl;
						cout << "UNCANNY DODGE: When an attacker you can see hits you with an attack, you can" << endl;
						cout << "use your reaction to halve its damage to you" << endl;
						goto rog;
					}

					else if (rog == "6th")
					{
						cout << endl << "-6th LEVEL ROGUE--" << endl;
						cout << "EXPERTISE: You can choose two more expertise skills, or Thieves' Tools and" << endl;
						cout << "another skill if you haven't chosen Thieves' Tools already" << endl;
						goto rog;
					}

					else if (rog == "7th")
					{
						cout << endl << "--7th LEVEL ROGUE--" << endl;
						cout << "EVASION: When you are subjected to an effect that makes you do a Dex save to take" << endl;
						cout << "half damage, on a success you now take no damage, and on a fail take half damage" << endl;
						goto rog;
					}

					else if (rog == "8th")
					{
						cout << endl << "--8th LEVEL ROGUE--" << endl;
						goto rogabil;
					}

					else if (rog == "9th")
					{
						cout << endl << "--9th LEVEL ROGUE--" << endl;
						cout << "You gain a feature in your Roguish Archetype. More in 'rorc'" << endl;
						goto rog;
					}

					else if (rog == "10th")
					{
						cout << endl << "--10th LEVEL ROGUE--" << endl;
						goto rogabil;
					}

					else if (rog == "11th")
					{
						cout << endl << "--11th LEVEL ROGUE--" << endl;
						cout << "RELIABLE TALENT: If you make a check that you can use a prof. bonus on, you can" << endl;
						cout << "treat any d20 roll lower than a 10 as a 10." << endl;
						goto rog;
					}

					else if (rog == "12th")
					{
						cout << endl << "--12th LEVEL ROGUE--" << endl;
						goto rogabil;
					}

					else if (rog == "13th")
					{
						cout << endl << "--13th LEVEL ROGUE--" << endl;
						cout << "You gain a feature in your Roguish Archetype. More in 'rorc'" << endl;
						goto rog;
					}

					else if (rog == "14th")
					{
						cout << endl << "--14th LEVEL ROGUE--" << endl;
						cout << "BLINDSENSE: If you can hear, you are aware of the location of any hidden or" << endl;
						cout << "invisible enemies within 10ft of you" << endl;
						goto rog;
					}

					else if (rog == "15th")
					{
						cout << endl << "--15th LEVEL ROGUE--" << endl;
						cout << "SLIPPERY MIND: You gain proficiency in Wis saving throws" << endl;
						goto rog;
					}

					else if (rog == "16th")
					{
						cout << endl << "--16th LEVEL ROGUE--" << endl;
						goto rogabil;
					}

					else if (rog == "17th")
					{
						cout << endl << "--17th LEVEL ROGUE--" << endl;
						cout << "You gain a feature in your Roguish Archetype. More in 'rorc'" << endl;
						goto rog;
					}

					else if (rog == "18th")
					{
						cout << endl << "--18th LEVEL ROGUE--" << endl;
						cout << "ELUSIVE: No attack roll can have the advantage on you while you aren't incapacitated" << endl;
						goto rog;
					}

					else if (rog == "19th")
					{
						cout << endl << "--19th LEVEL ROGUE--" << endl;
						goto rogabil;
					}

					else if (rog == "20th")
					{
						cout << "--20th LEVEL ROGUE--" << endl;
						cout << "STROKE OF LUCK: If your attack misses an enemy within range, you can turn it into a hit." << endl;
						cout << "Alternatively, If you fail an ability check, you can treat the roll as a nat20. You can" << endl;
						cout << "do this once per short or long rest" << endl;
					}

					else if (rog == "rorc")
					{
						cout << endl << "--ROGUISH ARCHETYPES--" << endl;
						cout << "You have 3 options: Thief ('thf'), Assassin ('assn'), or Arcane Trickster ('actr')" << endl;
						cout << "You get features at 3rd, 9th, 13th, and 17th levels" << endl;
						rorc:
						cout << "Which archetype would you like to see?" << endl;
						cin >> rorc;

						if (rorc == "thf")
						{
							cout << endl << "--THIEF ROGUE--";
							thf:
							cout << endl << "What level would you like to view features for?" << endl;
							cin >> x;
							
							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL THIEF ROGUE--" << endl;
								cout << "FAST HANDS: You can use the bonus action from your Cunning Action to make a" << endl;
								cout << "Dex (Sleight of Hand) check, use your Theives' Tools to disarm a trap or open" << endl;
								cout << "a lock, or take the Use an Object action" << endl;
								cout << "SECOND-STORY WORK: Climbing no longer costs extra movement. Additionally, when" << endl;
								cout << "you make a running jump, the distance you jump increases by an amount of feet" << endl;
								cout << "equal to your Dex modifier" << endl;
								goto thf;
							}

							else if (x == "9th")
							{
								cout << endl << "--9th LEVEL THIEF ROGUE--" << endl;
								cout << "SUPREME SNEAK: You have advantage on Dex (Stealth) checks where you move no more" << endl;
								cout << "than half your speed on that turn" << endl;
								goto thf;
							}

							else if (x == "13th")
							{
								cout << endl << "--13th LEVEL THIEF ROGUE--" << endl;
								cout << "USE MAGIC DEVICE: You can ignore all class, race, and level requirements on the use" << endl;
								cout << "of magic items" << endl;
							}

							else if (x == "17th")
							{
								cout << endl << "--17th LEVEL THIEF ROGUE--" << endl;
								cout << "THIEF'S REFLEXES: You can take two turns during the first round of any combat. You" << endl;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto rorc;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto thf;
							}
						}

						else if (rorc == "assn")
						{
							cout << endl << "--ASSASSIN ROGUE--" << endl;
							assn:
							cout << "What level would you like to view features for?" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL ASSASSIN ROGUE--" << endl;
								cout << "BONUS PROFICIENCIES: You are now proficient with the Poison and Disguise Kits" << endl;
								cout << "ASSASSINATE: You have the advantage on attack rolls against creatures that haven't" << endl;
								cout << "taken a turn in the combat yet. Additionally, any hit against a surprised creature" << endl;
								cout << "is critical" << endl;
								goto assn;
							}

							else if (x == "9th")
							{
								cout << endl << "--9th LEVEL ASSASSIN ROGUE--" << endl;
								cout << "INFILTRATION EXPERTISE: You can make fake identities for yourself. You must spend 7" << endl;
								cout << "days and 25gp to create the history, profession, etc of your fake self. You can't make" << endl;
								cout << "an ID already used by someone else. The process entails getting clothes, letters of" << endl;
								cout << "introduction, letters of reccomendation, official looking certifications for jobs, etc" << endl;
								cout << "Once you finish, if you assume that identity as a disguise, other creatures will believe" << endl;
								cout << "you to be that person until given an extremely obvious reason not to" << endl;
								goto assn;
							}

							else if (x == "13th")
							{
								cout << endl << "--13th LEVEL ASSASSIN ROGUE--" << endl;
								cout << "IMPOSTOR: You can perfectly mimic a person's speech, mannerisms, and handwriting so long" << endl;
								cout << "as you have spent 3 hours studying each. This ruse is indiscernable by casual observers." << endl;
								cout << "If a creature gets wary, you have the advantage on a Cha(Deception) check to avoid detection" << endl;
								goto assn;
							}

							else if (x == "17th")
							{
								cout << endl << "--19th LEVEL ASSASSIN ROGUE--" << endl;
								cout << "DEATH STRIKE: When you hit a surprised creature, the creature makes a Con Saving Throw" << endl;
								cout << "with DC 8 + your Dex mod. + your proficiency bonus. On a fail, double the damage of" << endl;
								cout << "attack on the creature" << endl;
								goto assn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto rorc;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto assn;
							}
						}

						else if (rorc == "actr")
						{
							cout << endl << "--ARCANE TRICKSTER ROGUE--" << endl;
							actr:
							cout << "What level would you like to view features for?" << endl;
							cout << "For the spell slot table, type 'tabl'" << endl;
							cin >> x;

							if (x == "3rd")
							{
								cout << endl << "--3rd LEVEL ARCANE TRICKSTER ROGUE--" << endl;
								cout << "SPELLCASTING: You know Cantrips from the Wizard table. The Spells you learn" << endl;
								cout << "must be from the School of Abjuration or Evocation, save for one of the first" << endl;
								cout << "three you learn and the ones learned at 8th, 14th, and 20th Level (those can" << endl;
								cout << "be any school). Each time you level up, you can replace one spell with another" << endl;
								cout << "on your Known list. The new spell must be from Abjuration or Evocation, unless" << endl;
								cout << "you are replacing one you learned at 8th, 14th, or 20th Level, in which case" << endl;
								cout << "the new spell can be from any list. Your spellcasting ability is Int." << endl;
								cout << "You start with the 'Mage Hand' cantrip. The other two are your choice" << endl;
								cout << "Spell Save DC: 8 + Prof bonus + Int modifier" << endl << "Spell Attack modifier: Prof. Bonus + Int modifier" << endl;
								cout << "MAGE HAND LEGERDEMAIN: When you cast 'Mage Hand', you can make it invisible" << endl;
								cout << "and it can perform the additional following actions:" << endl;
								cout << "-Can stow one object the hand is holding in a container worn or carried by" << endl << " another creature" << endl;
								cout << "-Can retrieve an object from a contaier worn or carried by another creature" << endl;
								cout << "-Can use thieve's tools to pick locks and disarm traps at a range" << endl;
								cout << "You can perform these tasks without being noticed if you succeed on a Dex" << endl;
								cout << "(Sleight of Hand) check against the creature's Wis(Perception) check" << endl;
								cout << "Additionally, you can use the bonus action from your Cunning Action to" << endl;
								cout << "control the hand" << endl;
								goto actr;
							}

							else if (x == "9th")
							{
								cout << endl << "--9th LEVEL ARCANE TRICKSTER ROGUE--" << endl;
								cout << "MAGICAL AMBUSH: If you are hidden from a creature when you cast a spell that" << endl;
								cout << "targets it, it has the disadvantage on any saving throws against that spell" << endl;
								cout << "this turn" << endl;
								goto actr;
							}

							else if (x == "13th")
							{
								cout << endl << "--13th LEVEL ARCANE TRICKSTER ROGUE--" << endl;
								cout << "VERSATILE TRICKSTER: You can distract creatures with your Mage Hand. As a" << endl;
								cout << "bonus action on your turn, you can designate a creature within 5ft of the hand." << endl;
								cout << "Until end of turn, you have the advantage on attack rolls on that creature" << endl;
								goto actr;
							}

							else if (x == "17th")
							{
								cout << endl << "--17th LEVEL ARCANE TRICKSTER ROGUE--" << endl;
								cout << "SPELL THIEF: Once per long rest, immediately after a creature casts a spell targetting you" << endl;
								cout << "or including you in its AOE, you can use your reaction to force the creature to make a saving" << endl;
								cout << "throw with its spellcasting ability modifier. The DC equals your spell save DC. On a failed save," << endl;
								cout << "you negate the spell's effect on you and steal the knowledge of how to cast it if it is at least" << endl;
								cout << "1st Level spell of a level that you can cast (doesn't have to be a Wizard spell). For the next" << endl;
								cout << "8 hours, you know the spell and can cast it using your spell slots. The creature can't cast the" << endl;
								cout << "spell until the 8 hours have passed." << endl;
								goto actr;
							}

							else if (x == "tabl")
							{
								cout << endl << "--ARCANE TRICKSTER ROGUE SPELL SLOT TABLE--" << endl;
								cout << "FORMAT: Level - Cantrips known - Spells Known - Spell slots (Levels of slots separated with commas)" << endl;
								cout << "3rd - 3 - 3 - 2" << endl;
								cout << "4th - 3 - 4 - 3" << endl;
								cout << "5th - 3 - 4 - 3" << endl;
								cout << "6th - 3 - 4 - 3" << endl;
								cout << "7th - 3 - 5 - 4,2" << endl;
								cout << "8th - 3 - 6 - 4,2" << endl;
								cout << "9th - 3 - 6 - 4,2" << endl;
								cout << "10th - 4 - 7 - 4,3" << endl;
								cout << "11th - 4 - 8 - 4,3" << endl;
								cout << "12th - 4 - 8 - 4,3" << endl;
								cout << "13th - 4 - 9 - 4,3,2" << endl;
								cout << "14th - 4 - 10 - 4,3,2" << endl;
								cout << "15th - 4 - 10 - 4,3,2" << endl;
								cout << "16th - 4 - 11 - 4,3,3" << endl;
								cout << "17th - 4 - 11 - 4,3,3" << endl;
								cout << "18th - 4 - 11 - 4,3,3" << endl;
								cout << "19th - 4 - 12 - 4,3,3,1" << endl;
								cout << "20th - 4 - 13 - 4,3,3,1" << endl;
								goto actr;

							}

							else if (x == "exit")
							{
								cout << endl;
								goto rorc;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto actr;
							}
						}

						else if (rorc == "exit")
						{
							cout << endl;
							goto rog;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto rorc;
						}
					}

					else if (rog == "exit")
					{
						cout << endl;
						goto clas;
					}
				}

				//sorcerer
				//
				else if (clas == "srcr")
				{
					cout << endl << "--SORCERER--" << endl << "Saving throws: Con, Cha (primary)" << endl;
					cout << "Hit Dice: 1d6 per Sorcerer Level" << endl << "Hit Points at 1st Level: 6 + your Con modifier" << endl;
					cout << "HP at higher Levels: 1d6 (or 4) + your Con modifier per Sorcerer level after 1st" << endl;
					cout << "Spell Save DC: 8 + Prof. bonus + Cha modifier" << endl << "Spell attack mod. = Prof. Bonus + Cha modifier" << endl;
					cout << endl << "--PROFICIENCIES--" << endl;
					cout << "Armor: none\n" << "Weapons: Daggers, darts, slings, quarterstaffs, light crossbows\n" << "Tools: none" << endl;
					cout << "Skills (Choose 2): Arcana, Deception, Insight, Intimidation, Persuasion, Religion" << endl;
					cout << endl << "--RECCOMENDED--" << endl << "Background: Hermit" << endl;
					cout << "Cantrips: Light, Prestidigation, Ray of Frost, Shocking Grasp" << endl;
					cout << "1st Level Spells: Shield, Magic Missile" << endl;
					cout << endl << "--EQUIPMENT--" << endl;
					cout << "-A light crossbow and 20 bolts OR any simple weapon" << endl;
					cout << "-A component pouch OR an Arcane Focus" << endl;
					cout << "-A dungeoneer's pack OR an explorer's pack" << endl;
					cout << "-2 Daggers" << endl;
					srcr:
					cout << endl << "What would you like to see for the Sorcerer?" << endl;
					cin >> srcr;

					if (srcr == "list")
					{
						cout << endl << "List of Choices for Sorcerer" << endl;
						cout << "Sorcerous Origin options - 'sorg'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl << "Spell lists - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
						goto srcr;
					}
					else if (srcr == "tabl")
					{
						cout << "Format: Lvl - Prof. Bonus - Sorcery Points - New Feature(s) - Cantrips known - Spells Known - Spell slots" << endl;
						cout << "(levels separated by commas[from 1st-9th. If a level is not used, it is not included)" << endl;
						cout << "1st - +2 - 0 - Spellcasting, Sorcerous Origin - 4 - 2 - 2" << endl;
						cout << "2nd - +2 - 2 - Font of Magic, Flexible Casting - 4 - 3 - 3" << endl;
						cout << "3rd - +2 - 3 - Metamagic - 4 - 4 - 4,2" << endl;
						cout << "4th - +2 - 4 - Ability score improve - 5 - 5 - 4,3" << endl;
						cout << "5th - +3 - 5 - N/A - 5 - 6 - 4,3,2" << endl;
						cout << "6th - +3 - 6 - Sorcerous Origin feature - 5 - 7 - 4,3,3" << endl;
						cout << "7th - +3 - 7 - N/A - 5 - 8 - 4,3,3,1" << endl;
						cout << "8th - +3 - 8 - Ability score improve - 5 - 9 - 4,3,3,2" << endl;
						cout << "9th - +4 - 9 - N/A - 5 - 10 - 4,3,3,3,1" << endl;
						cout << "10th - +4 - 10 - Metamagic - 6 - 11 - 4,3,3,3,2" << endl;
						cout << "11th - +4 - 11 - N/A - 6 - 12 - 4,3,3,3,2,1" << endl;
						cout << "12th - +4 - 12 - Ability Score improve - 6 - 12 - 4,3,3,3,2,1" << endl;
						cout << "13th - +5 - 13 - N/A - 6 - 13 - 4,3,3,3,2,1,1" << endl;
						cout << "14th - +5 - 14 - Sorcerous Origin feature - 6 - 13 - 4,3,3,3,2,1,1" << endl;
						cout << "15th - +5 - 15 - N/A - 6 - 14 - 4,3,3,3,2,1,1,1" << endl;
						cout << "16th - +5 - 16 - Ability score improve - 6 -14 - 4,3,3,3,2,1,1,1" << endl;
						cout << "17th - +6 - 17 - Metamagic - 6 - 15 - 4,3,3,3,2,1,1,1,1" << endl;
						cout << "18th - +6 - 18 - Sorcerous Origin feature - 6 - 15 - 4,3,3,3,3,1,1,1,1" << endl;
						cout << "19th - +6 - 19 - Ability score improve - 6 - 15 - 4,3,3,3,3,2,1,1,1" << endl;
						cout << "20th - +6 - 20 - Sorcerous Restoration - 6 - 15 - 4,3,3,3,3,2,2,1,1" << endl;
						goto srcr;
					}

					else if (srcr == "1st")
					{
						cout << endl << "--1st LEVEL SORCERER--" << endl;
						cout << "SPELLCASTING: You can do magic. Your spellcasting focus is an Arcane Focus" << endl;
						cout << "and your spell slots by level are in 'tabl'" << endl;
						cout << "SORCEROUS ORIGIN: Choose the source of your innate magic power. More in 'sorg'" << endl;
						goto srcr;
					}

					else if (srcr == "2nd")
					{
						cout << endl << "--2nd LEVEL SORCERER--" << endl;
						cout << "FONT OF MAGIC: You can tap into you well of magic, which is represented by Sorcery" << endl;
						cout << "Points (SP). The amount you have per level is in 'tabl'. You regain spent SP at the" << endl;
						cout << "end of a long rest, and cannot have more than your level's max at any one time." << endl;
						cout << "FLEXIBLE CASTING: You can turn spell slots into SP and vice versa. Either action is" << endl;
						cout << "done as a bonus action on your turn. The conversion table of spell slots is below." << endl;
						cout << "Conversion Table (spell slot - amt. of SP):" << endl;
						cout << "1st - 2" << endl << "2nd - 3" << endl << "3rd - 5" << endl << "4th - 6" << endl << "5th - 7" << endl;
						goto srcr;
					}

					else if (srcr == "3rd")
					{
						cout << endl << "--3rd LEVEL SORCERER--" << endl;
						cout << "METAMAGIC: You can twist your spells to do what you need. You choose two of the following" << endl;
						cout << "options of your available metamagics, but can only apply one to a spell at a time unless" << endl;
						cout << "otherwise noted. Your options are:" << endl;
						cout << "-CAREFUL SPELL: You can protect creatures from your spell's full force spend 1 SP and" << endl;
						cout << " choose a number of creatures up to your Cha modifier (min. of 1 creature). All chosen" << endl;
						cout << " creatures succeed the saving throw from your spell" << endl;
						cout << "-DISTANT SPELL: If a spell you cast has a range of 5ft or greater, you can spend 1 SP to" << endl;
						cout << " double the range. If the range is touch, you can spend 1 SP to make the range 30ft" << endl;
						cout << "-EMPOWERED SPELL: You can spend 1 SP to reroll a number of damage dice up to your Cha" << endl;
						cout << " modifier. You have to use the new rolls. You can use Empowered Spell even if you applied" << endl;
						cout << " a different Metamagic to the same spell" << endl;
						cout << "-EXTENDED SPELL: If a spell you cast has a duration of 1 minute, you can spend 1 SP to" << endl;
						cout << " double its duration, to a maximum of 24 hours" << endl;
						cout << "-HEIGHTENED SPELL: When you cast a spell that causes a creature to make a saving throw" << endl;
						cout << " to resist its effects, you can spend 3 SP to give it the disadvantage on the first of" << endl;
						cout << " those throws." << endl;
						cout << "-QUICKENED SPELL: If a spell has a casting time of 1 action, you can spend 1 SP to make" << endl;
						cout << " its casting time 1 bonus action" << endl;
						cout << "-SUBTLE SPELL: You can spend 1 SP to remove the verbal and somatic components of a spell" << endl;
						cout << "-TWINNED SPELL: When you cast a spell that targets only one creature and has a range larger" << endl;
						cout << " than self, you can spend an amount of SP equal to the spell's level to target a second" << endl;
						cout << " creature in range with the same spell" << endl;
						goto srcr;
					}

					else if (srcr == "4th")
					{
						cout << endl << "--4th LEVEL SORCERER--" << endl;
						srcrabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto srcr;
					}

					else if (srcr == "5th")
					{
						cout << endl << "--5th LEVEL SORCERER--" << endl;
						srcrnofeat:
						cout << "You do not gain any features at this Level" << endl;
						goto srcr;
					}

					else if (srcr == "6th")
					{
						cout << endl << "--6th LEVEL SORCERER--" << endl;
						srcrorg:
						cout << "You get a feature from your Sorcerous Origin. More in 'sorg'" << endl;
						goto srcr;
					}

					else if (srcr == "7th")
					{
						cout << endl << "--7th LEVEL PALADIN--" << endl;
						goto srcrnofeat;
					}

					else if (srcr == "8th")
					{
						cout << endl << "--8th LEVEL SORCERER--" << endl;
						goto srcrabil;
					}

					else if (srcr == "9th")
					{
						cout << endl << "--9th LEVEL SORCERER--" << endl;
						goto srcrnofeat;
					}

					else if (srcr == "10th")
					{
						cout << endl << "--10th LEVEL SORCERER--" << endl;
						cout << "You get another option for your Metamagic from the list in '2nd'" << endl;
						goto srcr;
					}

					else if (srcr == "11th")
					{
						cout << endl << "11th LEVEL SORCERER--" << endl;
						goto srcrnofeat;
					}

					else if (srcr == "12th")
					{
						cout << endl << "--12th LEVEL SORCERER--" << endl;
						goto srcrabil;
					}

					else if (srcr == "13th")
					{
						cout << endl << "--13th LEVEL SORCERER--" << endl;
						goto srcrnofeat;
					}

					else if (srcr == "14th")
					{
						cout << endl << "--14th LEVEL SORCERER--" << endl;
						goto srcrorg;
					}

					else if (srcr == "15th")
					{
						cout << endl << "--15th LEVEL SORCERER--" << endl;
						goto srcrnofeat;
					}
					
					else if (srcr == "16th")
					{
						cout << endl << "--16th LEVEL SORCERER--" << endl;
						goto srcrabil;
					}

					else if (srcr == "17th")
					{
						cout << endl << "--17th LEVEL SORCERER--" << endl;
						cout << "You get another option for your Metamagic from the list in '2nd'" << endl;
						goto srcr;
					}

					else if (srcr == "18th")
					{
						cout << endl << "--18th LEVEL SORCERER--" << endl;
						goto srcrorg;
					}

					else if (srcr == "19th")
					{
						cout << endl << "--19th LEVEL SORCERER--" << endl;
						goto srcrabil;
					}

					else if (srcr == "20th")
					{
						cout << endl << "--20th LEVEL SORCERER--" << endl;
						cout << "SORCEROUS RESTORATION: You regain 4 spent SP after a short rest" << endl;
					}

					else if (srcr == "sorg")
					{
						cout << endl << "--SORCEROUS ORIGIN--" << endl;
						cout << "The source of your power gives you features. You get features at 1st, 6th" << endl;
						cout << "14th, and 18th Levels. Your Origin options are Draconic Bloodline ('dbld')" << endl;
						cout << "and Wild Magic ('wldm')";
						sorg:
						cout << endl << "What Sorcerous Origin would you like to see?" << endl;
						cin >> sorg;

						if (sorg == "dbld")
						{
							cout << endl << "--DRACONIC BLOODLINE SORCERER--" << endl;
							cout << "Your magic comes from dragon blood in your veins.";
							dbld:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> sorg;

							if (sorg == "1st")
							{
								cout << endl << "--1st LEVEL DRACONIC SORCERER--" << endl;
								cout << "DRAGON ANCESTOR: You can speak, read, and write Draconic. Also, when you make a Cha" << endl;
								cout << "check interacting with dragons, the proficiency bonus is doubled if it applies. You" << endl;
								cout << "chose a damage type/color combo for your ancestry. It is used for features later. The" << endl;
								cout << "list of these combos is at the end of this section." << endl;
								cout << "DRACONIC RESILIENCE: Your HP max increases by 1, and does it again every time you gain" << endl;
								cout << "a level in this class. Additionally, parts of your skin are covered by a thin sheen of" << endl;
								cout << "dragon-like scales. When you aren't wearing armor, your AC is 13 + your Dex modifier" << endl;
								cout << "DRAGON ANCESTORS (damage type - colors)" << endl;
								cout << "Acid - Black, Copper" << endl << "Lightning - Blue, Bronze" << endl << "Fire - Brass, Gold, Red" << endl;
								cout << "Poison - Green" << endl << "Cold - Silver, white" << endl;
								goto dbld;
							}

							else if (sorg == "6th")
							{
								cout << endl << "--6th LEVEL DRACONIC SORCERER--" << endl;
								cout << "ELEMENTAL AFFINITY: When you cast a spell that deals damage of the kind of your draconic" << endl;
								cout << "ancestry, you can add your Cha modifier to that damage. At the same time, you can spend" << endl;
								cout << "1 SP to gain resistance to that type of damage for 1 hour" << endl;
								goto dbld;
							}

							else if (sorg == "14th")
							{
								cout << endl << "--14th LEVEL DRACONIC SORCERER--" << endl;
								cout << "DRAGON WINGS: As a bonus action on your turn, you can create dragon wings on your" << endl;
								cout << " back, gaining a flying speed equal to your current walking speed. They last until" << endl;
								cout << "you dismiss them as a bonus action on your turn. You can't manifest them while" << endl;
								cout << "wearing armor that doesn't accomodate them. If you are wearing clothes that don't" << endl;
								cout << "accomodate them, they may be destroyed when you manifest them" << endl;
								goto dbld;
							}

							else if (sorg == "18th")
							{
								cout << endl << "--18th LEVEL DRACONIC SORCERER--" << endl;
								cout << "DRACONIC PRESENCE: As an action, you can spend 5 SP to exude an aura of awe or fear" << endl;
								cout << "(your choice) to a distance of 60ft. For 1 minute or until you lose concentration, " << endl;
								cout << "each hostile creature that starts its turn in your aura must make a Wis save. On a" << endl;
								cout << "fail, it is either charmed (awe) or frightened (fear) of you for the duration of the" << endl;
								cout << "aura. On a success, it is immune to your aura for 24 hours" << endl;
								goto dbld;
							}

							else if (sorg == "exit")
							{
								cout << endl;
								goto sorg;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto dbld;
							}
						}

						else if (sorg == "wldm")
						{
							cout << endl << "--WILD MAGIC SORCERER--" << endl;
							cout << "Your magic comes from the wild forces of chaos that underlie creation" << endl;
							cout << "PROGRAMMER'S NOTE: Yo the wild magic table is referenced a lot here but it is absolutely" << endl;
							cout << "MASSIVE so i won't include it here. Feel free to look it up, it's pretty easy to find" << endl;
							cout << endl << "What level would you like to see?" << endl;
							wldm:
							cin >> sorg;

							if (sorg == "1st")
							{
								cout << endl << "--1st LEVEL WILD SORCERER--" << endl;
								cout << "WILD MAGIC SURGE: Immediately after you cast a sorcerer spell of 1st level or higher, the" << endl;
								cout << "DM can have you roll a d20. If you roll a 1, roll on the Wild Magic Surge table (WMST) for" << endl;
								cout << "a random effect instead of doing the initial spell's effect" << endl;
								cout << "TIDES OF CHAOS: Once per long rest (exception at end), you can give yourself the" << endl;
								cout << "advantage on an attack roll, ability check, or saving throw. Any time before you" << endl;
								cout << "regain the use of this effect, the DM can have you to roll on the WMST immediately" << endl;
								cout << "after casting a sorcerer spell of 1st Level or higher. If they do, you regain the" << endl;
								cout << "use of this feature" << endl;
								goto wldm;
							}

							else if (sorg == "6th")
							{
								cout << endl << "--6th LEVEL WILD SORCERER--" << endl;
								cout << "BEND LUCK: When another creature you can see makes an attack roll, ability check, or" << endl;
								cout << "saving throw, you can use your reaction and 2 SP to add 1d4 as a penalty or bonus to" << endl;
								cout << "the roll. You can do this after the creature rolls but before effects happen" << endl;
								goto wldm;
							}

							else if (sorg == "14th")
							{
								cout << endl << "--14th LEVEL WILD SORCERER--" << endl;
								cout << "CONTROLLED CHAOS: When you roll on the WMST you can roll twice and choose either roll" << endl;
								goto wldm;
							}

							else if (sorg == "18th")
							{
								cout << endl << "--18th LEVEL WILD SORCERER--" << endl;
								cout << "SPELL BOMBARDMENT: Once per turn, when rolling damage for a spell, if you roll the" << endl;
								cout << "highest number possible on any of those dice, choose one of those dice, roll it again" << endl;
								cout << "and add that roll to the damage (on top of all original rolls)" << endl;
								goto wldm;
							}

							else if (sorg == "exit")
							{
								cout << endl;
								goto sorg;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto wldm;
							}
						}

						else if (sorg == "exit")
						{
							cout << endl;
							goto srcr;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto sorg;
						}
					}

					else if (srcr == "spel")
					{
						cout << endl << "--SORCERER SPELL LISTS--" << endl;
						cout << "The Sorcerer has spells from 1st to 9th level, and cantrips ('0th'.";
						srcrspel:
						cout << endl << "What level would you like to see the Ranger spells for?" << endl;
						cin >> srcrspel;

						if (srcrspel == "0th")
						{
							cout << endl << "--SORCERER CANTRIPS--" << endl;
							cout << "Acid Splash" << endl << "Blade Ward" << endl << "Chill Touch" << endl;
							cout << "Dancing Lights" << endl << "Fire Bolt" << endl << "Friends" << endl;
							cout << "Light" << endl << "Mage Hand" << endl << "Mending" << endl;
							cout << "Message" << endl << "Minor Illusion" << endl << "Poison Spray" << endl;
							cout << "Prestidigation" << endl << "Ray of Frost" << endl << "Shocking Grasp" << endl;
							cout << "True Strike" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "1st")
						{
							cout << endl << "--1st LEVEL SORCERER SPELLS--" << endl;
							cout << "Burning Hands" << endl << "Charm Person" << endl << "Chromatic Orb" << endl;
							cout << "Color Spray" << endl << "Comprehend Languages" << endl << "Detect Magic" << endl;
							cout << "Disguise Self" << endl << "Disguise Self" << endl << "Expeditious Retreat" << endl;
							cout << "False Life" << endl << "Feather Fall" << endl << "Fog Cloud" << endl << "Jump" << endl;
							cout << "Mage Armor" << endl << "Magic Missile" << endl << "Ray of Sickness" << endl;
							cout << "Shield" << endl << "Silent Image" << endl << "Sleep" << endl;
							cout << "Thunderwave" << endl << "Witch Bolt" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "2nd")
						{
							cout << endl << "--2nd LEVEL SORCERER SPELLS--" << endl;
							cout << "Alter Self" << endl << "Blindness/Deafness" << endl << "Blur" << endl;
							cout << "Cloud of Daggers" << endl << "Crown of Madness" << endl << "Darkness" << endl;
							cout << "Darkvision" << endl << "Detect Thoughts" << endl << "Enhance Ability" << endl;
							cout << "Enlarge/Reduce" << endl << "Gust of Wind" << endl << "Hold Person" << endl;
							cout << "Invisibility" << endl << "Knock" << endl << "Levitate" << endl;
							cout << "Mirror Image" << endl << "Misty Step" << endl << "Phantasmal Force" << endl;
							cout << "Scorching Ray" << endl << "See Invisibility" << endl << "Shatter" << endl;
							cout << "Spider Climb" << endl << "Suggestion" << endl << "Web" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "3rd")
						{
							cout << endl << "--3rd LEVEL SORCERER SPELLS--" << endl;
							cout << "Blink" << endl << "Clairvoyance" << endl << "Counterspell" << endl;
							cout << "Daylight" << endl << "Dispel Magic" << endl << "Fear" << endl << "Fireball" << endl;
							cout << "Fly" << endl << "Gaseous Form" << endl << "Haste" << endl << "Hypnotic Pattern" << endl;
							cout << "Lightning Bolt" << endl << "Major Image" << endl << "Protection from Energy" << endl;
							cout << "Sleet Storm" << endl << "Slow" << endl << "Stinking Cloud" << endl;
							cout << "Tongues" << endl << "Water Breathing" << endl << "Water Walk" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "4th")
						{
							cout << endl << "--4th LEVEL SORCERER SPELLS--" << endl;
							cout << "Banishment" << endl << "Blight" << endl << "Confusion" << endl;
							cout << "Dimension Door" << endl << "Dominate Beast" << endl << "Greater Invisibility" << endl;
							cout << "Ice Storm" << endl << "Polymorph" << endl << "Stoneskin" << endl << "Wall of Fire" << endl;
							goto srcrspel;
						} 

						else if (srcrspel == "5th")
						{
							cout << endl << "--5th LEVEL SORCERER SPELLS--" << endl;
							cout << "Animate Objects" << endl << "Cloudkill" << endl << "Cone of Cold" << endl;
							cout << "Creation" << endl << "Dominate Person" << endl << "Hold Monster" << endl;
							cout << "Insect Plague" << endl << "Seeming" << endl << "Telekinesis" << endl;
							cout << "Teleportation Circle" << endl << "Wall of Stone" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "6th")
						{
							cout << endl << "--6th LEVEL SORCERER SPELLS--" << endl;
							cout << "Arcane Gate" << endl << "Chain Lightning" << endl << "Circle of Death" << endl;
							cout << "Disentigrate" << endl << "Eyebite" << endl << "Globe of Invulnerability" << endl;
							cout << "Mass Suggestion" << endl << "Move Earth" << endl << "Sunbeam" << endl << "True Seeing" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "7th")
						{
							cout << endl << "--7th LEVEL SORCERER SPELLS--" << endl;
							cout << "Delayed Blast Fireball" << endl << "Etherealness" << endl << "Finger of Death" << endl;
							cout << "Fire Storm" << endl << "Plane Shift" << endl << "Prismatic Spray" << endl;
							cout << "Reverse Gravity" << endl << "Teleport" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "8th")
						{
							cout << endl << "--8th LEVEL SORCERER SPELLS--" << endl;
							cout << "Dominate Monster" << endl << "Earthquake" << endl << "Incendiary Cloud" << endl;
							cout << "Power Word Stun" << endl << "Sunburst" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "9th")
						{
							cout << endl << "--9th LEVEL SORCERER SPELLS--" << endl;
							cout << "Gate" << endl << "Meteor Swarm" << endl << "Power Word Kill" << endl;
							cout << "Time Stop" << endl << "Wish" << endl;
							goto srcrspel;
						}

						else if (srcrspel == "exit")
						{
							cout << endl;
							goto srcr;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto srcrspel;
						}
					}

					else if (srcr == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You entered something wrong" << endl;
						goto srcr;
					}
				}

				//warlock
				//
				else if (clas == "wrlk")
				{
					cout << "--WARLOCK--" << endl << "Saving throws: Wis, Cha (primary)" << endl;
					cout << "Hit Dice: 1d8 per Warlock Level" << endl << "Hit Points at 1st Level: 8 + Con mod." << endl;
					cout << "HP at Higher Levels: 1d8 (or 5) + Con. Modifier per Level after 1st" << endl;
					cout << "Spell Save DC: 8 + Prof. Bonus + Cha. Modifier" << endl;
					cout << "Spell Attack Modifier: Prof. bonus + Cha. Modifier" << endl;
					cout << endl << "--PROFICIENCIES--" << endl;
					cout << "Armor: Light" << endl << "Weapons: Simple" << endl << "Tools: None" << endl;
					cout << "Skills (choose 2): Arcana, Deception, History, Intimidation, Investigation" << endl;
					cout << "Nature, Religion" << endl;
					cout << endl << "--RECCOMENDED--" << endl;
					cout << "Background: Charlatan" << endl << "Cantrips: Eldritch Blast, Chill touch" << endl;
					cout << "Spells: Ray of Sickness, Witch Bolt" << endl;
					cout << endl << "--EQUIPMENT--" << endl;
					cout << "-A light crossbow and 20 bolts OR any simple weapon" << endl;
					cout << "-A component pouch OR an arcane focus" << endl << "-Scholar pack OR dungoneer pack" << endl;
					cout << "-Leather armor, any simple weapon, AND two daggers";
					wrlk:
					cout << endl << "What would you like to see for the Warlock?" << endl;
					cin >> wrlk;

					if (wrlk == "list")
					{
						cout << endl << "--WARLOCK CHOICE LIST--" << endl;
						cout << endl << "List of Choices for Warlock" << endl;
						cout << "Otherworldly Patron options - 'ptrn'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl << "Spell lists - 'spel'" << endl;
						cout << "Eldritch Invocations - 'einv'" << endl <<"Go to back to class choice - 'exit'" << endl;
						goto wrlk;
					}

					else if (wrlk == "tabl")
					{
						cout << endl << "--WARLOCK LEVEL TABLE--" << endl;
						cout << "FORMAT: Level - Prof. Bonus - New Features - Cantrips known - Spells Known - Spell slots - Slot level" << endl;
						cout << "- Invocations known" << endl;
						cout << "1st - +2 - Otherworldly Patron, Pact Magic - 2 - 2 - 1 - 1st - N/A" << endl;
						cout << "2nd - +2 - Eldritch Invocation - 2 - 3 - 2 - 1st - 2" << endl;
						cout << "3rd - +2 - Pact Boon - 2 - 4 - 2 - 2nd - 2" << endl;
						cout << "4th - +2 - Ability score improve - 3 - 5 - 2 - 2nd - 2" << endl;
						cout << "5th - +3 - N/A - 3 - 6 - 2 - 3rd - 3" << endl;
						cout << "6th - +3 - Otherworldly patron feature - 3 - 7 - 2 - 3rd - 3" << endl;
						cout << "7th - +3 - N/A - 3 - 8 - 2 - 4th - 4" << endl;
						cout << "8th - +3 - Ability Score Improve - 3 - 9 - 2 - 4th - 4" << endl;
						cout << "9th - +4 - N/A - 3 - 10 - 2 - 5th - 5" << endl;
						cout << "10th - +4 - Otherworldly Patron Feature - 4 - 10 - 2 - 5th - 5" << endl;
						cout << "11th - +4 - Mystic Arcanum (6th Level) - 4 - 11 - 3 - 5th - 5" << endl;
						cout << "12th - +4 - Ability Score Improve - 4 - 11 - 3 - 5th - 6" << endl;
						cout << "13th - +5 - Mystic Arcanum (7th Level) - 4 - 12 - 3 - 5th - 6" << endl;
						cout << "14th - +5 - Otherworldly Patron Feature - 4 - 12 - 3 - 5th - 6" << endl;
						cout << "15th - +5 - Mystic Arcanum (8th Level) - 4 - 13 - 3 - 5th - 7" << endl;
						cout << "16th - +5 - Ability Score Improve - 4 - 13 - 3 - 5th - 7" << endl;
						cout << "17th - +6 - Mystic Arcanum (9th Level) - 4 - 14 - 4 - 5th - 7" << endl;
						cout << "18th - +6 - N/A - 4 - 14 - 4 - 5th - 8" << endl;
						cout << "19th - +6 - Ability Score Improve - 4 - 15 - 4 - 5th - 8" << endl;
						cout << "20th - +6 - Eldritch Master - 4 - 15 - 4 - 5th - 8" << endl;
						goto wrlk;
					}

					else if (wrlk == "1st")
					{
						cout << endl << "--1st LEVEL WARLOCK--" << endl;
						cout << "OTHERWORLDLY PATRON: You struck a deal with a supernatural entity, which grants" << endl;
						cout << "you abilities. Also gives you features at 1st, 6th, 10th, and 14th levels. More" << endl;
						cout << "in 'ptrn'" << endl;
						cout << "PACT MAGIC: You do voodoo. Your spell slots and levels are in 'tabl'. All spell" << endl;
						cout << "slots you have are the same level. Each time you learn a new spell, you can " << endl;
						cout << "replace spells you already know as well. You must have spell slots of that level" << endl;
						cout << "When you cast a spell, it has to be of the level spell slots you have, no matter" << endl;
						cout << "how low the spell's level is. You can use an arcane focus as a spellcasting focus" << endl;
						goto wrlk;
					}

					else if (wrlk == "2nd")
					{
						cout << endl << "--2nd LEVEL WARLOCK--" << endl;
						cout << "ELDRITCH INVOCATION: You gain 2 Eldritch Invocations of your choice. Any time you" << endl;
						cout << "gain a level, you can replace the Invocations you know with new ones. You learn" << endl;
						cout << "extra invocations at certain levels (see 'tabl')" << endl;
						goto wrlk;
					}

					else if (wrlk == "3rd")
					{
						cout << endl << "--3rd LEVEL WARLOCK--" << endl;
						cout << "PACT BOON: You get a boon from your Patron. You get one of the following features" << endl;
						cout << "of your choice:" << endl;
						cout << "-PACT OF THE CHAIN: You learn the 'Find Familiar' spell and can cast it as a ritual." << endl;
						cout << " this doesn't count against your spells known. Your familiar can take any of the" << endl;
						cout << " normal forms or the special forms of an imp, pseudodragon, quasit, or sprite." << endl;
						cout << " Also, you can forgo the Attack action on your turn and your familiar can attack" << endl;
						cout << " in your place" << endl;
						cout << "-PACT OF THE BLADE: As an action, you can create a pact weapon in your empty hand." << endl;
						cout << " You can change its appearance each time you summon it. You are proficient with it" << endl;
						cout << " while you use it. It counts as magical for the purpose of overcoming resistance or" << endl;
						cout << " immunity to nonmagical attacks/damage. The weapon dissapears if it is 5ft+ away from" << endl;
						cout << " you for more than a minute, if you dismiss it (no action), if you use this again, or" << endl;
						cout << " if you die. You can transform one magical weapon into your pact weapon as a 1 hour" << endl;
						cout << " ritual while holding it. It can be done during a short rest. Once bonded, you can" << endl;
						cout << " dismiss it into an extradimensional space. You can summon it thereafter. You can't" << endl;
						cout << " do this with an artifact or sentient weapon. The bond breaks if you die, if you do" << endl;
						cout << " the hour ritual to another weapon, of if you use a 1-hour ritual to break your bond." << endl;
						cout << " It appears at your feet if you break your bond with it while it is in the extradimen-" << endl;
						cout << " al space" << endl;
						goto wrlk;
					}

					else if (wrlk == "4th")
					{
						cout << endl << "--4th LEVEL WARLOCK--" << endl;
						wrlkabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto wrlk;
					}

					else if (wrlk == "5th")
					{
						cout << endl << "--5th LEVEL WARLOCK--" << endl;
						wrlknofeat:
						cout << "You gain no features at this levels" << endl;
						goto wrlk;
					}

					else if (wrlk == "6th")
					{
						cout << endl << "--6th LEVEL WARLOCK--" << endl;
						ptrnfeat:
						cout << "You gain a feature from your Otherworldly Patron. See more in 'ptrn'" << endl;
						goto wrlk;
					}

					else if (wrlk == "7th")
					{
						cout << endl << "--7th LEVEL WARLOCK--" << endl;
						goto wrlknofeat;
					}

					else if (wrlk == "8th")
					{
						cout << endl << "--8th LEVEL WARLOCK--" << endl;
						goto wrlkabil;
					}

					else if (wrlk == "9th")
					{
						cout << endl << "--9th LEVEL WARLOCK--" << endl;
						goto wrlknofeat;
					}

					else if (wrlk == "10th")
					{
						cout << endl << "--10th LEVEL WARLOCK--" << endl;
						goto ptrnfeat;
					}

					else if (wrlk == "11th")
					{
						cout << endl << "--11th LEVEL WARLOCK--" << endl;
						cout << "MYSTIC ARCANUM: Choose a 6th Level Warlock spell as an 'arcanum'. Once per long rest," << endl;
						cout << "you can cast your arcanum without using a spell slot. At higher levels, when you get" << endl;
						cout << "higher level arcanums, each spell can be cast this way once per long rest." << endl;
						goto wrlk;
					}

					else if (wrlk == "12th")
					{
						cout << endl << "--12th LEVEL WARLOCK--" << endl;
						goto wrlkabil;
					}

					else if (wrlk == "13th")
					{
						cout << endl << "--13th LEVEL WARLOCK--" << endl;
						cout << "You gain a 7th Level Warlock spell as an arcanum" << endl;
						goto wrlk;
					}

					else if (wrlk == "14th")
					{
						cout << endl << "--14th LEVEL WARLOCK--" << endl;
						goto ptrnfeat;
					}

					else if (wrlk == "15th")
					{
						cout << endl << "--15th LEVEL WARLOCK--" << endl;
						cout << "You gain a 8th Level Warlock spell as an arcanum" << endl;
						goto wrlk;
					}

					else if (wrlk == "16th")
					{
						cout << endl << "--16th LEVEL WARLOCK--" << endl;
						goto wrlkabil;
					}

					else if (wrlk == "17th")
					{
						cout << endl << "--17th LEVEL WARLOCK--" << endl;
						cout << "You gain a 9th Level Warlock spell as an arcanum" << endl;
						goto wrlk;
					}

					else if (wrlk == "18th")
					{
						cout << endl << "--18th LEVEL WARLOCK--" << endl;
						goto wrlknofeat;
					}

					else if (wrlk == "19th")
					{
						cout << endl << "--19th LEVEL WARLOCK--" << endl;
						goto wrlkabil;
					}

					else if (wrlk == "20th")
					{
						cout << endl << "--20th LEVEL WARLOCK" << endl;
						cout << "ELDRITCH MASTER: Once per long rest, you can spend 1 minute entreating your patron. If you do," << endl;
						cout << "you regain all used spell slots" << endl;
						goto wrlk;
					}

					else if (wrlk == "ptrn")
					{
						cout << endl << "--OTHERWORLDLY PATRONS--" << endl;
						cout << "Your Patron is the source of your Warlock powers. You get features at 1st, 6th, 10th, and 14th" << endl;
						cout << "levels, as well as extra spells that add to your spell list, but not necessarily your known spells";
						ptrn:
						cout << endl << "Which Otherworldly Patron would you like to see?" << endl;
						cin >> ptrn;

						if (ptrn == "list")
						{
							cout << endl << "--OTHERWORLDLY PATRON OPTIONS--" << endl;
							cout << "-Archfey ('afey')" << endl << "-The Fiend ('fnd')" << endl << "-Great Old One ('groo')" << endl;
							cout << "In the specific zones, 'spel' will give you the extended spell lists" << endl;
							goto ptrn;
						}

						else if (ptrn == "afey")
						{
							cout << endl << "--ARCHFEY--" << endl;
							cout << "Your patron is fey nobility, who has been around since before the mortal races were born";
							afey:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> x;

							if (x == "1st")
							{
								cout << endl << "--1st LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "FEY PRESENCE: Once per short or long rest, as an action, you make each creature in a 10ft" << endl;
								cout << "cube originating from you make a Wis saving throw against your Warlock spell save DC. All" << endl;
								cout << "creatures that fail are either charmed or frightened by you (your choice)" << endl;
								goto afey;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "MISTY ESCAPE: Once per short or long rest, when you take damage, you can use your reaction" << endl;
								cout << "to turn invisible and teleport up to 60ft away to an empty space you can see. You stay" << endl;
								cout << "invisible until the start of your next turn or until you attack or cast a spell" << endl;
								goto afey;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "BEGUILING DEFENSES: You are immune to being charmed. When a creature tries to charm you," << endl;
								cout << "you can use your reaction to attempt to charm them back. They have to succeed on a Wis" << endl;
								cout << "save against your Warlock Spell DC or be charmed by you for 1 minute or until they take" << endl;
								cout << "any damage" << endl;
								goto afey;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "DARK DELERIUM: Once per short or long rest,As an action, choose a creature you can see" << endl;
								cout << "within 60ft of you. It makes a Wis save against your Warlock spell save DC. On a fail," << endl;
								cout << "it is charmed or frightened by you (your choice) for 1 minute or until you lose concentration." << endl;
								cout << "This effect ends if the creature takes damage. While the effect is going, the creature" << endl;
								cout << "thinks it is lost in a misty realm, which appearance you choose. The creature can see" << endl;
								cout << "and hear only you, itself, and the illusion" << endl;
								goto afey;
							}

							else if (x == "spel")
							{
								cout << endl << "--ARCHFEY WARLOCK EXTENDED SPELL LISTS--" << endl;
								cout << "You can treat the following spells as if they were on the Warlock spell lists, and can" << endl;
								cout << "learn them in a normal way. You do NOT automatically know them" << endl;
								cout << "1st- Faerie Fire, Sleep" << endl << "2nd - Calm emotions, Phantasmal force" << endl << "Blink, Plant growth" << endl;
								cout << "4th- Dominate beast, Greater invisibilty" << endl << "5th- Dominate person, Seeming" << endl;
								goto afey;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto ptrn;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto afey;
							}
						}

						else if (ptrn == "fnd")
						{
							cout << endl << "--FIEND--" << endl;
							cout << "Your Patron is an evil being of the lower realms. They desire the destruction of all things";
							fnd:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> x;

							if (x == "1st")
							{
								cout << endl << "--1st LEVEL FIEND WARLOCK--" << endl;
								cout << "DARK ONE'S BLESSING: When you reduce an enemy to 0 HP, you gain temporary HP equal to" << endl;
								cout << "your Cha modifier + your Warlock level (minimum 1)" << endl;
								goto fnd;
							}

							else if (x == "6th")
							{
								cout << endl << "-6th LEVEL FIEND WARLOCK--" << endl;
								cout << "DARK ONE'S OWN LUCK: Once per short or long rest, you can add a d10 to an ability check" << endl;
								cout << "or saving throw that you make. You can do this after the roll, but before effects are" << endl;
								cout << "carried out" << endl;
								goto fnd;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL FIEND WARLOCK--" << endl;
								cout << "FIENDISH RESILIENCE: You can choose one damage type after a short or long rest. You gain" << endl;
								cout << "resistance to that damage type until you choose a new one with this feature. This resistance" << endl;
								cout << "does not apply to magical or silvered weapons" << endl;
								goto fnd;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL FIEND WARLOCK--" << endl;
								cout << "HURL THROUGH HELL: Once per long rest, when you hit a creature with an attack, you can use" << endl;
								cout << "this feature to instantly transport them through the lower planes. The creature dissapears" << endl;
								cout << "and hurtles through the nightmarish landscape. At the end of your next turn, the creature" << endl;
								cout << "returns to the space it previously occupied, or the nearest unoccupied space. If the creature" << endl;
								cout << "is not a fiend, it takes 10d10 psychic damage from PTSD from the experience" << endl;
								goto fnd;
							}

							else if (x == "spel")
							{
								cout << endl << "--FIEND WARLOCK EXTENDED SPELL LIST--" << endl;
								cout << "You can treat the following spells as if they were on the Warlock spell lists, and can" << endl;
								cout << "learn them in a normal way. You do NOT automatically know them" << endl;
								cout << "1st- Burning hands, Command" << endl << "2nd- Blindness/deafness, scorching ray" << endl;
								cout << "3rd- Fireball, stinking cloud" << endl << "4th- Fire shield, Wall of fire" << endl << "5th- Flame Strike, Hallow" << endl;
								goto fnd;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto ptrn;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto fnd;
							}
						}

						else if (ptrn == "groo")
						{
							cout << endl << "--GREAT OLD ONE--" << endl;
							cout << "Your Patron is a being outside of the fabric of reality. They may or may not be aware of your" << endl;
							cout << "existence, but your knowledge of its secrets gives you power";
							groo:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> x;

							if (x == "1st")
							{
								cout << endl << "--1st LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "AWAKENED MIND: You can communicate telepathically to any creature you can see within 30ft" << endl;
								cout << "of you. You do not need to share a language with them, but they need to be able to understand" << endl;
								cout << "at least one language" << endl;
								goto groo;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "ENTROPIC WARD: Once per short or long rest, when a creature makes an attack on you, you can use" << endl;
								cout << "your reaction to impose the disadvantage to the roll. If it misses, you have advantage on the" << endl;
								cout << "next attack roll on that creature that you make before the end of your next turn" << endl;
								goto groo;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "THOUGHT SHIELD: Your thoughts can't be read by telepathy or any other means unless you allow it." << endl;
								cout << "Also, you have resistance to psychic damage, and whenever a creature deals psychic damage to you," << endl;
								cout << "it also takes that much damage" << endl;
								goto groo;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "CREATE THRALL: You can use your action to touch an incapacitated humanoid. That creature is" << endl;
								cout << "charmed by you until a remove curse spell is used on it, the charmed condition is removed, or" << endl;
								cout << "you use this feature again. You can communicate telepathically to with the charmed creature" << endl;
								cout << "so long as you are on the same plane of existence" << endl;
								goto groo;
							}

							else if (x == "spel")
							{
								cout << endl << "--GREAT OLD ONE WARLOCK EXTENDED SPELL LIST--" << endl;
								cout << "You can treat the following spells as if they were on the Warlock spell lists, and can" << endl;
								cout << "learn them in a normal way. You do NOT automatically know them" << endl;
								cout << "1st- Dissonant whispers, Tasha's hideous laughter" << endl << "2nd- Detect thoughts, Phantasmal force" << endl;
								cout << "3rd- Clairvoyance, sending" << endl << "Dominate beast, Evard's black tentacles" << endl;
								cout << "5th- Dominate person, Telekinesis" << endl;
								goto groo;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto ptrn;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto groo;
							}
						}

						else if (ptrn == "exit")
						{
							cout << endl;
							goto wrlk;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto ptrn;
						}
					}

					else if (wrlk == "einv")
					{
						cout << endl << "--ELDRITCH INVOCATIONS--" << endl;
						cout << "These are kinda like spells, but not. They are separated by prerequisites, which are in parenthesis" << endl;
						cout << "behind the invocation if they exist" << endl;
						cout << "OPTIONS: No prereq: 'nopr', Level prereq: 'lvl', Pact prereq: 'pact', Spell prereq: 'spel'";
						einv:
						cout << endl << "Which invocations would you like to see?" << endl;
						cin >> prereq;

						if (prereq == "nopr")
						{
							cout << endl << "--NO PREREQUISITE ELDRITCH INVOCATIONS--" << endl;
							cout << "-ARMOR OF THE SHADOWS: You can cast Mage Armor on yourself at will w/o expending a spell slot" << endl;
							cout << "-BEAST SPEECH: You can cast Speak with Animals at will w/o expending a spell slot" << endl;
							cout << "-BEGUILING INFLUENCE: You gain proficiency in Deception and Persuasion" << endl;
							cout << "-DEVIL'S SIGHT: You can see normally in darkness, both magical and nonmagical, to a distance" << endl;
							cout << " of 120 feet" << endl;
							cout << "-ELDRITCH SIGHT: You can cast Detect Magic at will w/o expending a spell slot" << endl;
							cout << "-EYES OF THE RUNE KEEPER: You can read all writing" << endl;
							cout << "-FIENDISH VIGOR: You can cast False Life as a 1st Level spell on yourself w/o using a spell slot" << endl;
							cout << " or material components" << endl;
							cout << "-GAZE OF TWO MINDS: As an action, you can touch a willing humanoid and percieve through its senses" << endl;
							cout << " until the end of your next turn. As long as you stay on the same plane of existence, you can use" << endl;
							cout << " your action on subsequent turns to maintain the connection. You get any special senses they have" << endl;
							cout << " for the duration, and are blinded and deafened to your surroundings." << endl;
							cout << "-MASK OF MANY FACES: You can cast Disguise Self at will w/o expending a spell slot" << endl;
							cout << "-MISTY VISIONS: You can cast Silent Image at will w/o expending a spell slot or material components" << endl;
							cout << "-THIEF OF FIVE FATES: Once per long rest, you can cast bane using a warlock spell slot" << endl;
							goto einv;
						}

						else if (prereq == "lvl")
						{
							cout << endl << "--LEVEL PREREQUISITE ELDRITCH INVOCATIONS--" << endl;
							cout << "-ASCENDANT STEP(9th Level): You can cast Levitate on yourself w/o using a spell slot or material" << endl;
							cout << " components" << endl;
							cout << "-BEWITCHING WHISPERS(7th): Once per long rest, you can cast Compulsion using a Warlock spell slot" << endl;
							cout << "-CHAINS OF CARCERI(15th, Pact of Chain): Once per long rest, you can cast Hold Monster at will," << endl;
							cout << " targetting a fiend, celestial, or elemental, w/o using a spell slot or material components" << endl;
							cout << "-DREADFUL WORD(7th): Once per long rest, you can cast Confusion with a Warlock spell slot" << endl;
							cout << "-LIFEDRINKER(12th, Pact of the Blade): When you hit a creature with your pact weapon" << endl;
							cout << " you deal extra necrotic damage equal to your Cha modifier (minimum 1)" << endl;
							cout << "-MASTER OF MYRIAD FORMS: You can cast Alter Self at will w/o using a spell slot" << endl;
							cout << "-MINIONS OF CHAOS(9th): Once per long rest, you can cast Conjure Elemental with a Warlock spell" << endl;
							cout << " slot" << endl;
							cout << "-MIRE THE MIND(5th): Once per long rest, you can cast Slow with a Warlock spell slot" << endl;
							cout << "-ONE WITH SHADOWS(5th): When in an area of dim light or darkness, you can use your action to turn" << endl;
							cout << " turn invisible until you move or take an action or reaction" << endl;
							cout << "-OTHERWORLDLY LEAP (9th): You can cast Jump on yourself at will w/o using a spell slot" << endl;
							cout << "-SCULPTOR OF FLESH (7th): Once per long rest, you can cast Polymorph using a Warlock spell slot" << endl;
							cout << "-SIGN OF ILL OMEN (5th): Once per long rest, you can cast Bestow Curse with a Warlock spell slot" << endl;
							cout << "-THIRSTING BLADE (5th, Pact of the Blade): You can attack with your pact weapon twice with the" << endl;
							cout << " Attack action on your turn" << endl;
							cout << "-VISIONS OF DISTANT REALMS (15th): You can cast Arcane Eye at will w/o using a spell slot" << endl;
							cout << "-WHISPERS OF THE GRAVE (9th): You can cast Speak with Dead at will w/o using a spell slot" << endl;
							cout << "-WITCH SIGHT (15th): You can see the true form of any shapechanger or creature concealed by" << endl;
							cout << " illusion or transmutation magic" << endl;
							goto einv;
						}

						else if (prereq == "pact")
						{
							cout << endl << "--PACT PREREQUISITE ELDRITCH INVOCATIONS--" << endl;
							cout << "-BOOK OF ANCIENT SECRETS (Pact of the Tome): You can now put rituals in your Book of Shadows." << endl;
							cout << " Choose 2 1st Level spells with the ritual tag from any class' spell list. The spells appear in" << endl;
							cout << " the book and don't count against your number of spells known. With your Book of Shadows in hand" << endl;
							cout << " you can cast the spells as rituals. You can't cast them another way unless you have learned the" << endl;
							cout << " spell in that way. You can also cast a Warlock spell you know as a ritual if it has the ritual" << endl;
							cout << " tag. If you find other ritual spells, you can add them to the book if their level is less than" << endl;
							cout << " or equal to your Warlock level(rounded up) and if you have time to transcribe it. It takes 2" << endl;
							cout << " hours and 50gp (for the rare inks to transcribe it) per spell level to transcribe" << endl;
							cout << "-CHAINS OF CARCERI(15th, Pact of Chain): Once per long rest, you can cast Hold Monster at will," << endl;
							cout << " targetting a fiend, celestial, or elemental, w/o using a spell slot or material components" << endl;
							cout << "-LIFEDRINKER(12th, Pact of the Blade): When you hit a creature with your pact weapon" << endl;
							cout << " you deal extra necrotic damage equal to your Cha modifier (minimum 1)" << endl;
							cout << "-THIRSTING BLADE (5th, Pact of the Blade): You can attack with your pact weapon twice with the" << endl;
							cout << " Attack action on your turn" << endl;
							cout << "-VOICE OF THE CHAIN MASTER (Pact of the Chain): You can communicate telepathically with your" << endl;
							cout << " familiar and percieve through its senses if you are on the same plane of existence. Also, while" << endl;
							cout << " percieving through its senses you can speak through it in your voice, even if it is normally" << endl;
							cout << " incapable of speech" << endl;
							goto einv;
						}

						else if (prereq == "spel")
						{
							cout << endl << "--ELDRITCH BLAST (cantrip) PREREQUISITE--" << endl;
							cout << "The only spell prereq is having the Eldritch Blast cantrip" << endl;
							cout << "-AGONIZING BLAST: You can add your Cha modifier to damage dealt by your Eldritch Blast" << endl;
							cout << "-ELDRITCH SPEAR: Your Eldritch Blast has a range of 300ft" << endl;
							cout << "-REPELLING BLAST: When you hit a creature with your Eldritch Blast, you can knock them back up" << endl;
							cout << " to 10ft in a straight line" << endl;
							goto einv;
						}

						else if (prereq == "exit")
						{
							cout << endl;
							goto wrlk;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto einv;
						}
					}

					else if (wrlk == "spel")
					{
						cout << endl << "--WARLOCK SPELL LISTS--" << endl;
						cout << "The Warlock has spells from 1st to 5th level, and cantrips ('0th').";
						wrlkspel:
						cout << endl << "What level would you like to see the Warlock spells for?" << endl;
						cin >> wrlkspel;

						if (wrlkspel == "0th")
						{
							cout << endl << "--WARLOCK CANTRIPS--" << endl;
							cout << "Blade Ward" << endl << "Chill Touch" << endl << "Eldritch Blast" << endl;
							cout << "Friends" << endl << "Mage Hand" << endl << "Minor Illusion" << endl;
							cout << "Poison Spray" << endl << "Prestidigation" << endl << "True Strike" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "1st")
						{
							cout << endl << "--1st LEVEL WARLOCK SPELLS--" << endl;
							cout << "Armor of Agathys" << endl << "Arms of Hadar" << endl << "Charm Person" << endl;
							cout << "Comprehend Languages" << endl << "Expeditious Retreat" << endl << "Hellish Rebuke" << endl;
							cout << "Hex" << endl << "Illusory Scripts" << endl << "Protection from Evil and Good" << endl;
							cout << "Unseen Servant" << endl << "Witch Bolt" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "2nd")
						{
							cout << endl << "--2nd LEVEL WARLOCK SPELLS--" << endl;
							cout << "Cloud of Daggers" << endl << "Crown of Madness" << endl << "Darkness" << endl;
							cout << "Enthrall" << endl << "Hold Person" << endl << "Invisibility" << endl;
							cout << "Mirror Image" << endl << "Misty Step" << endl << "Ray of Enfeeblement" << endl;
							cout << "Shatter" << endl << "Spider Climb" << endl << "Suggestion" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "3rd")
						{
							cout << endl << "--3rd LEVEL WARLOCK SPELLS--" << endl;
							cout << "Counterspell" << endl << "Dispel Magic" << endl << "Fear" << endl << "Fly" << endl;
							cout << "Gaseous Form" << endl << "Hunger of Hadar" << endl << "Hypnotic Pattern" << endl;
							cout << "Magic Circle" << endl << "Major Image" << endl << "Remove Curse" << endl;
							cout << "Tongues" << endl << "Vampiric Touch" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "4th")
						{
							cout << endl << "--4th LEVEL WARLOCK SPELLS--" << endl;
							cout << "Banishment" << endl << "Blight" << endl << "Dimension Door" << endl << "Hallucinatory Terrain" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "5th")
						{
							cout << endl << "--5th LEVEL WARLOCK SPELLS--" << endl;
							cout << "Contact Other Plane" << endl << "Dream" << endl << "Hold Monster" << endl << "Scrying" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "6th")
						{
							cout << endl << "--6th LEVEL WARLOCK SPELLS--" << endl;
							cout << "Arcane Gate" << endl << "Circle of Death" << endl << "Conjure Fey" << endl;
							cout << "Create Undead" << endl << "Eyebite" << endl << "Flesh to Stone" << endl;
							cout << "Mass Suggestion" << endl << "True Seeing" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "7th")
						{
							cout << endl << "--7th LEVEL WARLOCK SPELLS--" << endl;
							cout << "Etherealness" << endl << "Finger of Death" << endl << "Forcecage" << endl << "Plane Shift" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "8th")
						{
							cout << endl << "--8th LEVEL WARLOCK SPELLS--" << endl;
							cout << "Demiplane" << endl << "Dominate Monster" << endl << "Feebleness" << endl << "Glibness" << endl;
							cout << "Power Word Stun" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "9th")
						{
							cout << endl << "--9th LEVEL WARLOCK SPELLS--" << endl;
							cout << "Astral Projection" << endl << "Foresight" << endl << "Imprisonment" << endl;
							cout << "Power Word Kill" << endl << "True Polymorph" << endl;
							goto wrlkspel;
						}

						else if (wrlkspel == "exit")
						{
							cout << endl;
							goto wrlk;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto wrlkspel;
						}
					}

					else if (wrlk == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto wrlk;
					}
				}

				//wizard
				//
				else if (clas == "wzrd")
				{
					cout << "--WIZARD--" << endl << "Saving throws: Wis, Int (primary)" << endl;
					cout << "Hit Dice: 1d6 per Wizard Level" << endl << "Hit points at 1st Level: 6 + Con modifier" << endl;
					cout << "Hit points at higher levels: 1d6 (or 4) + Con modifier per level after 1st" << endl;
					cout << "Spell Save DC: 8 + Prof bonus + Int mod" << endl << "Spell attack mod.: Prof. bonus + Int. mod" << endl;
					cout << endl << "--PROFICIENCIES--" << endl;
					cout << "Armor: None" << endl << "Weapons: Dagger, dart, sling, quarterstaff, light crossbow" << endl;
					cout << "Tools: None" << endl;
					cout << "Skills (choose 2): Arcana, history, insight, investigation, medicine, religion" << endl;
					cout << endl << "--RECCOMENDED--" << endl;
					cout << "Background: Sage" << endl << "If doing School of Enchantment, Cha 3rd highest" << endl;
					cout << "Starting Cantrips: Mage hand, light, ray of frost" << endl;
					cout << "Starting spells: Burning Hands, charm person, feather fall, mage armor, magic missile, sleep" << endl;
					cout << endl << "--EQUIPMENT--" << endl;
					cout << "-A quarterstaff OR dagger" << endl << "-Component pouch OR arcane focus" << endl;
					cout << "-Scholar's pack OR explorer's pack" << endl << "-Spellbook" << endl;
					wzrd:
					cout << endl << "What would you like to see for the Wizard?" << endl;
					cin >> wzrd;

					if (wzrd == "list")
					{
						cout << endl << "List of Choices for Wizard" << endl;
						cout << "Arcane Tradition options - 'arct'" << endl << "Level Ability specifics- <level number> (i.e. 1st, 10th, 3rd)" << endl;
						cout << "Level ability table - 'tabl'" << endl << "Spell lists - 'spel'" << endl;
						cout << "Go to back to class choice - 'exit'" << endl;
					}

					else if (wzrd == "tabl")
					{
						cout << endl << "--WIZARD LEVEL TABLE--" << endl;
						cout << "Format: Level - Prof. Bonus - new features - cantrips known - Spell sllots (levels separated by commas)" << endl;
						cout << "1st - +2 - Spellcasting, Arcane Recovery - 3 - 2" << endl;
						cout << "2nd - +2 - Arcane Tradition - 3 - 3" << endl;
						cout << "3rd - +2 - N/A - 3 - 4,2" << endl;
						cout << "4th - +2 - Ability Score Improvement - 4 - 4,3" << endl;
						cout << "5th - +3 - N/A - 4 - 4,3,2" << endl;
						cout << "6th - +3 - Arcane Tradition feature - 4 - 4,3,3" << endl;
						cout << "7th - +3 - N/A - 4 - 4,3,3,1" << endl;
						cout << "8th - +3 - Ability Score improvement - 4 - 4,3,3,2" << endl;
						cout << "9th - +4 - N/A - 4 - 4,3,3,3,1" << endl;
						cout << "10th - +4 - Arcane Tradition Feature - 5 - 4,3,3,3,2" << endl;
						cout << "11th - +4 - N/A - 5 - 4,3,3,3,2,1" << endl;
						cout << "12th - +4 - Ability Score Improvement - 5 - 4,3,3,3,2,1" << endl;
						cout << "13th - +5 - N/A - 5 - 4,3,3,3,2,1,1" << endl;
						cout << "14th - +5 - Arcane Tradition feature - 5 - 4,3,3,3,2,1,1" << endl;
						cout << "15th - +5 - N/A - 5 - 4,3,3,3,2,1,1,1" << endl;
						cout << "16th - +5 - Ability Score Improvement - 5 - 4,3,3,3,2,1,1,1" << endl;
						cout << "17th - +6 - N/A - 5 - 4,3,3,3,2,1,1,1,1" << endl;
						cout << "18th - +6 - Spell Mastery - 5 - 4,3,3,3,2,1,1,1,1" << endl;
						cout << "19th - +6 - Ability Score Improve - 5 - 4,3,3,3,2,2,1,1,1" << endl;
						cout << "20th - +6 - Signature Spells - 5 - 4,3,3,3,2,2,2,1,1" << endl;
						goto wzrd;
					}

					else if (wzrd == "1st")
					{
						cout << endl << "--1st LEVEL WIZARD--" << endl;
						cout << "SPELLCASTING: You do magic. At 1st level, you know 6 1st level spells and have them in your spelbook" << endl;
						cout << "you put 2 new ones in that you have spell slots for at every level. Every long rest, you can prepare" << endl;
						cout << "an amount of spells equal to your Int modifier + your Wizard level from your spellbook. Preparing a" << endl;
						cout << "spell requires 1 minute per level of the spell. If you find a spell you like and want to copy it to" << endl;
						cout << "your spellbook, it requires 2 hours and 50gp per level of the spell. To write a spell from your" << endl;
						cout << "spellbook into another book (so as to make a copy) it only takes 1 hour and 10gp per level of the" << endl;
						cout << "spell. If you lose your spellbook, you can only write down your prepared spells into a new book." << endl;
						cout << "make sure to have extra copies just in case!" << endl;
						cout << "ARCANE RECOVERY: Once per day, after a short rest, you can regain spell slots with a combined level" << endl;
						cout << "of half your Wizard level, rounded up. None of the regained slots can be 6th level or higher" << endl;
						goto wzrd;
					}

					else if (wzrd == "2nd")
					{
						cout << endl << "--2nd LEVEL WIZARD--" << endl;
						cout << "ARCANE TRADITION: You choose a school of magic to go into, which gives you features. More in 'arct'" << endl;
						goto wzrd;
					}

					else if (wzrd == "3rd")
					{
						cout << endl << "--3rd LEVEL WIZARD--" << endl;
						wzrdnofeat:
						cout << "You get no features at this level" << endl;
						goto wzrd;
					}

					else if (wzrd == "4th")
					{
						cout << endl << "--4th LEVEL WIZARD--" << endl;
						wzrdabil:
						cout << "ABILITY SCORE INCREASE- One of your Ability Scores goes up by 2, or two of your ability" << endl;
						cout << "scores go up by 2. No ability score can surpass 20" << endl;
						goto wzrd;
					}

					else if (wzrd == "5th")
					{
						cout << endl << "--5th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "6th")
					{
						cout << endl << "--6th LEVEL WIZARD--" << endl;
						wzrdarct:
						cout << "You get a feature in your Arcane Tradition. More in 'arct'" << endl;
						goto wzrd;
					}

					else if (wzrd == "7th")
					{
						cout << endl << "--7th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "8th")
					{
						cout << endl << "--8th LEVEL WIZARD--" << endl;
						goto wzrdabil;
					}

					else if (wzrd == "9th")
					{
						cout << endl << "--9th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "10th")
					{
						cout << endl << "--10th LEVEL WIZARD--" << endl;
						goto wzrdarct;
					}

					else if (wzrd == "11th")
					{
						cout << endl << "--11th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "12th")
					{
						cout << endl << "--12th LEVEL WIZARD--" << endl;
						goto wzrdabil;
					}

					else if (wzrd == "13th")
					{
						cout << endl << "--13th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "14th")
					{
						cout << endl << "--14th LEVEL WIZARD--" << endl;
						goto wzrdarct;
					}

					else if (wzrd == "15th")
					{
						cout << endl << "--15th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "16th")
					{
						cout << endl << "--16th LEVEL WIZARD--" << endl;
						goto wzrdabil;
					}

					else if (wzrd == "17th")
					{
						cout << endl << "--17th LEVEL WIZARD--" << endl;
						goto wzrdnofeat;
					}

					else if (wzrd == "18th")
					{
						cout << endl << "--18th LEVEL WIZARD--" << endl;
						cout << "SPELL MASTERY: Choose a 1st level spell and a 2nd level spell. You can cast them at will w/o" << endl;
						cout << "using a spell slot at their lowest level. If you want a higher level, you must expend a spell" << endl;
						cout << "slot as usual. If you spend 8 hours in study, you can switch one spell with another of the same" << endl;
						cout << "level" << endl;
						goto wzrd;
					}

					else if (wzrd == "19th")
					{
						cout << endl << "--8th LEVEL WIZARD--" << endl;
						goto wzrdabil;
					}

					else if (wzrd == "20th")
					{
						cout << endl << "--20th LEVEL WIZARD--" << endl;
						cout << "SIGNATURE SPELL: Choose 2 3rd level spells. You always have them prepared, and they don't count" << endl;
						cout << "your number of prepared spells. You can cast each of them at 3rd level w/o a spell slot once per" << endl;
						cout << "short or long rest. If you want to cast them at a higher level, you always have to use a spell slot" << endl;
						goto wzrd;
					}

					else if (wzrd == "arct")
					{
						cout << endl << "--ARCANE TRADITIONS--" << endl;
						cout << "You get features at 2nd, 6th, 10th, and 14th levels. Your options are as follows:" << endl;
						cout << "Abjuration - abjn" << endl << "Conjuration - cjrn" << endl << "Divination - dvntn" << endl;
						cout << "Enchantment - ench" << endl << "Evocation - evcn" << endl << "Illusion - ilsn" << endl;
						cout << "Necromancy - ncrm" << endl << "Transmutation - tran" << endl;
						arct:
						cout << endl << "Which Arcane Tradition would you like to see?" << endl;
						cin >> arct;

						if (arct == "abjn")
						{
							cout << endl << "--SCHOOL OF ABJURATION--" << endl;
							cout << "The magic of blocking, negation, and protection.";
							abjn:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL ABJURATION WIZARD--" << endl;
								cout << "ABJURATION SAVANT: Copying an Abjuration spell to a spellbook takes you half the time and gp" << endl;
								cout << "ARCANE WARD: Once per long rest, when you cast an Abjuration spell of 1st level or higher, you" << endl;
								cout << "can use a piece of that magic to create a magical ward on yourself that lasts until you have a" << endl;
								cout << "long rest. The ward has HP equal to twice your Wizard level + your Int mod. The ward takes any" << endl;
								cout << "damage you take. If the damage reduces it to 0 HP, you take the remainder. When it is at 0 HP," << endl;
								cout << "it can't take dmg for you but it is still there. When you cast an abjuration spell of 1st level" << endl;
								cout << "or higher, the ward gains HP equal to twice the spell's level" << endl;
								goto abjn;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL ABJURATION WIZARD--" << endl;
								cout << "PROJECTED WARD: when a creature you can see within 30ft of you takes damage, you can use your reaction" << endl;
								cout << "to make your Arcane Ward (see '2nd' in abjn) absorb the damage. If this reduces your ward to 0 HP, the" << endl;
								cout << "creature takes the remainder" << endl;
								goto abjn;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL ABJURATION WIZARD--" << endl;
								cout << "IMPROVED ABJURATION: When you cast an Abjuration spell that forces you to make an ability check as part" << endl;
								cout << "of casting the spell, you can add your prof. bonus to the check" << endl;
								goto abjn;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL ABJURATOIN WIZARD--" << endl;
								cout << "SPELL RESISTANCE: You have advantage on saving throws against spells and resistance to damage from spells" << endl;
								goto abjn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You entered something wrong" << endl;
								goto abjn;
							}
						}

						else if (arct == "cjrn")
						{
							cout << endl << "--CONJURATION WIZARD--" << endl;
							cout << "The magic of creating objects and creatures out of nothing";
							cjrn:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL CONJURATION WIZARD--" << endl;
								cout << "CONJURATION SAVANT: Copying a Conjuration spell to a spellbook takes you half the time and gp" << endl;
								cout << "MINOR CONJURATION: You can use your action to create an inanimate object in your hand or in" << endl;
								cout << "an unnocupied space you can see within 10ft of you. The object can't be any bigger than 3ft" << endl;
								cout << "on a side or 10 lbs. The form can be any nonmagical object that you have seen. It is visibly" << endl;
								cout << "magic, and gives off 5ft of dim light. It disappears after an hour, if you use this feature" << endl;
								cout << "again, or if it takes damage" << endl;
								goto cjrn;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL CONJURATION WIZARD--" << endl;
								cout << "BENIGN TRANSPOSITION: Once per long rest, you can use your action to teleport into an unnocupied" << endl;
								cout << "space you can see within 30ft of you. Alternatively, you can choose a willing Small or Medium" << endl;
								cout << "creature in this range, and you swap places with them via teleportation. You regain the ability" << endl;
								cout << "to use this feature after casting a Conjuration spell of 1st level or higher" << endl;
								goto cjrn;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL CONJURATION WIZARD--" << endl;
								cout << "FOCUSED CONJURATION: While concentrating on a Conjuration spell, your concentration can't be broken" << endl;
								cout << "by you taking damage" << endl;
								goto cjrn;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL CONJURATION WIZARD--" << endl;
								cout << "DURABLE SUMMONS: Any creature you summon or create with a Conjuration spell has 30 temporary HP" << endl;
								goto cjrn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto cjrn;
							}
						}

						else if (arct == "dvntn")
						{
							cout << endl << "--DIVINATION WIZARD--" << endl;
							cout << "The magic of seeing the past, present, and future";
							dvntn:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL DIVINATION WIZARD--" << endl;
								cout << "DIVINATION SAVANT: Copying an Divination spell to a spellbook takes you half the time and gp" << endl;
								cout << "PORTENT: After a long rest, roll two d20's and record the rolls. You can replace the roll for" << endl;
								cout << "any check, save, or attack roll made by you or a creature you can see. You must choose this" << endl;
								cout << "before the roll, and only once per turn. Each roll can only be used once. After another long" << endl;
								cout << "rest, you lose left over rolls" << endl;
								goto dvntn;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL DIVINATION WIZARD--" << endl;
								cout << "EXPERT DIVINATION: When you cast a Divination of 2nd level or higher, you regain a spell slot" << endl;
								cout << "The slot must be of a lower level than the spell cast, and can't be above 5th level" << endl;
								goto dvntn;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL DIVINATION WIZARD--" << endl;
								cout << "THIRD EYE: Once per rest, you can use your action to increase your perception and gain a benefit" << endl;
								cout << "It lasts until you are incapacitated or you take a short or long rest. The benefits are as follows" << endl;
								cout << "-60 ft Darkvision" << endl << "-Can see into the Ethereal Plane within 60ft of you" << endl;
								cout << "-Can read any language" << endl << "Can see invisible creatures and objects within 10ft of you in your line of sight" << endl;
								goto dvntn;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL DIVINATION WIZARD--" << endl;
								cout << "GREATER PORTENT: You roll 3 dice with your Portent ('2nd') instead of 2" << endl;
								goto dvntn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto dvntn;
							}
						}

						else if (arct == "ench")
						{
							cout << endl << "--ENCHANTMENT WIZARD--" << endl;
							cout << "The magic of entrancing and beguiling other people and creatures";
							ench:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL ENCHANTMENT WIZARD--" << endl;
								cout << "ENCHANTMENT SAVANT: Copying an Enchantment spell to a spellbook takes you half the time and gp" << endl;
								cout << "HYPNOTIC GAZE: As an action, pick a creature within 5 ft of you that can see or hear you. It has" << endl;
								cout << "to succeed on a Wis save against your Wizard spell save DC or be charmed by you until the end of" << endl;
								cout << "your next turn. The target's speed drops to 0, and they are incapacitated and visibly dazed. You" << endl;
								cout << "can use your action to maintain the effect. However, it ends if they go more than 5 ft away, if" << endl;
								cout << "they can no longer see or hear you, or if it takes damage. Once the effect ends or if it succeeds" << endl;
								cout << "you can't use this feature on that creature until after a long rest" << endl;
								goto ench;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL ENCHANTMENT WIZARD--" << endl;
								cout << "INSTINCTIVE CHARM: When a creature you can see within 30ft of you makes an attack roll on you, you" << endl;
								cout << "can divert it to another creature in the attack's range. The attacker makes a Wis save against your" << endl;
								cout << "against your Wizard spell save DC. On a fail, it must target the closest creature to it, excluding" << endl;
								cout << "you or itself. If multiple creatures are closest, the attacker chooses which one. On a succesful" << endl;
								cout << "save, you can't use this on that creature until after a long rest. You must choose to use this" << endl;
								cout << "before you know if the attack hits or misses. Creatures that can't be charmed are immune to this" << endl;
								cout << "feature" << endl;
								goto ench;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL ENCHANTMENT WIZARD--" << endl;
								cout << "SPLIT ENCHANTMENT: When you cast an Enchantment spell of 1st level or higher that targets only" << endl;
								cout << "creature, you can target two creatures" << endl;
								goto ench;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL ENCHANTMENT WIZARD--" << endl;
								cout << "ALTER MEMORIES: When you cast an enchantment spell to charm one or more creatures, you can make it" << endl;
								cout << "so one creature doesn't know it's being charmed. Also, once before the spell ends, you can make it" << endl;
								cout << "forget some of the time it spent charmed. It makes an Int save against your Wizard spell save DC." << endl;
								cout << "On a fail, it loses a number of hours of its memories equal to 1 + your Cha modifier (min. 1). You" << endl;
								cout << "can make the creature forget less time, and the amount can't exceed the duration of your spell" << endl;
								goto ench;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto ench;
							}
						}

						else if (arct == "evcn")
						{
							cout << endl << "--EVOCATION WIZARD--" << endl;
							cout << "The magic of the elements";
							evcn:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL EVOCATION WIZARD--" << endl;
								cout << "EVOCATION SAVANT: Copying an Evocation spell to a spellbook takes you half the time and gp" << endl;
								cout << "SCULPT SPELLS: When you cast an Evocation spells that affects other creatures you can see," << endl;
								cout << "you can choose a number of creatures equal to 1 + the spell's level. They automatically" << endl;
								cout << "succeed on saves against the spell, and take no damage if they would take half damage on" << endl;
								cout << "a successful save" << endl;
								goto evcn;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL EVOCATION WIZARD--" << endl;
								cout << "POTENT CANTRIP: When a creature succeeds on a save against a damaging cantrip of yours, they" << endl;
								cout << "take half the cantrip's damage (if any), but takes no additional effects" << endl;
								goto evcn;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL EVOCATION WIZARD--" << endl;
								cout << "EMPOWERED EVOCATION: You can add your Int modifier to the damage roll of any Wizard Evocation spell you cast" << endl;
								goto evcn;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL EVOCATION WIZARD--" << endl;
								cout << "OVERCHANNEL: When you cast an evocation spell of 5th level or lower that does damage, you can make" << endl;
								cout << "it do max damage. However, there's some adverse effects. Per long rest, the first time you do this" << endl;
								cout << "nothing happens. The second time, you take 2d12 necrotic damage per level of the spell immediately" << endl;
								cout << "after casting the spell. Each subsequent time, you take an extra d12 of necrotic damage per spell" << endl;
								cout << "level. This damage ignores resistance and immunity" << endl;
								goto evcn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto evcn;
							}
						}

						else if (arct == "ilsn")
						{
							cout << endl << "--ILLUSION WIZARD--" << endl;
							cout << "The magic of confusion and distraction";
							ilsn:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL ILLUSION WIZARD--" << endl;
								cout << "ILLUSION SAVANT: Copying an Illusion spell to a spellbook takes you half the time and gp" << endl;
								cout << "IMPROVED MINOR ILLUSION: You learn the Minor Illusion cantrip. If you already know it, you learn a" << endl;
								cout << "Wizard cantrip of your choice. The cantrip doesn't count against your number of cantrips known." << endl;
								cout << "When you cast Minor Illusion, you can make a sound AND image with a single casting" << endl;
								goto ilsn;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL ILLUSION WIZARD--" << endl;
								cout << "MALLEABLE ILLUSION: When you cast an Illusion spell with a duration of 1+ minute, you can use your" << endl;
								cout << "action to change the nature of the spell (as long it stays in the spell's parameters)" << endl;
								goto ilsn;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL ILLUSION WIZARD--" << endl;
								cout << "ILLUSORY SELF: Once per short or long rest, when a creature makes an attack roll against you, you" << endl;
								cout << "can create an illusion duplicate between the creature and you. The roll automatically fails, then" << endl;
								cout << "the illusion dissapates" << endl;
								goto ilsn;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL ILLUSION WIZARD--" << endl;
								cout << "ILLUSORY REALITY: When you cast an illusion spell of 1st level or higher, you can make an inanimate" << endl;
								cout << "nonmagical part of the illusion real. You can do this as a bonus action on your turn while the" << endl;
								cout << "spell is going. It stays real for 1 minute. The object can't directly harm anyone. For example," << endl;
								cout << "you can make an illusion bridge real long enough for you and yor allies to cross" << endl;
								goto ilsn;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto ilsn;
							}
						}

						else if (arct == "ncrm")
						{
							cout << endl << "--NECROMANCY WIZARD--" << endl;
							cout << "The magic of controlling life, death, and undeath";
							ncrm:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL NECROMANCY WIZARD--" << endl;
								cout << "NECROMANCY SAVANT: Copying an Necromancy spell to a spellbook takes you half the time and gp" << endl;
								cout << "GRIM HARVEST: Once per turn, when you kill one or more creatures with a spell, you gain temporary" << endl;
								cout << "HP equal to twice the spell's level. If it's a Necromancy spell, you gain 3x instead. This doesn't" << endl;
								cout << "work on constructs or undead" << endl;
								goto ncrm;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL NECROMANCY WIZARD--" << endl;
								cout << "UNDEAD THRALLS: Add the Animate Dead spell to your spellbook if it isn't there already. When you cast" << endl;
								cout << "Animate Dead, you can target an additional corpse or pile of bones to make an additional zombie or" << endl;
								cout << "skeleton, as appropriate. When you create an undead using a Necromancy spell, it gets two benefits:" << endl;
								cout << "-HP max increases by a number equal to your Wizard Level" << endl << "-Adds your Prof. bonus to its dmg rolls" << endl;
								goto ncrm;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL NECROMANCY WIZARD--" << endl;
								cout << "INJURED TO UNDEATH: You have resistance to necrotic damage and your HP max can't be reduced. You've" << endl;
								cout << "been dealing with the forces of undeath for so long that you basically are one" << endl;
								goto ncrm;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL NECROMANCY WIZARD--" << endl;
								cout << "COMMAND UNDEAD: As an action, choose an undead you can see within 60ft of you. It makes a Cha save" << endl;
								cout << "against your Wizard spell save DC. If it succeeds, you can't use this feature on it again. If it" << endl;
								cout << "fails, it becomes friendly to you and obeys your commands until you use this again. Intelligent" << endl;
								cout << "undead are harder. If target has an Int of 8 or higher, the save gets advantage. If it has Int 12" << endl;
								cout << "or greater, it can repeat the save every hour until it breaks free" << endl;
								goto ncrm;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto ncrm;
							}
						}

						else if (arct == "tran")
						{
							cout << endl << "--TRANSMUTATION WIZARD--" << endl;
							cout << "The magic of modifying matter";
							tran:
							cout << endl << "What would you like to see?" << endl;
							cin >> x;

							if (x == "2nd")
							{
								cout << endl << "--2nd LEVEL TRANSMUTATION WIZARD--" << endl;
								cout << "TRANSMUTATION SAVANT: Copying an Transmutation spell to a spellbook takes you half the time and gp" << endl;
								cout << "MINOR ALCHEMY: You can perform a special alchemical procedure to change one object made completely" << endl;
								cout << "of wood, stone (not a gem), iron, copper, or silver into one of the other listed items. For each" << endl;
								cout << "spent on the procedure, you can transform up to 1 cubic foot of material. After 1 hour or when" << endl;
								cout << "you lose concentration, it reverts back to the original substance" << endl;
								goto tran;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL TRANSMUTATION WIZARD--" << endl;
								cout << "TRANSMUTER'S STONE: You can spend 8 hours creating a transmuter's stone that stores magic. Any" << endl;
								cout << "creature that holds it gets a benefit. When you create it or when you cast a Transmutation spell" << endl;
								cout << "of 1st level or higher when you are holding the stone, you choose one of the following benefits:" << endl;
								cout << "-Darkvision to 60ft" << endl << "-10ft increase to speed while creature is unencumbered" << endl;
								cout << "-Proficiency in Con saves" << endl << "-Resistance to acid, cold, fire, lightning, OR thunder damage (your choice)" << endl;
								cout << "When you make a new one, the old one stops functioning" << endl;
								goto tran;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL TRANSMUTATION WIZARD--" << endl;
								cout << "SHAPESHIFTER: Add Polymorph to your spellbook if it isn't already there. Once per short or long rest" << endl;
								cout << "you can cast Polymorph without spending a spell slot. The CR of the form you take can go up to 1 if" << endl;
								cout << "you cast it this way" << endl;
								goto tran;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL TRANSMUTATION WIZARD--" << endl;
								cout << "MASTER TRANSMUTER: You can use all the magic in your stone in one go. When you do, your stone is" << endl;
								cout << "destroyed, and you can't make another until after a long rest. When you do this, choose one of" << endl;
								cout << "the following:" << endl;
								cout << "-MAJOR TRANSFORMATION: You transform one nonmagical item of 5 cubic feet or less, and change it" << endl;
								cout << " into another nonmagical item of similar size and mass and equal or lesser value. You must spend" << endl;
								cout << " 10 minutes working with the material to do this" << endl;
								cout << "-PANACEA: Remove all diseases, curses, and poisions affecting a creature you touch with the stone" << endl;
								cout << " and it regains all of its HP" << endl;
								cout << "-RESTORE LIFE: Cast Raise Dead on a creature you touch with the stone, without using a spell slot" << endl;
								cout << " or needing to have it in your spellbook" << endl;
								cout << "-RESTOREN YOUTH: Touch a willing creature with the stone. They look 3d10 years younger. Cannot be" << endl;
								cout << " reduced below 13. Their actual age doesn't decrease, and their lifespan doesn't decrease" << endl;
								goto tran;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto arct;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto tran;
							}
						}

						else if (arct == "exit")
						{
							cout << endl;
							goto wzrd;
						}

						else
						{
							cout << endl << "You entered something wrong" << endl;
							goto arct;
						}
					}

					else if (wzrd == "spel")
					{
						cout << endl << "--WIZARD SPELL LISTS--" << endl;
						cout << "The Warlock has spells from 1st to 5th level, and cantrips ('0th').";
						wzrdspel:
						cout << endl << "What level would you like to see the Wizard spells for?" << endl;
						cin >> wzrdspel;

						if (wzrdspel == "0th")
						{
							cout << endl << "--WIZARD CANTRIPS--" << endl;
							cout << "Acid Splash" << endl << "Blade Ward" << endl << "Chill Touch" << endl;
							cout << "Dancing Lights" << endl << "Fire Bolt" << endl << "Friends" << endl;
							cout << "Light" << endl << "Mending" << endl << "Mage Hand" << endl << "Message" << endl;
							cout << "Minor Illusion" << endl << "Poison Spray" << endl << "Prestidigation" << endl;
							cout << "Ray of Frost" << endl << "Shocking Grasp" << endl << "True Strike" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "1st")
						{
							cout << endl << "--1st LEVEL WIZARD SPELLS--" << endl;
							cout << "Alarm" << endl << "Burning Hands" << endl << "Charm Person" << endl;
							cout << "Chromatic Orb" << endl << "Color Spray" << endl << "Comprehend Languages" << endl;
							cout << "Detect Magic" << endl << "Disguise Self" << endl << "Expeditious Retreat" << endl;
							cout << "False Life" << endl << "Feather Fall" << endl << "Find Familiar" << endl;
							cout << "Fog Cloud" << endl << "Grease" << endl << "Identify" << endl;
							cout << "Illusory Script" << endl << "Jump" << endl << "Longstrider" << endl;
							cout << "Mage Armor" << endl << "Magic Missile" << endl << "Protection from Evil and Good" << endl;
							cout << "Ray of Sickness" << endl << "Shield" << endl << "Silent Image" << endl;
							cout << "Sleep" << endl << "Tasha's Hideous Laughter" << endl << "Tenser's Floating Disk" << endl;
							cout << "Thunderwave" << endl << "Unseen Servant" << endl << "Witch Bolt" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "2nd")
						{
							cout << endl << "--2nd LEVEL WIZARD SPELLS--" << endl;
							cout << "Alter Self" << endl << "Arcand Lock" << endl << "Blindness/deafness" << endl;
							cout << "Blur" << endl << "Cloud of Daggers" << endl << "Continual flame" << endl;
							cout << "Crown of Madness" << endl << "Darkness" << endl << "Darkvision" << endl;
							cout << "Detect thoughts" << endl << "Enlarge/reduce" << endl << "Flaming sphere" << endl;
							cout << "Gentle repose" << endl << "Gust of wind" << endl << "Hold person" << endl;
							cout << "Invisibility" << endl << "Knock" << endl << "Levitate" << endl;
							cout << "Locate object" << endl << "Magic mouth" << endl << "Magic weapon" << endl;
							cout << "Melf's acid throw" << endl << "Mirror image" << endl << "Misty step" << endl;
							cout << "Nystul's magic aura" << endl << "Phantasmal force" << endl << "Ray of enfeemblement" << endl;
							cout << "Rope trick" << endl << "Scorching ray" << endl << "See invisibility" << endl;
							cout << "Shatter" << endl << "Spider climb" << endl << "Suggestion" << endl << "Web" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "3rd")
						{
							cout << endl << "--3rd LEVEL WIZARD SPELLS--" << endl;
							cout << "Animate dead" << endl << "Bestow curse" << endl << "Blink" << endl;
							cout << "Clairvoyance" << endl << "Counterspell" << endl << "Dispel Magic" << endl;
							cout << "Fear" << endl << "Feign death" << endl << "Fireball" << endl << "Fly" << endl;
							cout << "Gaseous form" << endl << "Glyph of Warding" << endl << "Haste" << endl;
							cout << "Hypnotic pattern" << endl << "Leomund's tiny hut" << endl << "Lightning bolt" << endl;
							cout << "Magic Circle" << endl << "Major image" << endl << "Nondetection" << endl;
							cout << "Phantom steed" << endl << "Protection from energy" << endl << "Remove curse" << endl;
							cout << "Sendimg" << endl << "Sleet storm" << endl << "Slow" << endl;
							cout << "Stinking cloud" << endl << "Tongues" << endl << "Vampiric touch" << endl;
							cout << "Water Breathing" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "4th")
						{
							cout << endl << "--4th LEVEL WIZARD SPELLS--" << endl;
							cout << "Arcane eye" << endl << "Banishment" << endl << "Blight" << endl;
							cout << "Confusion" << endl << "Conjure minor elementals" << endl << "Control water" << endl;
							cout << "Dimension door" << endl << "Evard's black tentacles" << endl << "Fabricate" << endl;
							cout << "Fire shield" << endl << "Greater invisibility" << endl << "Hallucinatory terrain" << endl;
							cout << "Ice Storm" << endl << "Leomund's secret chest" << endl << "Locate creature" << endl;
							cout << "Mordekainen's faithful hound" << endl << "Mordekainen's private sanctum" << endl;
							cout << "Otiluke's resilient sphere" << endl << "Phantasmal killer" << endl;
							cout << "Polymorph" << endl << "Stone shape" << endl << "Stoneskin" << endl << "Wall of fire" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "5th")
						{
							cout << endl << "-5th LEVEL WIZARD SPELLS--" << endl;
							cout << "Animate objects" << endl << "Bigby's Hand" << endl << "Cloudkill" << endl;
							cout << "Cone of cold" << endl << "Conjure elemental" << endl << "Contact other plane" << endl;
							cout << "Creation" << endl << "Dominate person" << endl << "Dream" << endl << "Geas" << endl;
							cout << "Hold Monster" << endl << "Legend lore" << endl << "Mislead" << endl;
							cout << "Modify Memory" << endl << "Passwall" << endl << "Planar binding" << endl;
							cout << "Rary's telepathic bond" << endl << "Scrying" << endl << "Seeming" << endl;
							cout << "Telekenesis" << endl << "Teleportation circle" << endl;
							cout << "Wall of force" << endl << "Wall of stone" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "6th")
						{
							cout << endl << "--6th LEVEL WIZARD SPELLS--" << endl;
							cout << "Arcane gate" << endl << "Chain lightning" << endl << "Circle of death" << endl;
							cout << "Contingency" << endl << "Create undead" << endl << "Disintegrate" << endl;
							cout << "Drawmij's instant" << endl << "Summons" << endl << "Eyebite" << endl;
							cout << "Flesh to stone" << endl << "Globe of invulnerability" << endl << "Guards and wards" << endl;
							cout << "Magic jar" << endl << "Mass suggestion" << endl << "Move earth" << endl;
							cout << "Otiluke's freezing sphere" << endl << "Ott's irresistable dance" << endl;
							cout << "Programmed illusion" << endl << "Sunbeam" << endl;
							cout << "True seeing" << endl << "Wall of ice" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "7th")
						{
							cout << endl << "--7th LEVEL WIZARD SPELLS--" << endl;
							cout << "Delayed blast fireball" << endl << "Etherealness" << endl << "Finger of death" << endl;
							cout << "Forcecage" << endl << "Mirage arcane" << endl << "Mordekainen's magnificent mansion" << endl;
							cout << "Mordekainen's sword" << endl << "Plane shift" << endl << "Prismatic spray" << endl;
							cout << "Project image" << endl << "Reverse gravity" << endl << "Sequester" << endl;
							cout << "Simulacrum" << endl << "Symbol" << endl << "Teleport" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "8th")
						{
							cout << endl << "--8th LEVEL WIZARD SPELLS--" << endl;
							cout << "Antimagic field" << endl << "Antipathy/sympathy" << endl << "Clone" << endl;
							cout << "Control weather" << endl << "Demiplane" << endl << "Dominate monster" << endl;
							cout << "Feeblemind" << endl << "Incendiary cloud" << endl << "Maze" << endl;
							cout << "Mind blank" << endl << "Power word stun" << endl << "Sunburth" << endl;
							cout << "Telepathy" << endl << "Trap the soul" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "9th")
						{
							cout << endl << "--9th LEVEL WIZARD SPELLS--" << endl;
							cout << "Astral projection" << endl << "Foresight" << endl << "Gate" << endl;
							cout << "Imprisonment" << endl << "Meteor swarm" << endl << "Power word kill" << endl;
							cout << "Prismatic wall" << endl << "Shapechange" << endl << "Time stop" << endl;
							cout << "True polymorph" << endl << "Weird" << endl << "Wish" << endl;
							goto wzrdspel;
						}

						else if (wzrdspel == "exit")
						{
							cout << endl;
							goto wzrd;
						}

						else
						{
							cout << endl << "You typed something wromg" << endl;
							goto wzrdspel;
						}
					}

					else if (wzrd == "exit")
					{
						cout << endl;
						goto clas;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto wzrd;
					}
				}

				else if (clas == "exit")
				{
					goto rference;
				}

				else
				{
					cout << "You entered something wrong" << endl << endl;
					goto clas;
				}
			}

			//eight ball
			else if (begun == "decision") {
				cout << endl << "--DECISION MAKER--" << endl;
				cout << "It's a Magic 8 Ball! When you are ready, type anything that isn't 'exit' and follow instructions" << endl;
				cin >> x;

				if (x == "exit") {
					cout << endl;
					goto rference;
				}

				else {
					int times;

					cout << "How many times would you like to consult the ball (enter an integer)?" << endl;
					cin >> times;

					if (times < 0) {
						cout << endl << "The ball dislikes your negativity" << endl;
						Sleep(1000);
						return 0;
					}

					else if (times == 0) {
						cout << endl;
						goto rference;
					}

					else if (times == 1) {
						cout << endl << "Concentrate on your question." << endl;
						Sleep(5000);
						cout << endl << "The Ball speaks thus: " << eightBall() << endl;
						goto rference;
					}

					else {
						cout << endl << "Concentrate on your question" << endl;
						for (int i = 0; i < times; i++) {
							cout << endl << "The Ball speaks thus: " << eightBall() << endl;

							if (i < times - 1) {
								cout << endl << "Concentrate on your next question" << endl;
							}
						}
					}
				}
			}

			//race reference
			//
			else if (begun == "race")
			{
				race:
				cout << "\nRace reference- type the name of the class you want to view, 'list' to view what races are available" << endl;
				cout << "or 'exit' to move back a step (works at any point in time, like in subraces)" << endl;
				cout << "Note: all sizes are Medium except for Halfling (small)" << endl;
				cin >> race;

				if (race == "list")
				{
					cout << "Race list - what to type to view the race" << endl;
					cout << "Aasimar- asmr" << endl << "Dwarf - dwrf" << endl << "Elf - elf" << endl;
					cout << "Goliath - glth" << endl << "Hafling - hlng" << endl << "Human - humn" << endl;
					cout << "Dragonborn - dgbn" << endl << "Gnome - gnom" << endl << "Half-elf - helf" << endl;
					cout << "Half-orc - horc" << endl << "Tiefling - tflg" << endl << "Tortle - trtl" << endl << endl;
					goto race;
				}

				else if (race == "asmr")
				{
					asmr:
					cout << "--AASIMAR--" << endl;
					cout << "Ability Increase: +2 Cha" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Darkvision 60ft (colorblind)" << endl;
					cout << "Celestial Radiance: resistance to Radiant and Necrotic damage" << endl;
					cout << "Healing Hands: as an action, you can touch a creature and make it regain HP" << endl;
					cout << "equal to your level. You can't use this again until after a long rest" << endl;
					cout << "Light Bearer: you know the 'Light' cantrip" << endl;
					cout << "Language: Common, Celestial" << endl;
					cout << "Subraces: Protector ('prtc'), Scourge ('scrg'), and Fallen ('faln')" << endl;
					cin >> asmrsub;

					if (asmrsub == "prtc")
					{
						cout << endl << "--PROTECTOR AASIMAR--" << endl;
						cout << "Ability Increase: +1 Wis" << endl;
						cout << "Radiant Soul: Starting at 3rd level, as an action, you can transform (your eyes shine" << endl;
						cout << "and two glowing, incorporeal wings come out your back) for one minute or until you end it" << endl;
						cout << "as a bonus action. While transformed, you have a flying speed of 30ft and once per turn, you" << endl;
						cout << "can deal extra radiant damage when you do a spell or an attack. The extra damage equals your level" << endl << endl;
						goto asmr;
					}

					else if (asmrsub == "scrg")
					{
						cout << endl << "--SCOURGE AASIMAR--" << endl;
						cout << "Ability Increase: +1 Con" << endl;
						cout << "Radiant Consumption: Starting at 3rd level, as an action, you can transform (Searing light" << endl;
						cout << "radiates from you, and pours out of your orfices) for one minute or until you end it as a" << endl;
						cout << "bonus action. While transformed, you produce bright light in a 10ft radius, and dim light for" << endl;
						cout << "another 10ft. At the end of your turns while transformed, you and each creature within 10ft" << endl;
						cout << "take radiant damage equal to half your level, rounded up. Also, once per turn while transformed" << endl;
						cout << "on an attack or spell, you can deal extra radiant damage equal to your level" << endl;
						goto asmr;
					}

					else if (asmrsub == "faln")
					{
						cout << endl << "--FALLEN AASIMAR--" << endl;
						cout << "Ability Increase: +1 Str" << endl;
						cout << "Necrotic Shroud: Starting at 3rd level, as an action, you can transform (Your eyes become" << endl;
						cout << "pools of black and two skeletal, ghostly, flightless wings come out of your back) for one" << endl;
						cout << "minute or until you end it as a bonus action. Upon transforming, other creatures that can" << endl;
						cout << "see you within 10 ft of you make a Cha saving throw. If they fail, they are frightened of" << endl;
						cout << "you until your next turn. While transformed, on an attack or spell, you can deal extra radiant" << endl;
						cout << "damage equal to your level" << endl;
						goto asmr;
					}

					else if (asmrsub == "exit")
					{
						cout << endl;
						goto race;
					}

					else
					{
						cout << "You typed something wrong" << endl;
						goto asmr;
					}
				}

				//dwarf
				//
				else if (race == "dwrf")
				{
					cout << "--DWARF--" << endl;
					cout << "Ability increase: +2 Con" << endl;
					cout << "Speed: 25ft" << endl;
					cout << "Darkvision 60ft" << endl;
					cout << "Advantage on saving throws against poison, resistance to poison damage" << endl;
					cout << "Weapon proficiencies: Battleaxe, handaxe, throwing hammer, warhammer" << endl;
					cout << "Tool proficiencies: Smith's tools, brewer's supplies, OR mason's tools" << endl;
					cout << "Stonecunning: When doing History check about stonework, you are proficient" << endl << "and the proficiency bonus is doubled" << endl;
					cout << "Language: Common, dwarvish" << endl;
					dwarf:
					cout << "Subraces: Hill('hill') or Mountain('mntn') (type which one you want to see)" << endl << endl;
					cin >> dwarsub;

					if (dwarsub == "hill")
					{
						cout << "--HILL DWARF--" << endl;
						cout << "Ability increase: +1 Wis" << endl;
						cout << "Dwarven toughness- HP increases by 1, and adds another 1 each time you level up" << endl << endl;
						goto dwarf;
					}

					else if (dwarsub == "mntn")
					{
						cout << "--MOUNTAIN DWARF--" << endl;
						cout << "Ability increase: +2 Str" << endl;
						cout << "Armor proficiency: Light/medium armor" << endl << endl;
						goto dwarf;
					}

					else if (dwarsub == "exit")
					{
						goto race;
					}

				}

				//elf
				//
				else if (race == "elf")
				{
					cout << endl << "--ELF--" << endl;
					cout << "Ability increase: +2 dex" << endl;
					cout << "Speed- 30ft" << endl;
					cout << "Darkvision- 60ft" << endl;
					cout << "Keen senses- proficient in Perception" << endl;
					cout << "Fey Ancestry- Advantages on saving throws against being charmed," << endl;
					cout << "can't be put to sleep via magic" << endl;
					cout << "Trance- Can meditate for 4 hours a day instead of sleeping 8 hours at night" << endl;
					cout << "Languages- Common, Elvish" << endl;
					elf:
					cout << "Subrace- High (high), wood (wood), dark/drow (dark)" << endl;
					cin >> elfsub;

					if (elfsub == "high")
					{
						cout << endl << "--HIGH ELF--" << endl;
						cout << "Ability increase: +1 Int" << endl;
						cout << "Weapon proficiency: Long/short swords, long/short bows" << endl;
						cout << "You get One (1) Cantrip from the Wizard cantrip list, use Int check to cast" << endl;
						cout << "You get an extra language of your choice" << endl << endl;
						goto elf;
					}

					else if (elfsub == "wood")
					{
						cout << endl << "--WOOD ELF--" << endl;
						cout << "Ability increase: +1 Wis" << endl;
						cout << "Weapon proficiencies: Long/short swords, long/short bows" << endl;
						cout << "Base walking speed increases to 35ft" << endl;
						cout << "'Mask of the Wild'- Can try to hide even when only lightly obscured by natural conditions" << endl; 
						cout << "(Rainain, foliage, etc)" << endl << endl;
						goto elf;
					}

					else if (elfsub == "dark")
					{
						darkelf:
						cout << endl << "--DARK/DROW ELF--" << endl;
						cout << "Ability increase- +1 Cha" << endl;
						cout << "Darkvision increase to 120 ft" << endl;
						cout << "Sunlight sensitivity- disadvantage on attack and perception checks in direct sunlight" << endl;
						cout << "Drow magic- You get the 'Dancing Lights' Cantrip, then the 'Faerie fire' spell at 3rd lvl," << endl;
						cout << "and 'Darkness at 5th lvl" << endl;
						cout << "Weapon proficiencies- Rapiers, shortswords, hand crossbows" << endl << endl;
						goto elf;
					}

					else if (elfsub == "drow")
					{
						goto darkelf;
					}

					else if (elfsub == "exit")
					{
						goto race;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl << endl;
						goto elf;

					}

				}

				//goliath
				//
				else if (race == "glth")
				{
					cout << endl << "--GOLIATH--" << endl;
					cout << "Ability Increase: +2 Str, +1 Con" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Natural Athlete: You are proficient in athletics" << endl;
					cout << "Stone's Endurance: Once per short or long rest, when you take damage you can" << endl;
					cout << "reduce the damage taken by 1d12 + your Con modifier." << endl;
					cout << "Powerful Build: You count as one size larger when determining carrying capacity" << endl;
					cout << "or weight you can, push, drag, or lift" << endl;
					cout << "Mountain Born: You are acclimated to high altitudes and low climates" << endl;
					cout << "Languages: Common and Giant" << endl;
					goto race;
				}

				//halfling
				//
				else if (race == "hlng")
				{
					cout << endl << "--HALFLING--" << endl;
					cout << "Ability increase: +2 Dex" << endl;
					cout << "Speed: 25ft" << endl;
					cout << "Lucky: when you roll a nat1 on a d20, you can reroll the die but must use the new roll" << endl;
					cout << "Brave: Advantage on saving throws against being frightened" << endl;
					cout << "Nimble- can move through space of any creature larger than you" << endl;
					cout << "Languages: Common, halfling" << endl;
					hlng:
					cout << "Subraces: Lightfoot (ltft) and Stout (stut)" << endl;
					cin >> halfsub;

					if (halfsub == "ltft")
					{
						cout << endl << "--LIGHTFOOT HAFLING--" << endl;
						cout << "Ability increase: +1 Cha" << endl;
						cout << "Can hide behind creatures at least 1 size bigger than you" << endl << endl;
						goto hlng;
					}

					else if (halfsub == "stut")
					{
						cout << endl << "--STOUT HALFLING--" << endl;
						cout << "Ability increase: +1 Con" << endl;
						cout << "Advantage on saving throws against being poisoned, resistance to poison dmg" << endl << endl;
						goto hlng;
					}

					else if (halfsub == "exit")
					{
						goto race;
					}
					
					else
					{
						cout << endl << "You typed something wrong" << endl << endl;
						goto hlng;
					}
				}

				//human
				//
				else if (race == "humn")
				{
					cout << endl << "Human" << endl;
					cout << "Ability increase: +1 on everything" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Languages: Common, one of your choice" << endl << endl;
					goto race;
				}

				//dragonborn
				//
				else if (race == "dgbn")
				{
					cout << endl << "Dragonborn" << endl;
					cout << "Ability increase: +2 Str, +2 Cha" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Languages: Common, Draconic" << endl;
					cout << "Ancestry: You have a breath weapon and dmg resist associated with your ancestry" << endl;
					cout << "The damage of this breath weapon is 2d6 on a failed save, half that on a success" << endl;
					cout << "Damage of this attack increases by 1d6 at 6th, 11th, and 16th level" << endl;
					cout << "DC for breath weapon is 8 + Con. Modifier + Proficiency bonus" << endl;
					dgbn:
					cout << "Type 'ancestry' to view the ancestry chart, or anything else to return to race select" << endl;
					cin >> dgbchoose;

					if (dgbchoose == "ancestry")
					{
						cout << endl << "Chart organization: Scale Color - Dmg type - Line (5x30ft) or cone (15ft)" << endl;
						cout << "Black - Acid - Line (Dex save)" << endl;
						cout << "Blue - Lightning - Line (Dex save)" << endl;
						cout << "Brass - Fire - Line (Dex save)" << endl;
						cout << "Bronze - Lightning - Line (Dex save)" << endl;
						cout << "Copper - Acid - Line (Dex save)" << endl;
						cout << "Gold - Fire - Cone (Dex save)" << endl;
						cout << "Green - Poison - Cone (Con save)" << endl;
						cout << "Red - Fire - Cone (Dex save)" << endl;
						cout << "Silver - Cold - Cone (Con save)" << endl;
						cout << "White - Cold - Cone (Con save)" << endl << endl;
						goto dgbn;
					}

					else
					{
						cout << endl;
						goto race;
					}
				}

				//gnome
				//
				else if (race == "gnom")
				{
					cout << endl << "Gnome" << endl;
					cout << "Ability Increase: +2 Int" << endl;
					cout << "Speed: 25ft" << endl;
					cout << "Darkvision 60ft" << endl;
					cout << "Advantage on all Wis, Cha, and Int saves against magic" << endl;
					cout << "Languages: Common, gnomish" << endl;
					gnome:
					cout << "Subraces: Forest (frst), Rock (rock)" << endl;
					cin >> gnosub;

					if (gnosub == "frst")
					{
						cout << endl << "Forest Gnome" << endl;
						cout << "Ability increase: +1 Dex" << endl;
						cout << "You know the Minor Illusion cantrip. Int is your spellcasting ability for it" << endl;
						cout << "You can communicate simple ideas and commands to Small and smaller beasts" << endl << endl;
						goto gnome;
					}

					else if (gnosub == "rock")
					{
						cout << endl << "Rock gnome" << endl;
						cout << "Ability increase: +1 Con" << endl;
						cout << "When making a History check on magic lore, alchemical tools, or tech devices, add twice your prof. bonus" << endl;
						cout << "Can make a clockwork thing (A functional model beast, a fire starter, or music box) out of 10gp of materials" << endl << endl;
						goto gnome;
					}

					else if (gnosub == "exit")
					{
						goto race;
					}

					else
					{
						cout << "You typed something wrong" << endl << endl;
						goto gnome;
					}
				}

				//half-elf
				//
				else if (race == "helf")
				{
					cout << endl << "--HALF-ELF--" << endl;
					cout << "Ability Increase: +2 Cha, +1 in two abilities of your choice" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Darkvision 60ft" << endl;
					cout << "Fey Ancestry: Adv. on saves against being charmed, can't get put to sleep by magic" << endl;
					cout << "You are proficient in Two skills of your choice" << endl;
					cout << "Languages: Common, Elvish, and one of your choice" << endl << endl;
					goto race;
				}

				//half-orc
				//
				else if (race == "horc")
				{
					cout << endl << "--HALF-ORC--" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Ability Increase: +2 Str, +1 Con" << endl;
					cout << "Darkvision 60ft" << endl;
					cout << "You are proficient in the Intimidation skill" << endl;
					cout << "Relentless Endurance: If you are dropped to 0 HP but not killed outright," << endl;
					cout << "You drop to 1 HP instead. Can't use this feature again until after a long rest" << endl;
					cout << "Savage attack: when you roll a crit, you can roll one of the weapon's damage dice" << endl;
					cout << "again and add that to the extra damage" << endl;
					cout << "Languages: Common, Orc" << endl << endl;
					goto race;
				}

				//tiefling
				//
				else if (race == "tflg")
				{
					cout << endl << "--TIEFLING--" << endl;
					cout << "Ability increase: +2 Cha, +1 Int" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Darkvision 60ft, but are colorblind in dark/dim" << endl;
					cout << "You have resistance to fire damage" << endl;
					cout << "Infernal Legacy: You know the 'Thaumaturgy' Cantrip. At 3rd Lvl, you" << endl;
					cout << "You can cast 'Hellish Rebuke' at 2nd lvl once per day, and at 5th Lvl," << endl;
					cout << "you can cast 'Darkness' once per day. Cha is your spellcasting ability" << endl;
					cout << "for those spells." << endl;
					cout << "Languages: Common, Infernal" << endl << endl;
					goto race;
				}

				else if (race == "trtl")
				{
					cout << endl << "--TORTLE--" << endl;
					cout << "Ability increase: +2 Str, +1 Wis" << endl;
					cout << "Speed: 30ft" << endl;
					cout << "Natural Weaponry- Claws: You can make unarmed strikes with your claws. On hit, " << endl;
					cout << "you do slashing damage equal to 1d4 + your Str modifier instead of the normal" << endl;
					cout << "bludgeoning damage" << endl;
					cout << "Hold Breath: You can hold your breath for 1 hour. You aren't naturally good at" << endl;
					cout << "swimming, but you can stay underwater for the hour" << endl;
					cout << "Natural Armor: You have a base AC of 17. Your Dex modifier doesn't affect this." << endl;
					cout << "Armor does not affect this, but when using a shield you can apply the bonus as usual" << endl;
					cout << "Survival Instinct: You are proficient in the Survival skill" << endl;
					cout << "Languages: You know Common and Aquan" << endl;
					goto race;
				}
				
				else if (race == "exit")
				{
					goto rference;
				}
				
				else
				{
					cout << "You typed something in wrong" << endl << endl;
					goto race;
				}
			}

			//background reference
			//
			else if (begun == "background")
			{
				cout << "--BACKGROUND REFERENCE AREA--" << endl;
				cout << "Backgrounds are used to determine the kind of personality your character has, though it does" << endl;
				cout << "give you features and equipment. Those things are detailed here, with synopsis on how the chosen" << endl;
				cout << "background affects your roleplaying" << endl;
				bckgrnd:
				cout << endl << "Which background would you like to see?" << endl;
				cin >> bckgrnd;

				if (bckgrnd == "list")
				{
					cout << endl << "--LIST OF OPTIONS--" << endl;
					cout << "Acolyte: acly" << endl << "Charlatan- 'cltn'" << endl << "Criminal - 'crmn'" << endl;
					cout << "Folk Hero: 'flkh'" << endl << "Entertainer - 'entr'" << endl << "Guild Artisan- 'glda'" <<  endl << "Hermit - 'hrmt'" << endl;
					cout << "Noble - 'nobl'" << endl << "Outlander - 'otln'" << endl << "Sage - 'sage'" << endl;
					cout << "Soldier 'solr'" << endl << "Sailor- 'sail'" << endl << "Urchin - 'urch-" << endl;
					cout << "How to make a background - 'cstm'" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "acly")
				{
					cout << endl << "--ACOLYTE--" << endl;
					cout << "You are a member of a religious congregation, and should be actively doing things in your god's" << endl;
					cout << "name." << endl;
					cout << "SKILLS: Insight, Religion" << endl << "TOOLS: None" << endl << "LANGUAGES: Pick any 2" << endl;
					cout << "FEATURE: SHELTER OF THE FAITHFUL: Free healing at temples for your religion, but you provide" << endl;
					cout << "material components. Those who share your religion help (only) you with a modest lifestyle." << endl;
					cout << "Also, can ask for non-hazardous asistance from priests from your original temple, so long as" << endl;
					cout << "you are in its good graces" << endl;
					cout << "EQUIPMENT: A holy symbol, a prayer book or wheel, 5 sticks of incense, vestments, common clothes" << endl;
					cout << "MONEY: Belt pouch, 15gp" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Use hero of faith as example for living" << endl << "-Empathize with enemies, work towards peace" << endl;
					cout << "-See omens in everything" << endl << "-Overly optimistic" << endl << "-Constantly quote/misquote sacred text" << endl;
					cout << "-Tolerant(intolerant) of other religions, respect (condemn) worship of other gods" << endl;
					cout << "-Can't live rough do to high treatment of temple elite" << endl << "-Been in temple so long, bad at outside world" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Tradition (Lawful)" << endl << "-Charity (Good)" << endl << "-Change (Chaotic)" << endl;
					cout << "-Power, like rising in the ranks (Lawful)" << endl << "-Faith (Lawful)" << endl;
					cout << "-Aspiration, proving self to your deity (Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Would do anything to recover an ancient relic" << endl << "-Revenge on a corrupt temple heirarchy that called you a heretic" << endl;
					cout << "-Owe life to priest who took you in after parents died" << endl << "-Work for common folk" << endl;
					cout << "-Will do anything to protect your original temple" << endl << "-Preserve sacred text that enemies want to destroy" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Harsh judge of others, harsher to self" << endl << "-Too much trust in people with power in temple" << endl;
					cout << "-Trust anyone who says they believe in my god" << endl << "-Inflexible in thinking" << endl;
					cout << "-Suspicious of strangers, suspect the worst" << endl << "-Once a goal is picked, obsessed with it too much" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "cltn")
				{
					cout << endl << "--CHARLATAN--" << endl;
					cout << "You are great at reading other people, and are essentially a liaison for the black market" << endl;
					cout << "and scam people regularly" << endl;
					cout << "SKILLS: Deception, Sleight of Hand" << endl << "LANGUAGES: None" << endl << "TOOLS: Disguise and forgery kits" << endl;
					cout << "FEATURE: FALSE IDENTITY: You have all official documents, papers, acquaintances set up for a second" << endl;
					cout << "persona. You can assume that persona easily. You can also forge offical documents and personal" << endl;
					cout << "so long as you have seen the type of document or handwriting you wish to copy" << endl;
					cout << "EQUIPMENT: Fine clothes, disguise kit, tools for the con of your choice (i.e. weighted dice, marked cards" << endl;
					cout << "MONEY: Belt pouch, 15gp" << endl;
					cout << endl << "FAVORITE SCAM (d6):" << endl;
					cout << "-Cheat games of chance" << endl << "-Shave coins/forge documents" << endl << "-Prey on weakness to get people's money" << endl;
					cout << "-Regularly change identity" << endl << "-Sleight-of-hand on treet corners" << endl << "-Convince peoplt to buy worthless junk" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Fall in and out of love easily, and am always pursuing someone" << endl << "-I have a joke for everything. Especially where it's innappropriate" << endl;
					cout << "-Use flattery to get what I want" << endl << "-Gambling addict, risk takers" << endl << "-Lie about everything" << endl;
					cout << "-Sarcasm/insults as weapons of choice" << endl << "-Keep multiple holy symbols and invoke whatever deity would work in a situation" << endl;
					cout << "-Kleptomaniac" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Independence (Chaotic)" << endl << "-Fairness, only target people who can afford to lose money (Lawful)" << endl;
					cout << "-Charity, Robin hood (Good)" << endl << "-Creativity (Chaotic)" << endl << "-Friendship, it's magic! (Good)" << endl;
					cout << "-Determined to make something of self (Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Stole from the wrong guy, must work to ensure that you don't cross paths with him" << endl;
					cout << "-Owe everything to mentor, who is probably in jail" << endl << "-I have a child somewhere who doesn't know me. Gotta make the world safe for them" << endl;
					cout << "-Come from noble lineage, must reclaim stolen lands" << endl << "-A powerful guy killed a loved one. Gotta get revenge" << endl;
					cout << "-I stole from someone who didn't deserve it. Gotta work so I can forgive myself" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Can't resist a pretty face" << endl << "-Always in debt, spend earnings on luxury items" << endl;
					cout << "-Convinced you can't be fooled" << endl << "-Too greedy. Will risk everything for more money" << endl;
					cout << "-Can't resist swindling more powerful people" << endl << "-Would run away to save self" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "crmn")
				{
					cout << endl << "--CRIMINAL--" << endl;
					cout << "SKILLS: Deception, Stealth" << endl << "LANGUAGES: none" << endl << "TOOLS: Thieves' tools, a gaming set of your choice" << endl;
					cout << "FEATURE: CRIMINAL CONTACT: You have a liaison to the criminal network. You can use him to send" << endl;
					cout << "messages, even long distance. With this, you know all local messengers, corrupt caravan masters," << endl;
					cout << "and shifty sailors to send the messages" << endl;
					cout << "EQUIPMENT: Crowbar, dark common clothes (with hood)" << endl;
					cout << "MONEY: Belt pouch, 15gp" << endl;
					cout << endl << "CRIMINAL SPECIALTY (d8):" << endl;
					cout << "-Blackmailer" << endl << "-Burglar" << endl << "-Enforcer" << endl << "-Fence" << endl;
					cout << "-Highway robber" << endl << "-Hired Killer" << endl << "-Pickpocket" << endl << "-Smuggler" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Always have contingency plan" << endl << "-Always cool-headed and rational" << endl;
					cout << "-First thing you do in a new place is note all things of value and places to hide them" << endl;
					cout << "-Rather a new friend over a new enemy" << endl << "-Slow to trust, especially with overtly fair people" << endl;
					cout << "-Never tell me the odds! (Don't care abt risk)" << endl << "-Succeptable to reverse psychology" << endl;
					cout << "-Short temper" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Honor, don't steal from other thieves (Lawful)" << endl << "-Freedom (Chaotic)" << endl;
					cout << "-Charity, Robin Hood (Good)" << endl << "-Greed (Evil)" << endl;
					cout << "-People, loyal only to your friends. Everyone else doesn't matter (Neutral)" << endl;
					cout << "-Redemtion, good in everyone (Good)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Trying to pay off a debt to a generous benefactor" << endl << "-Supporting family" << endl;
					cout << "-Steal back something that was stolen from me" << endl << "-Want to be greatest thief of all time" << endl;
					cout << "-Self-redemtion for a terrible crime" << endl << "-Someone I loved died bc my mistake, will make sure it doesn't happen again" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-When I see a valuable, I can only think about how to steal it" << endl;
					cout << "-I choose money over friends" << endl << "-Either forget or ignore plans" << endl;
					cout << "-I have a tell for when I lie" << endl << "-I run away when things go south" << endl;
					cout << "-An innocent person was framed for me. I'm cool with that" << endl;
					cout << endl << "VARIANT: SPY: Same skills, but used under official government order instead of just crime" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "flkh")
				{
					cout << endl << "--FOLK HERO--" << endl;
					cout << "You come from a humble background, but were regarded as a kind of champion back home" << endl;
					cout << "Skills: Animal handling, Survival" << endl << "Languages: None" << endl << "Tools: One type of Artisan's tools, vehicles (land)" << endl;
					cout << "Equipment: Artisan's tools of your choice, shovel, iron pot, common clothes" << endl;
					cout << "Money: Belt pouch, 10gp" << endl;
					cout << endl << "FEATURE: RUSTIC HOSPITALITY" << endl;
					cout << "Can find a place to hide, rest, recuperate among other commoners, unless you've shown yourself to be" << endl;
					cout << "a danger to them. Will shield you from law or others looking for you, but will not risk life for you" << endl;
					cout << endl << "DEFINING EVENT, What makes you a hero (d10):" << endl;
					cout << "-Stood up to tyrant's agents" << endl << "-Saved people from natural disaster" << endl;
					cout << "-Stood alone against big scary monster" << endl << "-Stole from corrupt merchant to help poor" << endl;
					cout << "-Led militia against invading force" << endl << "-Broke into tyrant castle, stole weapons to arm poor" << endl;
					cout << "-Trained peasants to use farm tools as weapons against tyrant" << endl << "-I led a protest against an unpopular decree and got it rescinded" << endl;
					cout << "-A celestial, fey, or similar blessed me or revealed a secret origin" << endl << "-Recruited in a lord's army, rose in ranks and commended for heroism" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Judge by actions, not words" << endl << "-Always willing to help someone in need" << endl;
					cout << "-Accomplish what I set my mind to no matter what" << endl << "-Play fair, like to compromise" << endl;
					cout << "-Confident in abilities and try to give that confidence to party members" << endl << "-Thinking is dumb. More action!" << endl;
					cout << "-Misuse long words to sound smart" << endl << "-Get bored easy. Wanna achieve destiny" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Respect, people deserve it (Good)" << endl << "-Fairness (Lawful)" << endl;
					cout << "-Freedom, get rid of opression (Chaotic)" << endl << "-Might, strong deserve what they can take (Evil)" << endl;
					cout << "-Sincerity, don't be fake (Neutral)" << endl << "-Destiny, nobody steers me from my higher calling (Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Don't know where family is, wanna find them" << endl << "-Worked, love, and will protect the land" << endl;
					cout << "-Proud noble beat me up, will get revenge on any bully I encounter" << endl << "-Tools are symbols of past life. Keep them so I don't forget" << endl;
					cout << "-Protect the weak" << endl << "-Wish my childhood sweetheart came with me" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Tyrant of my home will stop at nothing to get my head" << endl << "-Blind to chance of failure/risk" << endl;
					cout << "-People who knew me as a kid know my dark secret, can't go home" << endl << "-Weakness for vices of city, especially hard liquor" << endl;
					cout << "-Secretly, I think it would be best if I were a tyrant ruling the land" << endl << "-Trust issues" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "glda")
				{
					cout << endl << "--GUILD ARTISAN--" << endl;
					cout << "Skills: Insight, Persuasion" << endl << "Languages: One of your choice" << endl << "Tools: One type of artisan's tools" << endl;
					cout << "Equipment: A set of Artisan tools (your choice), a letter of intro from your guild, traveler's" << endl;
					cout << "clothes" << endl << "Money: Belt pouch, 15gp" << endl;
					cout << "FEATURE: GUILD MEMBERSHIP" << endl;
					cout << "You start on good standing with the guild. Guild members will help you do lodging and food" << endl;
					cout << "Guilds often have political power, and will help defend you in a case if there is a case to" << endl;
					cout << "be made or if the crime is justifiable. Also, while in good standing w/ the guild, you can" << endl;
					cout << "get access to political figures. To stay in good standing, there is a monthly 5gp due. You" << endl;
					cout << "can be a bit late, but must pay back all dues to stay in guild good graces." << endl;
					cout << endl << "GUILD BUSINESS, what the guild is made of (d20):" << endl;
					cout << "-Alchemists, apocetharies" << endl << "-Armorers, locksmiths, finesmiths" << endl << "-Brewers, distillers, vinters" << endl;
					cout << "-Calligraphers, scribes, scriveners" << endl << "-Carpenters, roofers, plasterers" << endl << "-Cartographers, surveyors, chart-makers" << endl;
					cout << "-Cobblers, shoemakers" << endl << "-Cooks, bakers" << endl << "-Glassblowers, glaziers" << endl << "-Jewelers, gemcutters" << endl;
					cout << "-Leatherworkers, skinners, tanners" << endl << "-Masons, stonecutters" << endl << "-Painters, limners, sign-makers" << endl;
					cout << "-Potters, tilemakers" << endl << "-Shipwrights, sailmakers" << endl << "-Smiths, metal-forgers" << endl;
					cout << "-Tinkers, pewterers, casters" << endl << "-Wagonmakers, wheelwrights" << endl << "-Weavers, dyers" << endl;
					cout << "-Woodcarvers, coopers, and bowyers" << endl << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-You're a perfectionist" << endl << "-An art snob" << endl << "-Always want to know how stuff works, what makes people tick" << endl;
					cout << "-Aphorisms and proverbs for every occasion" << endl << "-Rude to people who aren't as committed to hard work and fair play as you" << endl;
					cout << "-Like to talk about your profession" << endl << "-Don't like to buy expensive, will haggle" << endl;
					cout << "-Well known, want to be appreciated. Taken aback when not recognized" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Community (Lawful)" << endl << "-Generosity (Good)" << endl << "-Freedom, like to pursue your own livlihood (Chaotic)" << endl;
					cout << "-Greed (Evil)" << endl << "-People, not commited to ideals (Neutral)" << endl << "-Want to be best at your craft (Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Workshop where you learned trade is important to you" << endl << "-Created something great for someone unworthy, looking for a worthy person" << endl;
					cout << "-Owe debt to guild for making me a better person" << endl << "-Want money to get someone's love" << endl;
					cout << "-Will prove to guild that you're the greatest artisan" << endl << "-Revenge on whoever ruined your business/place of trade" << endl;
					cout << endl << "FLAW (d6)" << endl;
					cout << "-Will do anything to get something rare/priceless" << endl << "-Quick to assume I'm being bamboozled" << endl;
					cout << "-Gotta be sure nobody knows I stole money from guild" << endl << "-Never satisfied, need mooore" << endl;
					cout << "-Would kill for a noble title" << endl << "-Jealous of anyone better, rivals everywhere" << endl;
					cout << "VARIANT: GUILD MERCHANT" << endl;
					cout << "Your guild is shopkeeps and travelling merchants, so instead of proficiency with artisan tools," << endl;
					cout << "be proficient in navigator's tools or an extra language. Instead of starting with artisan tools," << endl;
					cout << "start with a cart and mule" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "entr")
				{
					cout << endl << "--ENTERTAINER--" << endl;
					cout << "You're a performer. A popular one at that" << endl;
					cout << "SKILLS: Acrobatics, Performance" << endl << "LANGUAGES: None" << endl << "TOOLS: Disguise kit, one kind of music instrument" << endl;
					cout << "EQUIPMENT: Costume, trinket (Gift from a fan), musical instrument of choice\nMoney: Belt pouch, 15gp" << endl;
					cout << "FEATURE: BY POPULAR DEMAND: You can always find somewhere to perform (usually a tavern or inn)." << endl;
					cout << "At such places, you get free food and housing, of modest or comfortable standard (depends on the" << endl;
					cout << "venue), so long as you perform every night. Strangers recognize (and usually like) you in any town" << endl;
					cout << "where you have previously performed" << endl;
					cout << endl << "ENTERTAINER ROUTINE (d10):" << endl;
					cout << "-Actor" << endl << "-Dancer" << endl << "-Fire-eater" << endl;
					cout << "-Jester" << endl << "-Juggler" << endl << "-Instrumentalist" << endl << "-Poet" << endl;
					cout << "-Singer" << endl << "-Storyteller" << endl << "-Tumbler" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-I have a story for everything" << endl << "-In a new place, collect local rumors and spread gossip" << endl;
					cout << "-Hopeless Romantic" << endl << "-Nobody stays angry at me b/c I diffuse tension" << endl;
					cout << "-I love a good insult, even if it's at me" << endl << "-Get mad whenI'm not the center of attention" << endl;
					cout << "-Perfectionist" << endl << "-Change mood/mind on a whim" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Beauty (Good)" << endl << "-Tradition, like telling old stories (Lawful)" << endl;
					cout << "-Creativity (Chaotic)" << endl << "-Greed (Evil)" << endl << "-People, I only care about making people happy when I perform (Neutral)" << endl;
					cout << "-Honesty, Art reflects the soul (Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-I love my instrument, it reminds me of a loved one" << endl << "-Someone stole my precious instrument, gotta get it back" << endl;
					cout << "-I wanna be famous, will do whatever it takes" << endl << "-Idolize a hero of old, compare self to them" << endl;
					cout << "-Will do anything to be better than hated rival" << endl << "-Would do anything for members of my old troupe" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Will do anything for fame/renown" << endl << "-Sucker for a pretty face" << endl;
					cout << "-A scandal prevents me from going home. That kind of stuff happens often" << endl;
					cout << "-Once satirized a noble who is now out for my head. Will probably do it again" << endl;
					cout << "-Trouble equivocating opinion. Sharp tongue gets me in trouble" << endl;
					cout << "-Despite best efforts, I am unreliable to my friends" << endl;
					cout << endl << "VARIANT: GLADIATOR" << endl;
					cout << "Your By Popular Demand lets you perform fighting at arenas and underground fight" << endl;
					cout << "clubs. Also, replace the musical instrument in your equipment pack with an inexpensive" << endl;
					cout << "but unusual weapon, like a trident or net" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "hrmt")
				{
					cout << endl << "--HERMIT--" << endl;
					cout << "Lived in seclusion, perhaps for research or monastic reasons, and travelled around" << endl;
					cout << "SKILLS: Medicine, Religion" << endl << "TOOLS: Herbalism kit" << endl << "LANGUAGES: One of your choice" << endl;
					cout << "EQUIPMENT: Scroll case stuffed with notes & prayers, winter blanket, common clothes, herbalism" << endl;
					cout << "kit" << endl << "Money: Belt pouch with 5gp" << endl;
					cout << "FEATURE: DISCOVERY" << endl;
					cout << "Research and prayer during your hermitage gave you a unique, powerful discovery about the" << endl;
					cout << "world, the multiverse, or any plane. Talk to your DM to figure out the nature of your discovery" << endl;
					cout << "and its effect on the campaign" << endl;
					cout << "REASON FOR SECLUSION (d8):" << endl;
					cout << "-Spiritual enlightenment" << endl << "-Communal living b/c religious order said so" << endl;
					cout << "-Exiled after being framed" << endl << "-Retreat after live-altering event" << endl;
					cout << "-Needed quiet place to work on art, writing, etc." << endl << "-Needed to commune with nature far from civilization" << endl;
					cout << "-Caretaker of an ancient ruin or relic" << endl << "-Pilgrim in search of a person, place, or relic of spiritual signigicance" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Isolated for so long, rarely speak" << endl << "-Completely calm, even in disaster" << endl;
					cout << "-Leader of community had something wise for every situation, want to share that wisdom" << endl << "-Huge empathy for suffering people" << endl;
					cout << "-Oblivious to etiquette" << endl << "-Connect everything to some grand, cosmic plan" << endl;
					cout << "-Often get lost in thoughts, oblivious to surroundings" << endl << "-Working on philosophical theory, like to share ideas" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Greater Good (Good)" << endl << "-Logic over emotion (Lawful)" << endl;
					cout << "-Free Thinking, curiosity breeds progress (Chaotic)" << endl << "-Power, solitude gets me mystical power (Evil)" << endl;
					cout << "-Live and Let Live (Neutral)" << endl << "-Self-Knowledge, if you know yourself you need to know nothing else (Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Nothing more important than other members of hermitage" << endl << "-Seclusion to hide from those hunting me. Gotta face them someday" << endl;
					cout << "-Still seeking enlightenment from seclusion, it still eludes me" << endl << "-Entered seclusion b/c loved someone I couldn't have" << endl;
					cout << "-If my discovery came to light, could ruin the world" << endl << "-Isolation gave me insight into an evil only I can destroy" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Now back in society, enjoy its delights too much" << endl << "-Harbor dark, bloodthirsty thoughts my meditation didn't quell" << endl;
					cout << "-Dogmatic in thoughts and philosophy" << endl << "-Need to win arguments overshadows friendships" << endl;
					cout << "-Would risk too much to get lost knowledge" << endl << "-Like to keep secrets, won't share them with anyone" << endl;
					goto bckgrnd;
 				}

				else if (bckgrnd == "nobl")
				{
					cout << endl << "--NOBLE--" << endl;
					cout << "You're a noble. 'Nuff said" << endl;
					cout << "SKILLS: History, persuasion" << endl << "LANGUAGES: One of your choice" << endl << "TOOLS: One type of gaming set" << endl;
					cout << "EQUIPMENT: A set of fine clothes, signet ring, scroll of pedigree" << endl << "MONEY: Belt pouch with 25gp" << endl;
					cout << "FEATURE: POSITION OF PRIVELAGE" << endl;
					cout << "You're welcome in high society. The elites accept you, commoners try to please you (mostly out of fear)" << endl;
					cout << "and you can get an audience with a local noble if need be" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Eloquent flattery makes people you talk to feel awesome" << endl << "-Common folk love me for kindness and generosity" << endl;
					cout << "-Anyone who looks at me knows I'm a cut above the rest" << endl << "Take pains to look the best and stay up-to-date in fashion" << endl;
					cout << "-Don't get hands dirty, gotta be in comfy accomodations" << endl << "-Don't place self above the commoners" << endl;
					cout << "-Once you lose my favor, it gone forever" << endl << "-If you mess with me, I will destroy you, your family, and your bloodline" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Respect, everyone deserves it (Good)" << endl << "-Responsibility, adhere to the hierarchy (Lawful)" << endl;
					cout << "-Independence, no need to be supported by family (Chaotic)" << endl << "-Power, so I can do whatever I want (Evil)" << endl;
					cout << "-Family, is important (Any)" << endl << "-Noblesse Oblige (Good)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Will face anything for family approval" << endl << "-Must sustain relationship between my family and another at all costs" << endl;
					cout << "-Nothing's more important than family" << endl << "-Romeo and Juliet situation" << endl;
					cout << "-Loyalty to soverign is unwavering" << endl << "-Gotta appear like a hero of the people to commoners" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Secretly believe I'm better than everyone" << endl << "-Hide a scandalous secret that could ruin my family" << endl;
					cout << "-Too often hear subtle insults at me, and short temper" << endl << "-Insatiable desire for carnal pleasure" << endl;
					cout << "-In fact, the world does revolve around me" << endl << "-My words/actions bring shame to my family" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "otln")
				{
					cout << endl << "--OUTLANDER--" << endl;
					cout << "You live on the land, far from any civilization. Imagine a Native American" << endl;
					cout << "Skills: Athletics, Survival" << endl << "Languages: One of your choice" << endl << "Tools: One type of music instrument" << endl;
					cout << "Equipment: A staff, hunting trap, trophy from animal you killed, traveler's clothes" << endl;
					cout << "Money: Belt Pouch, 10gp" << endl;
					cout << endl << "FEATURE- WANDERER:" << endl;
					cout << "Perfect memory for maps and landscapes that you've seen before. Also, you can find food" << endl;
					cout << "and fresh water for you and up to 5 others each day, provided that the necessary things" << endl;
					cout << "are there, like water, berries, or small game" << endl;
					cout << endl << "ORIGIN (d10):" << endl;
					cout << "-Forester" << endl << "-Trapper" << endl << "-Homesteader" << endl << "-Guide" << endl;
					cout << "-Exile/outcast" << endl << "-Bounty hunter" << endl << "-Pilgrim" << endl << "-Tribal nomad" << endl;
					cout << "-Hunter gatherer" << endl << "-Tribal marauder" << endl;
					cout << endl << "Personality Trait (d8)" << endl;
					cout << "-Driven by wanderlust that led me from home" << endl << "-Watch over friends as if they were newborn pups" << endl;
					cout << "-Once ran 25 miles to warn my tribe of an orc horde, would do it again" << endl << "-Have a lesson from nature for every situartion" << endl;
					cout << "-No stock in wealthy. Manners don't save you from bears" << endl << "-Always picking stuff up,fiddling with it, and sometimes accidentally breaking it" << endl;
					cout << "-More comfortable with animals than people" << endl << "-I was literally raised by wolves" << endl;
					cout << endl << "Ideal (d6):" << endl;
					cout << "-Change, life is like seasons (Chaotic)" << endl << "-Greater good (good)" << endl;
					cout << "-Honor (Lawful)" << endl << "-Might, strong should rule (Evil)" << endl;
					cout << "-Nature > civilization (Neutral)" << endl << "-Glory in battle for self and clan(Any)" << endl;
					cout << endl << "Bond (d6):" << endl;
					cout << "-Family or tribe is most important" << endl << "-An injury to the wilderness is an injury to me" << endl;
					cout << "-Will bring wrath to evildoers who desecrated homeland" << endl << "-Last of my tribe, will put their names in legend" << endl;
					cout << "-Suffer visions of coming disaster, need to prevent" << endl << "-Duty to provide children to sustain my tribe" << endl;
					cout << endl << "Flaw (d6):" << endl;
					cout << "-Like ale and other intoxicants too much" << endl << "-No room for caution in a full life" << endl;
					cout << "-I remember all insults and have a silent grudge to everyone who's wronged me" << endl;
					cout << "-Slow to trust other tribes, people, societies" << endl << "-Violence is always the answer";
					cout << "-Darwinism. I won't save anyone who can't save themselves" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "sage")
				{
					cout << endl << "--SAGE--" << endl;
					cout << "You're a scientist, researcher, etc. Big ol wise man" << endl;
					cout << "Skills: Arcana, History" << endl << "Languages: 2 of your choice" << endl << "Tools: none" << endl;
					cout << "Equipment: Bottle of black ink, quill, small knife, letter from dead colleague with a" << endl;
					cout << "question you've yet to answer, common clothes" << endl << "Money: Belt pouch, 10gp" << endl;
					cout << "Feature- Researcher:" << endl;
					cout << "When looking for a piece of information, you pretty much always know how to find it." << endl;
					cout << "You know who to ask or where to go to find the information, if it can be found" << endl;
					cout << endl << "Specialty (d8):" << endl;
					cout << "-Alchemist" << endl << "-Astronomer" << endl << "-Discredited academic" << endl << "-Librarian" << endl;
					cout << "-Professor" << endl << "-Researcher" << endl << "-Wizard apprentice" << endl << "-Scribe" << endl;
					cout << endl << "Personality trait (d8):" << endl;
					cout << "-I use big words to sound smart" << endl << "-I've read every book in tha great libraries (or just like to say that I have" << endl;
					cout << "-I'm used to explaining things, and am a patient tutor" << endl << "-I love a good mystery" << endl;
					cout << "-Listen to every side of an argument before deciding" << endl << "-I speak slowly to people dumber than me (almost everyone)" << endl;
					cout << "-Socially awkward" << endl << "-Convinced people are trying to steal my secrets" << endl;
					cout << endl << "Ideal (d6):" << endl;
					cout << "-Knowledge (Neutral)" << endl << "-Beauty (Good)" << endl << "-Logic (Lawful)" << endl;
					cout << "-No limits (Chaotic)" << endl << "-Power (Evil)" << endl << "-Self-Improvement (Any)" << endl;
					cout << endl << "Bond (d6):" << endl;
					cout << "-Must protect my students" << endl << "-I have an ancient text that mustn't fall to wrong hands" << endl;
					cout << "-Preserve a monastery, library, etc" << endl << "-My life's work is a series of tomes in a subject" << endl;
					cout << "-Searching for the answer to a question" << endl << "-Sold soul for knowledge, must win it back" << endl;
					cout << endl << "Flaw (d6):" << endl;
					cout << "-Easily distracted by opportunity for knowledge" << endl << "-Most people run from a demon. I stop and take notes on its anatomy" << endl;
					cout << "-Unlocking an ancient mystery > a civilization" << endl << "-Overlook obvious solutions" << endl;
					cout << "-Speak without thought, invariably insulting people" << endl << "-Can't keep a secret to save my life, or someone else's" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "solr")
				{
					cout << endl << "--SOLDIER--" << endl;
					cout << "You were raised by war" << endl;
					cout << "Skills: Athletics, Intimidation" << endl << "Languages: None" << endl << "Tools: One type of gaming set, Vehicles(Land)" << endl;
					cout << "Equipment: Insignia of rank, trophy from fallen enemy, bone dice OR deck of cards, common clothes" << endl << "Money: 10gp, belt pouch" << endl;
					cout << endl << "Feature - Military Rank:" << endl;
					cout << "Your rank is still recognized in your old military. You can use it to procure supplies and" << endl;
					cout << "can usually find a place to sleep at a friendly encampment or fort which recognizes your rank" << endl;
					cout << endl << "SPECIALTY (d8):" << endl;
					cout << "-Officer\n-Scout\n-Infantry\n-Cavalry\n-Healer\n-Quartermaster\n-Standard Bearer\n-Support staff" << endl;
					cout << endl << "PERSONALITY (d8):" << endl;
					cout << "-Polite/respectful\n-PTSD\n-Lost friends, slow to make them\n-Know tales from experience relevant to all situations" << endl;
					cout << "-Iron will\n-Strong, likes to break things\n-Crude humor\n-Face problems head on" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Greater good(Good)\n-Responsibility(Lawful)\n-Independence(Chaotic)\n-Might = right(Evil)\n-Live and Let Live(Neutral)\n-Nation(Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Would do anything for old battle buds\n-Nobody left behind, bc I was saved\n-HONOR\n-Will never forget a defeat or the enemies from it" << endl;
					cout << "-Fight for the man next to you\n-Defend the weak" << endl;
					cout << "FLAW (d6):" << endl;
					cout << "-PTSD from a monster\n-No respect for weak\n-Made a mistake which cost lives, keep secret\n-No mercy for enemies" << endl;
					cout << "-Obey law, no matter how unjust" << endl << "-Mega stubborn" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "sail")
				{
					cout << endl << "--SAILOR--" << endl;
					cout << "You be a man of the sea" << endl;
					cout << "Skills: Athletics, Perception\nTools: Navigator's tools, Vehicles(Water)\nLanguages: none" << endl;
					cout << "Equipment: Belaying Pin (club), 50ft silk rope, lucky charm(trinket), set of common clothes\nMoney: belt puch, 10gp" << endl;
					cout << "FEATURE - SHIP'S PASSAGE:" << endl;
					cout << "You can usually find free passage on a ship (friendly with captain, your former vessel, etc.) as" << endl;
					cout << "a favor from its captain. Because is favor, route may not meet all needs, and you and companions" << endl;
					cout << "will need to help the crew on the voyage" << endl;
					cout << "\nPERSONALITY TRAIT (d8):" << endl;
					cout << "-Known as reliable\n-Work hard to play hard\n-Enjoy sailing to new places and making friends in tavern\n-Stretch truth for story" << endl;
					cout << "-Tavern brawl good way to learn new city\n-Never pass friendly wager\n-Foul language\n-Likes job well done, especially when making someone else do it" << endl;
					cout << "\nIDEAL (d6):" << endl;
					cout << "-Respect makes world go(Good)\n-Fairness(Lawful)\n-Freedom(Chaotic)\n-Mastery/Be a predator on the seas(Evil)" << endl;
					cout << "-People, committed to crewmates(Neutral)\n-Aspiration: own me own ship (Any)" << endl;
					cout << "\nBOND (d6):" << endl;
					cout << "-Captain first\n-Ship first\n-Always remember me firstship\n-Branndy's eyes nearly stole me from the sea" << endl;
					cout << "-Cheated out of my fair share of profit, want revenge\n-Pirates killed all me shipmates, left me to die. Revenge time" << endl;
					cout << endl <<"FLAW (d6):" << endl;
					cout << "-Will follow orders, even if wrong\n-Will say anything to avoid extra work\n-Nobody. Calls. Me. Chicken." << endl;
					cout << "-Can't stop drinking once I start\n-Klepto\n-Pride will come before fall" << endl;
					cout << endl << "VARIANT SAILOR: PIRATE" << endl;
					cout << "You were raised by a pirates, so you're more swashbuckly than your average sailor. You can also choose to have" << endl;
					cout << "a feature other than Ship's Passage." << endl;
					cout << "VARIANT FEATURE - BAD REPUTATION:" << endl;
					cout << "People are scared of you, so in a civilized area you can get away with minor crimes (Dine and dash, breaking" << endl;
					cout << "doors, etc), and people will not report you" << endl;
					goto bckgrnd;
				}
				
				else if (bckgrnd == "urch")
				{
					cout << endl << "--URCHIN--" << endl;
					cout << "Grew up on these streets alone" << endl;
					cout << "Skills: Sleight of hand, Stealth\nTools: Disguise kit, thieves tools\nLanguages: none" << endl;
					cout << "Equipment: Small knife, map of home city, pet mouse, a token to rember parents, common clothes" << endl;
					cout << "Money: belt pouch, 10gp" << endl;
					cout << "Feature - City Secrets:" << endl;
					cout << "You can find backstreets in cities, allowing you and companions to move twice as fast as your" << endl;
					cout << "normal speed would allow while in a city" << endl;
					cout << endl << "PERSONALITY TRAIT (d8):" << endl;
					cout << "-Hide food and trinkets in pockets\n-Ask lots of questions\n-Like to squeeze into small places\n-Sleep with back to a surface and belongings in hand" << endl;
					cout << "-Eat a lot, no manners\n-Don't think nice people are duplicitous\n-No bath\n-Bluntly say what people are hinting" << endl;
					cout << endl << "IDEAL (d6):" << endl;
					cout << "-Respect for all(Good)\n-Community(Lawful)\n-Change, robin hood style (Chaotic)" << endl;
					cout << "-Retribution: bring the rich down to our level (Evil)\n-People, those who help me (Neutral)\n-Aspiration: prove I deserve a good life(Any)" << endl;
					cout << endl << "BOND (d6):" << endl;
					cout << "-Will fight to defend hometown\n-I sponsor an orphanage\n-Owe survival to another urchin who taught me to live on street" << endl;
					cout << "-Owe an unrepayable debt to person who took pity on me\n-Escaped poverty by robbing famous person, now I'm wanted\n-No one else should have to go through what I have" << endl;
					cout << endl << "FLAW (d6):" << endl;
					cout << "-Will run if outnumbered\n-Greedy\n-Trust issues\n-Rather kill in sleep than fight fair\n-It's not stealing if I need it\n-People who can't take care of self get what they deserve" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "cstm")
				{
					cout << endl << "--MAKING A CUSTOM BACKGROUND--" << endl;
					cout << "Pick a background you think your character should be able to have, and come up with a" << endl;
					cout << "feature related to it. Next, give it up to two skill/tool proficiencies that the background" << endl;
					cout << "you want would logically have. Then, pick up to two languages that the background you want" << endl;
					cout << "would logically have allowed your character to learn. Finally, ask your DM for approval!" << endl;
					goto bckgrnd;
				}

				else if (bckgrnd == "exit")
				{
					cout << endl;
					goto rference;
				}

				else
				{
					cout << endl << "You entered something wrong" << endl;
					goto bckgrnd;
				}
			}

			//equipment reference
			else if (begun == "equipment")
			{
				cout << "--EQUIPMENT REFERENCE AREA--" << endl;
				cout << "THIS AREA IS STILL UNDER CONSTRUCTION" << endl;
				goto rference;
			}

			else if (begun == "list")
			{
				cout << "Your options are 'class', 'race', 'background', 'equipment','decision' and 'rng'. RNG is a dice roller" << endl << "'decision' is a magic 8 ball" << endl << endl;
				goto rference;
			}

			// Dice roller
			//
			else if (begun == "rng")
			{
				dice:
				cout << endl << "What kind of die would you like to roll? (d4, d6, d8, d10, d12, d20, or d100) " << endl;
				cout << "A side option is 'stat', an ability score roll (takes 4 seconds)" << endl;
				cin >> dice;

				if (dice == "d6")
				{
					int d6;
					d6 = diceRoll(6);
					cout << endl << "You rolled a " << d6 << "." << endl;
					goto dice;
				}

				else if (dice == "d4")
				{
					int d4;
					d4 = diceRoll(4);
					cout << endl << "You rolled a " << d4 << "." << endl;
					goto dice;
				}

				else if (dice == "d8")
				{
					int d8;
					d8 = diceRoll(8);
					cout << endl << "You rolled a " << d8 << "." << endl;
					goto dice;
				}

				else if (dice == "d10")
				{
					int d10;
					d10 = diceRoll(10);
					cout << "You rolled a " << d10 << "." << endl;
					goto dice;
				}

				else if (dice == "d12")
				{
					int d12;
					d12 = diceRoll(12);
					cout << endl << "You rolled a " << d12 << "." << endl;
					goto dice;
				}

				else if (dice == "d20")
				{
					int d20;
					d20 = diceRoll(20);
					cout << endl << "You rolled a " << d20 << "." << endl;
					goto dice;
				}

				else if (dice == "d100")
				{
					int d100;
					d100 = diceRoll(100);
					cout << endl << "You rolled a " << d100 << "." << endl;
					goto dice;
				}

				else if (dice == "stat")
				{
					int droll;
					droll = statRoll();
					cout << "You rolled a " << droll << " for this stat." << endl;
					goto dice;
				}

				else if (dice == "exit")
				{
					cout << endl;
					goto rference;
				}

				else
				{
					cout << endl << "You typed something wrong. Watch your numbers. Type 'd<number>' for the die you want" << endl;
					cout << "where <number> is which die it is" << endl;
					goto dice;
				}
			}

			else if (begun == "create")
			{
				int stat1, stat2, stat3, stat4, stat5, stat6;
				cout << endl << "--CHARACTER CREATION APP--" << endl;
				cout << "You will be taken through a series of questions, which will eventually place a text file" << endl;
				cout << "on your Desktop containing the character you just created. While the process is being" << endl;
				cout << "started, there will be stops for about 4 seconds while your stats are being rolled." << endl;
				stat1 = statRoll();
				cout << endl << "To start, you need to input the User that you are (the name of your folder in the Users folder)" << endl;
				cin >> x;
				stat2 = statRoll();
				cout << endl << "What are you going to name this character?" << endl;
				getline(cin, y);
				getline(cin, y);
				stat3 = statRoll();
				cout << "What subheading would you like for this character? (Something to distinguish it by other than the name)" << endl;
				cout << "(no spaces)" << endl;
				cin >> z;
				stat4 = statRoll();
				ofstream outfile("C:\\Users\\" + string(x) + "\\Desktop\\" + string(y) + "-" + string(z), ios::out);
				cout << endl << "Please allow up to 10 seconds while the file is created..." << endl;
				stat5 = statRoll();
				Sleep(1500);
				stat6 = statRoll();

				cout << endl << "All of your stats are now rolled. If you would like to type in your own stat rolls, " << endl;
				cout << "you may type [r]olled. Type [c]ontinue to accept the rolls you were given." << endl;
				cout << "For reference, your stat rolls were: " << stat1 << ", " << stat2 << ", " << stat3 << ", " << stat4 << ", " << stat5 << ", and " << stat6 << "." << endl;
				cout << endl << "Would you like to input rolls? " << endl;
				cin >> opt;

				if (opt[0] == 'r' || opt[0] == 'R')
				{
					cout << "Enter yur six stats. Please hit the ENTER key after typing each stat and remember" << endl;
					cout << "that your maximum at this point is 18." << endl;
					createrolls:
					cout << "Enter your rolls now: " << endl;
					cin >> stat1;
					cin >> stat2;
					cin >> stat3;
					cin >> stat4;
					cin >> stat5;
					cin >> stat6;
					cout << "You chose the stat rolls: " << stat1 << ", " << stat2 << ", " << stat3 << ", " << stat4 << ", " << stat5 << ", and " << stat6 << "." << endl;
					cout << "Would you like to [c]hoose again or [k]eep going?" << endl;
					cin >> x;
					if (x[0] == 'c' || x[0] == 'C') goto createrolls;
					else goto createvectors;
				}

				//the following list is from least to greatest out of the rolls
				//
				createvectors:
				int firstStat, secondStat, thirdStat, fourthStat, fifthStat, sixthStat;

				//Sort the rolls into a vector
				//
				vector<int> stats;
				stats.push_back(stat1);
				stats.push_back(stat2);
				stats.push_back(stat3);
				stats.push_back(stat4);
				stats.push_back(stat5);
				stats.push_back(stat6);

				sort(stats.begin(), stats.end());

				sixthStat = stats.at(0);
				fifthStat = stats.at(1);
				fourthStat = stats.at(2);
				thirdStat = stats.at(3);
				secondStat = stats.at(4);
				firstStat = stats.at(5);
				
				//create the variables that will be used for the following questions
				string Class, Race, Subrace, backg, equip, name, align, player, subclass;
				int Str, Int, Wis, Cha, Dex, Con, exp;
				int lvl = 1;
				int extra = 0;
				bool variant = false;

				//begin the real creation process
				cout << "What is your first name? ";
				cin >> player;

				outfile << "Player: " << player << endl << "---------------------------" << endl;

				cout << "Please re-enter the name you chose for your character: ";
				cin >> name;

				outfile << "Name: " << name << endl;

				cout << endl << "Enter your character's Alignment: ";
				getline(cin, align);
				getline(cin, align);

				outfile << "Alignment: " << align << endl;

				cout << endl << "How much Exp are you starting with? ";
				cin >> exp;
				
				//check what level the player should be
				if (exp >= 300) lvl += 1;
				if (exp >= 900) lvl += 1;
				if (exp >= 2700) lvl += 1;
				if (exp >= 6500) lvl += 1;
				if (exp >= 14000) lvl += 1;
				if (exp >= 23000) lvl += 1;
				if (exp >= 34000) lvl += 1;
				if (exp >= 48000) lvl += 1;
				if (exp >= 64000) lvl += 1;
				if (exp >= 85000) lvl += 1;
				if (exp >= 100000) lvl += 1;
				if (exp >= 120000) lvl += 1;
				if (exp >= 140000) lvl += 1;
				if (exp >= 165000) lvl += 1;
				if (exp >= 195000) lvl += 1;
				if (exp >= 225000) lvl += 1;
				if (exp >= 265000) lvl += 1;
				if (exp >= 305000) lvl += 1;
				if (exp >= 355000) lvl += 1;

				pclass:
				cout << endl << "Enter your class (capitalize first letter): ";
				cin >> Class;

				//sort the stat rolls into ability scores
				outfile << "Class/Level: ";
				if (Class != "Fighter" && Class != "Rogue")
				{
					cout << endl << "Your reccomended race is:" << endl;
				}

				if (Class == "Barbarian")
				{
					Str = firstStat;
					Con = secondStat;
					Cha = thirdStat;
					Dex = fourthStat;
					Wis = fifthStat;
					Int = sixthStat;

					if (lvl >= 3) {
						cout << "You need to choose a Primal Path. Your options are: " << endl;
						ppath:
						cout << "Berserker (brsk) or Totem warrior (totm)" << endl;
						cin >> subclass;

						if (subclass == "brsk") outfile << "Berserker ";
						else if (subclass == "totm") outfile << "Totem Warrior ";
						else {
							cout << endl << "You entered something wrong" << endl;
							goto ppath;
						}
					}

					cout << "Half-Orc, Goliath, Dwarf (Mountain)" << endl;
				}

				else if (Class == "Bard")
				{
					Cha = firstStat;
					Dex = secondStat;
					Con = thirdStat;
					Wis = fourthStat;
					Str = fifthStat;
					Int = sixthStat;

					if (lvl >= 3) {
						cout << "You need to choose a Bard College. Your options are: " << endl;
						pcleg:
						cout << "Valor (valr), Lore (lore), Whispers (wspr)" << endl;
						cin >> subclass;

						if (subclass == "valr") outfile << "Valor ";
						else if (subclass == "lore") outfile << "Lore ";
						else if (subclass == "wspr") outfile << "Whisper ";
						else {
							cout << endl << "You entered something wrong" << endl;
							goto pcleg;
						}
					}

					cout << "Tiefling, Aasimar(Fallen)(Only if Valor Bard), Halfling(Lightfoot), Half-elf, Elf(Drow)" << endl;
				}

				else if (Class == "Cleric")
				{
					Wis = firstStat;
					Dex = secondStat;
					Con = thirdStat;
					Cha = fourthStat;
					Str = fifthStat;
					Int = sixthStat;

					pddom:
					cout << "You need to choose a Divine Domain. Your options are:" << endl;
					cout << "Death - deth" << endl << "Knowledge - kldg" << endl << "Life - life" << endl << "Light - lght" << endl;
					cout << "Nature - ntur" << endl << "Tempest - tmps" << endl << "Trickery - trik" << endl;
					cout << "War - war" << endl;
					cin >> subclass;
					
					if (subclass == "deth") outfile << "Death ";
					else if (subclass == "kldg") outfile << "Knowledge ";
					else if (subclass == "life") outfile << "Life ";
					else if (subclass == "lght") outfile << "Light ";
					else if (subclass == "ntur") outfile << "Nature ";
					else if (subclass == "tmps") outfile << "Tempest ";
					else if (subclass == "trik") outfile << "Trickery ";
					else if (subclass == "war") outfile << "War ";
					else {
						cout << endl << "You entered something wrong" << endl;
						goto pddom;
					}

					cout << "Aasimar(Protector), Tortle, Dwarf(Hill)" << endl;
				}

				else if (Class == "Druid")
				{
					Wis = firstStat;
					Dex = secondStat;
					Con = thirdStat;
					Cha = fourthStat;
					Int = fifthStat;
					Str = sixthStat;

					cout << "Dwarf(Hill), Elf(Wood)" << endl;

					if (lvl >= 2) {
						pdridcrc:
						cout << endl << "You need to pick a Druidic Circle. Options are 'land' and 'moon'" << endl;
						cin >> subclass;

						if (subclass == "land") outfile << "Land ";
						else if (subclass == "moon")outfile << "Moon ";
						else {
							cout << endl << "You typed something wrong" << endl;
							goto pdridcrc;
						}
					}
				}

				else if (Class == "Fighter")
				{
					cout << endl << "Will you be [R]anged or [M]elee?" << endl;
					cin >> x;
					cout << endl << "Do you plan on being an Eldritch Knight? (y/n)" << endl;
					cin >> y;
					
					cout << endl << "Your reccomended race is:" << endl;

					if (y[0] == 'y' || y[0] == 'Y' && x[0] == 'M' || x[0] == 'm')
					{
						Str = firstStat;
						Int = secondStat;
						Con = thirdStat;
						Cha = fourthStat;
						Dex = fifthStat;
						Wis = sixthStat;

						cout << "Elf(High)" << endl;
					}

					if (y[0] == 'y' || y[0] == 'Y' && x[0] == 'R' || x[0] == 'r')
					{
						Dex = firstStat;
						Int = secondStat;
						Con = thirdStat;
						Cha = fourthStat;
						Str = fifthStat;
						Wis = sixthStat;

						cout << "Elf(High)" << endl;
					}

					if (y[0] == 'n' || y[0] == 'N' && x[0] == 'M' || x[0] == 'm')
					{
						Str = firstStat;
						Con = secondStat;
						Dex = thirdStat;
						Cha = fourthStat;
						Wis = fifthStat;
						Int = sixthStat;

						cout << "Half-orc, Dwarf(Mountain), Goliath, Halfling(Stout)" << endl;
					}

					if (y[0] == 'n' || y[0] == 'N' && x[0] == 'R' || x[0] == 'r')
					{
						Dex = firstStat;
						Con = secondStat;
						Str = thirdStat;
						Cha = fourthStat;
						Wis = fifthStat;
						Int = sixthStat;

						cout << "Elf(Wood), Dwarf(Hill)" << endl;
					}

					if (y[0] == 'n' && lvl >= 3) {
						pmarc:
						cout << "You need to choose a subclass. Options are Champion (cmpn) and Battle Master (bmas)" << endl;
						cout << "Subclass: ";
						cin >> subclass;

						if (subclass != "cmpn" && subclass != "bmas") {
							cout << endl << "you entered something wrong" << endl;
							goto pmarc;
						}
					}

					else if (y[0] == 'y' && lvl >= 3) subclass = "ekni";

					if (subclass == "cmpn") outfile << "Champion ";
					else if (subclass == "bmas") outfile << "Battle Master ";
					else if (subclass == "ekni") outfile << "Eldritch Knight ";
				}

				else if (Class == "Monk")
				{
					Dex = firstStat;
					Wis = secondStat;
					Con = thirdStat;
					Cha = fourthStat;
					Int = fifthStat;
					Str = sixthStat;

					cout << "Elf(Wood)" << endl;

					if (lvl >= 3) {
						cout << endl << "You need to choose a subclass. Options are: " << endl;
						cout << "-Way of the Open Hand - 'hand'" << endl << "-Way of Shadow - 'shad'" << endl;
						cout << "-Way of the Four Elements - 'lmns'" << endl;
						pmtra:
						cout << "Enter subclass:";
						cin >> subclass;
						if (subclass == "hand") outfile << "Open Hand ";
						else if (subclass == "shad") outfile << "Shadow ";
						else if (subclass == "lmns") outfile << "Four Elements ";
						else {
							cout << endl << "You entered something wrong" << endl;
							goto pmtra;
						}
					}
				}

				else if (Class == "Paladin")
				{
					Str = firstStat;
					Con = secondStat;
					Cha = thirdStat;
					Dex = fourthStat;
					Wis = fifthStat;
					Int = sixthStat;

					cout << "Aasimar(Scourge), Half-Elf, Tiefling" << endl;

					if (lvl >= 3) {
						poath:
						cout << "You need to pick a Sacred Oath" << endl;
						cout << "Your options are:\nDevotion - dvtn\nAncient - acnt\nVengeance - vngc" << endl;
						cout << "Enter oath: ";
						cin >> subclass;

						if (subclass == "dvtn") outfile << "Devotion ";
						else if (subclass == "acnt") outfile << "Ancient ";
						else if (subclass == "vngc") outfile << "Vengeance ";
						else {
							cout << endl << "You typed something wrong" << endl;
							goto poath;
						}
					}
				}

				else if (Class == "Ranger")
				{
					Dex = firstStat;
					Wis = secondStat;
					Con = thirdStat;
					Cha = fourthStat;
					Int = fifthStat;
					Str = sixthStat;

					cout << "Elf(Wood), Halfling(Stout), Tortle" << endl;
				}

				else if (Class == "Rogue")
				{
					cout << endl << "Do you plan on being a 'Thief', 'Assassin', or 'Arcane' Trickster?" << endl;
					cin >> x;

					if (x == "Thief" || x == "thief")
					{
						Dex = firstStat;
						Cha = secondStat;
						Str = thirdStat;
						Con = fourthStat;
						Wis = fifthStat;
						Int = sixthStat;
						subclass = "thf";
					}

					if (x == "Assassin" || x == "assassin")
					{
						Dex = firstStat;
						Cha = secondStat;
						Wis = thirdStat;
						Con = fourthStat;
						Str = fifthStat;
						Int = sixthStat;
						subclass = "assn";
					}

					if (x == "Arcane" || x == "arcane")
					{
						Dex = firstStat;
						Int = secondStat;
						Con = thirdStat;
						Cha = fourthStat;
						Wis = fifthStat;
						Str = sixthStat;
						subclass = "actr";
					}

					cout << "Elf(Wood or High), Gnome(Forest), Hald-Elf, Halfling(Lightfoot), Tiefling" << endl;
				}

				else if (Class == "Sorcerer")
				{
					Cha = firstStat;
					Dex = secondStat;
					Con = thirdStat;
					Wis = fourthStat;
					Int = fifthStat;
					Str = sixthStat;

					cout << "Aasimar(Scourge), Half-Elf, Dragonborn, Tiefling" << endl;
					psorg:
					cout << "You need to pick a Sorcerous Origin. Options are:" << endl;
					cout << "Wild magic - wldm\nDraconic Bloodline - dbld" << endl;
					cin >> subclass;
					if (subclass == "wldm") outfile << "Wild Magic ";
					else if (subclass == "dbld") outfile << "Draconic Bloodline ";
					else {
						cout << endl << "You entered something wrong" << endl;
						goto psorg;
					}
				}

				else if (Class == "Warlock")
				{
					cout << endl << "Do you plan on taking Pact of the Blade? (y/n)" << endl;
					cin >> x;

					if (x[0] == 'Y' || x[0] == 'y')
					{
						Cha = firstStat;
						Str = secondStat;
						Con = thirdStat;
						Dex = fourthStat;
						Wis = fifthStat;
						Int = sixthStat;

						cout << "Aasimar(Scourge or Fallen), ";
					
					}

					if (x[0] == 'n' || x[0] == 'n')
					{
						Cha = firstStat;
						Con = secondStat;
						Dex = thirdStat;
						Wis = fourthStat;
						Str = fifthStat;
						Int = sixthStat;
					}

					cout << "Half-Elf, Tiefling" << endl;
					ppact:
					cout << "You need to pick your Otherworldly Patron" << endl;
					cout << "Options are:\nArchfey - afey\nFiend - fnd\nGreat Old One - groo" << endl;
					cin >> subclass;
					if (subclass == "afey") outfile << "Archfey ";
					else if (subclass == "fnd") outfile << "Fiend ";
					else if (subclass == "groo") outfile << "Great Old One ";
					else {
						cout << "You entered something wrong" << endl;
						goto ppact;
					}
				}

				else if (Class == "Wizard")
				{
					Int = firstStat;
					Wis = secondStat;
					Dex = thirdStat;
					Con = fourthStat;
					Cha = fifthStat;
					Str = sixthStat;

					cout << "Gnome(Forest), Elf(High)" << endl;
				}

				else
				{
				cout << endl << "You typed something wrong" << endl;
				goto pclass;
				}

				outfile << Class << " " << lvl << endl;

				cout << "Type 'list' to find the codes for all races";
				prace:
				cout << endl << "Enter your Race code:" << endl;
				cin >> Race;

				if (Race == "list")
				{
					cout << "Race list - what to type to pick the race" << endl;
					cout << "Aasimar- asmr" << endl << "Dwarf - dwrf" << endl << "Elf - elf" << endl;
					cout << "Goliath - glth" << endl << "Hafling - hlng" << endl << "Human - humn" << endl;
					cout << "Dragonborn - dgbn" << endl << "Gnome - gnom" << endl << "Half-elf - helf" << endl;
					cout << "Half-orc - horc" << endl << "Tiefling - tflg" << endl << "Tortle - trtl" << endl << endl;
				}

				if (Race == "asmr")
				{
					Cha += 2;

					cout << "Subraces: Protector ('prtc'), Scourge ('scrg'), and Fallen ('faln')";
					pasmr:
					cout << endl << "Enter your subrace: " << endl;
					cin >> Subrace;

					if (Subrace == "prtc")
					{
						Wis += 1;
						outfile << "Race: Protector Aasimar" << endl;
					}

					else if (Subrace == "scrg")
					{
						Con += 1;
						outfile << "Race: Scourge Aasimar" << endl;
					}

					else if (Subrace == "faln")
					{
						Str += 1;
						outfile << "Race: Fallen Aasimar" << endl;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto pasmr;
					}
				}

				else if (Race == "dwrf")
				{
					Con += 2;
					cout << "Subraces: Hill('hill') or Mountain('mntn')";
					pdwrf:
					cout << endl << "Enter your subrace: " << endl;
					cin >> Subrace;

					if (Subrace == "hill")
					{
						Wis += 1;

						outfile << "Race: Hill Dwarf" << endl;
					}

					else if (Subrace == "mntn")
					{
						Str += 2;
						outfile << "Race: Mountain Dwarf" << endl;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto pdwrf;
					}
				}

				else if (Race == "elf")
				{
					Dex += 2;

					//int, wis, cha
					cout << "Subraces- High (high), wood (wood), dark/drow (dark)";
					pelf:
					cout << endl << "Enter your subrace:" << endl;
					cin >> Subrace;

					if (Subrace == "high")
					{
						Int += 1;
						outfile << "Race: High Elf" << endl;
					}

					else if (Subrace == "wood")
					{
						Wis += 1;
						outfile << "Race: Wood Elf" << endl;
					}

					else if (Subrace == "dark")
					{
						Cha += 1;
						outfile << "Race: Dark Elf" << endl;
					}

					else
					{
						cout << endl << "You entered something wrong" << endl;
						goto pelf;
					}
				}

				else if (Race == "glth")
				{
					Str += 2;
					Con += 1;
					outfile << "Race: Goliath" << endl;
				}

				else if (Race == "hlng")
				{	
					Dex += 2;
					cout << "Subraces: Lightfoot (ltft) and Stout (stut)";
					//cha con
					phlng:
					cout << endl << "Enter your subrace: " << endl;
					cin >> Subrace;

					if (Subrace == "ltft")
					{
						Cha += 1;
						outfile << "Race: Lightfoot Halfling" << endl;
					}

					else if (Subrace == "stut")
					{
						Con += 1;
						outfile << "Race: Stout Halfling" << endl;
					}

					else
					{
						cout << endl << "Yout typed something wrong" << endl;
						goto phlng;
					}
				}

				else if (Race == "humn")
				{
					Str += 1;
					Con += 1;
					Dex += 1;
					Cha += 1;
					Int += 1;
					Wis += 1;
					outfile << "Race: Human" << endl;
				}

				else if (Race == "dgbn")
				{
					Str += 2;
					Cha += 2;
					outfile << "Race: Dragonborn" << endl;
				}

				else if (Race == "gnom")
				{
					//dex con
					Int += 2;
					cout << "Subraces: Forest (frst), Rock (rock)";
					pgnom:
					cout << endl << "Enter your subrace: " << endl;
					cin >> Subrace;

					if (Subrace == "frst")
					{
						Dex += 1;
						outfile << "Race: Forest Gnome" << endl;
					}

					else if (Subrace == "rock")
					{
						Con += 1;
						outfile << "Race: Rock Gnome" << endl;
					}

					else
					{
						cout << endl << "You typed something wrong" << endl;
						goto pgnom;
					}
				}

				else if (Race == "helf")
				{
					Cha += 2;
					outfile << "Race: Half-Elf" << endl;

					int axtra = 2;
					string stextra;
					int pextra;

					while (axtra > 0)
					{
						cout << "Available ability points: " << axtra << endl;
						cout << "What ability do you want to increase? (use 3-letter code, no caps)" << endl;
						cin >> stextra;

						if (stextra == "str")
						{
							cout << "Current Str score: " << Str << endl;
							pexstr:
							cout << "How much would you like to raise Str by?" << endl;
							cin >> pextra;

							if (pextra > extra || Str + pextra > 20)
							{
								cout << "Amount is too high" << endl;
								goto pexstr;
							}

							else
							{
								Str += pextra;
								extra -= pextra;
							}

						}

						else if (stextra == "cha")
						{
							cout << "Current Cha score: " << Cha << endl;
							pexcha:
							cout << "How much would you like to raise Cha by?" << endl;
							cin >> pextra;

							if (pextra > axtra || Cha + pextra > 20)
							{
								cout << "Amount is too high" << endl;
								goto pexcha;
							}

							else
							{
								Cha += pextra;
								axtra -= pextra;
							}
						}

						else if (stextra == "con")
						{
							cout << "Current Con score: " << Con << endl;
							pexcon:
							cout << "How much would you like to raise Con by?" << endl;
							cin >> pextra;

							if (pextra > axtra || Con + pextra > 20)
							{
								cout << "Amount is too high" << endl;
								goto pexcon;
							}

							else
							{
								Con += pextra;
								axtra -= pextra;
							}
						}

						else if (stextra == "dex")
						{
							cout << "Current Dex score: " << Dex << endl;
							pexdex:
							cout << "How much would you like to raise Dex by?" << endl;
							cin >> pextra;

							if (pextra > axtra || Dex + pextra > 20)
							{
								cout << "Amount is too high" << endl;
								goto pexdex;
							}

							else
							{
								Dex += pextra;
								axtra -= pextra;
							}
						}

						else if (stextra == "wis")
						{
							cout << "Current Wis score: " << Str << endl;
							pexwis:
							cout << "How much would you like to raise Wis by?" << endl;
							cin >> pextra;

							if (pextra > axtra || Wis + pextra > 20)
							{
								cout << "Amount is too high" << endl;
								goto pexwis;
							}

							else
							{
								Wis += pextra;
								axtra -= pextra;
							}
						}

						else if (stextra == "int")
						{
							cout << "Current Int score: " << Str << endl;
							pexint:
							cout << "How much would you like to raise Int by?" << endl;
							cin >> pextra;

							if (pextra > axtra || Int + pextra > 20)
							{
								cout << "Amount is too high" << endl;
								goto pexint;
							}

							else
							{
								Int += pextra;
								axtra -= pextra;
							}
						}
					}
				}

				else if (Race == "horc")
				{
					Str += 2;
					Con += 1;
					outfile << "Race: Half-Orc" << endl;
				}

				else if (Race == "tflg")
				{
					Cha += 2;
					Int += 1;
					outfile << "Race: Tiefling" << endl;
				}

				else if (Race == "trtl")
				{
					Str += 2;
					Wis += 1;
					outfile << "Race: Tortle" << endl;
				}

				else
				{
					cout << endl << "You entered something wrong" << endl;
					goto prace;
				}

				yeouch:
				cout << "Type the 4-letter code for your background ('list' works here):" << endl;
				cin >> backg;

				if (backg == "list")
				{
					cout << "Acolyte- acly" << endl << "Charlatan- 'cltn'" << endl << "Criminal - 'crmn'" << endl;
					cout << "Folk Hero- 'flkh'" << endl << "Entertainer - 'entr'" << endl << "Guild Artisan- 'glda'" << endl << "Hermit - 'hrmt'" << endl;
					cout << "Noble - 'nobl'" << endl << "Outlander - 'otln'" << endl << "Sage - 'sage'" << endl;
					cout << "Soldier 'solr'" << endl << "Sailor- 'sail'" << endl << "Urchin - 'urch'" << endl;
					goto yeouch;
				}

				else if (backg == "acly")
				{
					outfile << "Background: Acolyte" << endl;
				}

				else if (backg == "cltn")
				{
					outfile << "Background: Charlatan" << endl;
				}

				else if (backg == "crmn")
				{
					pcrmn:
					cout << "Would you like to be the variant Criminal (Spy)? [y/n]" << endl;
					cin >> x;

					if (x == "y") {
						variant = true;
						outfile << "Background: Spy" << endl;
					}

					else if (x == "n") {
						outfile << "Background: Criminal" << endl;
					}

					else {
						cout << endl << "You typed something wrong" << endl;
						goto pcrmn;
					}
				}

				else if (backg == "flkh")
				{
					outfile << "Background: Entertainer" << endl;
				}

				else if (backg == "hrmt") {
					outfile << "Background: Hermit" << endl;
				}

				else if (backg == "entr")
				{
					pentr:
					cout << "Would you like to be the variant Entertainer (Gladiator)? [y/n]" << endl;
					cin >> x;

					if (x == "y") {
						variant = true;
						outfile << "Background: Gladiator" << endl;
					}

					else if (x == "n") {
						outfile << "Background: Entertainer" << endl;
					}

					else {
						cout << endl << "You typed something wrong" << endl;
						goto pentr;
					}
				}
				

				else if (backg == "glda")
				{
					pglda:
					cout << "Would you like to be the variant criminal (Guild Merchant)? [y/n]" << endl;
					cin >> x;

					if (x == "y") {
						variant = true;
						outfile << "Background: Guild Merchant" << endl;
					}

					else if (x == "n") {
						outfile << "Background: Guild Artisan" << endl;
					}

					else {
						cout << endl << "You typed something wrong" << endl;
						goto pglda;
					}
				}
				

				else if (backg == "nobl")
				{
					outfile << "Background: Noble" << endl;
				}

				else if (backg == "otln")
				{
					outfile << "Background: Outlander" << endl;
				}

				else if (backg == "sage")
				{
					outfile << "Background: Sage" << endl;
				}

				else if (backg == "solr")
				{
					outfile << "Background: Soldier" << endl;
				}

				else if (backg == "sail")
				{
					psail:
					cout << "Would you like to be the variant Sailor (Pirate) [y/n]?" << endl;
					cin >> x;

					if (x == "y") {
						outfile << "Background: Pirate" << endl;
						variant = true;
					}

					else if (x == "n") {
						outfile << "Background: Sailor" << endl;
					}

					else {
						cout << endl << "You typed something wrong" << endl;
						goto psail;
					}
				}

				else if (backg == "urch")
				{
					outfile << "Background: Urchin" << endl;
				}

				else
				{
					cout << endl << "You typed something wrong" << endl;
				}

				//Ability score increases
				if (Class == "Barbarian")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Bard")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Cleric")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Druid")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Fighter")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
					if (lvl >= 6) extra += 2;
					if (lvl >= 14) extra += 2;
				}

				if (Class == "Monk")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Paladin")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Ranger")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Rogue")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
					if (lvl >= 10) extra += 2;
				}

				if (Class == "Warlock")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Sorcerer")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				if (Class == "Wizard")
				{
					if (lvl >= 4) extra += 2;
					if (lvl >= 8) extra += 2;
					if (lvl >= 12) extra += 2;
					if (lvl >= 16) extra += 2;
					if (lvl >= 19) extra += 2;
				}

				//actually increase the abilities
				
				while (extra > 0)
				{
					int pextra;
					string sextra;

					cout << "You have " << extra << " ability points to distribute" << endl;
					cout << "Which skill would you like to increase? (Use 3-letter code, no caps)" << endl;
					cin >> sextra;

					if (sextra == "str")
					{
						cout << "Current Str score: " << Str << endl;
						pstr:
						cout << "How much would you like to raise Str by?" << endl;
						cin >> pextra;

						if (pextra > extra || Str + pextra > 20)
						{
							cout << "Amount is too high" << endl;
							goto pstr;
						}

						else
						{
							Str += pextra;
							extra -= pextra;
						}
					}

					else if (sextra == "con")
					{
						cout << "Current Con score: " << Con << endl;
						pcon:
						cout << "How much would you like to raise Con by?" << endl;
						cin >> pextra;

						if (pextra > extra || Con + pextra > 20)
						{
							cout << "Amount is too high" << endl;
							goto pcon;
						}

						else
						{
							Con += pextra;
							extra -= pextra;
						}
					}

					else if (sextra == "cha")
					{
						cout << "Current Cha score: " << Cha << endl;
						pcha:
						cout << "How much would you like to raise Cha by?" << endl;
						cin >> pextra;

						if (pextra > extra || Cha + pextra > 20)
						{
							cout << "Amount is too high" << endl;
							goto pcha;
						}

						else
						{
							Cha += pextra;
							extra -= pextra;
						}
					}

					else if (sextra == "dex")
					{
						cout << "Current Dex score: " << Dex << endl;
						pdex:
						cout << "How much would you like to raise Dex by?" << endl;
						cin >> pextra;

						if (pextra > extra || Dex + pextra > 20)
						{
							cout << "Amount is too high" << endl;
							goto pdex;
						}

						else
						{
							Dex += pextra;
							extra -= pextra;
						}
					}

					else if (sextra == "wis")
					{
						cout << "Current Wis score: " << Wis << endl;
						pwis:
						cout << "How much would you like to raise Wis by?" << endl;
						cin >> pextra;

						if (pextra > extra || Wis + pextra > 20)
						{
							cout << "Amount is too high" << endl;
							goto pwis;
						}

						else
						{
							Wis += pextra;
							extra -= pextra;
						}
					}

					else if (sextra == "int")
					{
						cout << "Current Int score: " << Int << endl;
						pint:
						cout << "How much would you like to raise Int by?" << endl;
						cin >> pextra;

						if (pextra > extra || Int + pextra > 20)
						{
							cout << "Amount is too high" << endl;
							goto pint;
						}

						else
						{
							Int += pextra;
							extra -= pextra;
						}
					}
				}

				//Special increase for barb 20th level feature
				if (Class == "Barbarian" && lvl == 20) {
					Str += 4;
					Con += 4;
				}
				//modifiers:

				string strmod, conmod, dexmod, intmod, chamod, wismod;

				if (Str == 20) {
					strmod = ", +5";
				}

				else if (Str >= 18) {
					strmod = ", +4";
				}

				else if (Str >= 16) {
					strmod = ", +3";
				}

				else if (Str >= 14) {
					strmod = ", +2";
				}

				else if (Str >= 12) {
					strmod = ", +1";
				}

				else if (Str >= 10) {
					strmod = ", 0";
				}

				else if (Str >= 8) {
					strmod = ", -1";
				}

				else if (Str >= 6) {
					strmod = ", -2";
				}

				else if (Str >= 4) {
					strmod = ", -3";
				}

				if (Con == 20) {
					conmod = ", +5";
				}

				else if (Con >= 18) {
					conmod = ", +4";
				}

				else if (Con >= 16) {
					conmod = ", +3";
				}

				else if (Con >= 14) {
					conmod = ", +2";
				}

				else if (Con >= 12) {
					conmod = ", +1";
				}

				else if (Con >= 10) {
					conmod = ", 0";
				}

				else if (Con >= 8) {
					conmod = ", -1";
				}

				else if (Con >= 6) {
					conmod = ", -2";
				}

				else if (Con >= 4) {
					conmod = ", -3";
				}

				if (Dex == 20) {
					dexmod = ", +5";
				}

				else if (Dex >= 18) {
					dexmod = ", +4";
				}

				else if (Dex >= 16) {
					dexmod = ", +3";
				}

				else if (Dex >= 14) {
					dexmod = ", +2";
				}

				else if (Dex >= 12) {
					dexmod = ", +1";
				}

				else if (Dex >= 10) {
					dexmod = ", 0";
				}

				else if (Dex >= 8) {
					dexmod = ", -1";
				}

				else if (Dex >= 6) {
					dexmod = ", -2";
				}

				else if (Dex >= 4) {
					dexmod = ", -3";
				}

				if (Cha == 20) {
					chamod = ", +5";
				}

				else if (Cha >= 18) {
					chamod = ", +4";
				}

				else if (Cha >= 16) {
					chamod = ", +3";
				}

				else if (Cha >= 14) {
					chamod = ", +2";
				}

				else if (Cha >= 12) {
					chamod = ", +1";
				}

				else if (Cha >= 10) {
					chamod = ", 0";
				}

				else if (Cha >= 8) {
					chamod = ", -1";
				}

				else if (Cha >= 6) {
					chamod = ", -2";
				}

				else if (Cha >= 4) {
					chamod = ", -3";
				}

				if (Int == 20) {
					intmod = ", +5";
				}

				else if (Int >= 18) {
					intmod = ", +4";
				}

				else if (Int >= 16) {
					intmod = ", +3";
				}

				else if (Int >= 14) {
					intmod = ", +2";
				}

				else if (Int >= 12) {
					intmod = ", +1";
				}

				else if (Int >= 10) {
					intmod = ", 0";
				}

				else if (Int >= 8) {
					intmod = ", -1";
				}

				else if (Int >= 6) {
					intmod = ", -2";
				}

				else if (Int >= 4) {
					intmod = ", -3";
				}

				if (Wis == 20) {
					wismod = ", +5";
				}

				else if (Wis >= 18) {
					wismod = ", +4";
				}

				else if (Wis >= 16) {
					wismod = ", +3";
				}

				else if (Wis >= 14) {
					wismod = ", +2";
				}

				else if (Wis >= 12) {
					wismod = ", +1";
				}

				else if (Wis >= 10) {
					wismod = ", 0";
				}

				else if (Wis >= 8) {
					wismod = ", -1";
				}

				else if (Wis >= 6) {
					wismod = ", -2";
				}

				else if (Wis >= 4) {
					wismod = ", -3";
				}

				outfile << "----ABILITY SCORES----" << endl;
				outfile << "Str: " << Str << strmod << endl << "Con: " << Con << conmod << endl << "Dex: " << Dex << dexmod << endl;
				outfile << "Cha: " << Cha << chamod << endl << "Int: " << Int << intmod << endl << "Wis: " << Wis << wismod << endl;
				outfile << "----PROFICIENCIES-----" << endl;

				string bonus = "+2";
				if (lvl >= 5) bonus = "+3";
				if (lvl >= 9) bonus = "+4";
				if (lvl >= 13) bonus = "+5";
				if (lvl >= 17) bonus = "+6";

				outfile << endl << "Proficiency Bonus: " << bonus << endl;
							   
				cout << endl << "Now, you will choose your class skill proficiencies. they will be listed as '<input> - <skill>'" << endl;
				cout << "Type whatever is in the <input> area. Case matters!" << endl;

				outfile << "CLASS-RELATED: " << endl;
				//Class proficiencies
				if (Class == "Barbarian")
				{
					outfile << "-Armor: Light, medium, shield" << endl << "-Weapons: Simple, martial" << endl;
					
					cout << "Possible skills: \na - Animal handling\nb - Athletics\nc - Intimidation\nd - Nature" << endl;
					cout << "e - Perception" << endl << "f - Survival" << endl;
					outfile << "-Skills: ";

					for (int i = 0; i < 2; i++) {
						pbarbskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Animal handling";
						}

						else if (x == "b") {
							outfile << "Athletics";
						}

						else if (x == "c") {
							outfile << "Intimidation";
						}

						else if (x == "d") {
							outfile << "Nature";
						}

						else if (x == "e") {
							outfile << "Perception";
						}

						else if (x == "f") {
							outfile << "Survival";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pbarbskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}

					cout << endl;
				}

				else if (Class == "Bard")
				{
					outfile << "-Armor: Light\n-Weapons: Simple, long/short swords, rapiers, hand crossbows\n-Tools: Any 3 musical instruments" << endl;
					outfile << "-Skills: Any 3" << endl;
				}

				else if (Class == "Cleric")
				{
					outfile << "-Armor: Light, Medium, Shields";
					if (subclass == "life" || subclass == "ntur") outfile << ", Heavy";
					outfile << endl;
					outfile << "-Weapons: Simple";
					if (subclass == "deth") outfile << ", Martial";
					outfile << endl;
					cout << "Possible skills: \na - History\nb - Insight\nc - Medicine\nd - Persuasion" << endl;
					cout << "e - Religion" << endl;
					outfile << "-Skills: ";

					for (int i = 0; i < 2; i++) {
					pclrcskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "History";
						}

						else if (x == "b") {
							outfile << "Insight";
						}

						else if (x == "c") {
							outfile << "Medicine";
						}

						else if (x == "d") {
							outfile << "Persuasion";
						}

						else if (x == "e") {
							outfile << "Religion";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pclrcskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Druid")
				{
					outfile << "-Armor: Light, medium, shield\n-Weapons: Club, dagger, dart, q.staff, javelin, mace, scimtar, sickle, sling, spear" << endl;
					outfile << "-Tools: Herbalism Kit" << endl << "Skills: ";

					cout << "Possible skills: \na - Arcana\nb - Animal Handling\nc - Insight\nd - Medicine" << endl;
					cout << "e - Nature" << endl << "f - Perception" << endl << "g - Religion" << endl << "h - Survival" << endl;
					outfile << "-Skills: ";

					for (int i = 0; i < 2; i++) {
						pdridskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Arcana";
						}

						else if (x == "b") {
							outfile << "Animal Handling";
						}

						else if (x == "c") {
							outfile << "Insight";
						}

						else if (x == "d") {
							outfile << "Medicine";
						}

						else if (x == "e") {
							outfile << "Nature";
						}

						else if (x == "f") {
							outfile << "Perception";
						}

						else if (x == "g") {
							outfile << "Religion";
						}

						else if (x == "h") {
							outfile << "Survival";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pdridskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Fighter")
				{
					outfile << "-Armor: All, Shields\n-Weapons: Simple, Martial" << endl;
					outfile << "-Skills: ";
					cout << "Possible skills: \na - Acrobatics\nb - Animal Handling\nc - Athletics\nd - History" << endl;
					cout << "e - Insight" << endl << "f - Intimidation" << endl << "g - Perception" << endl << "h - Survival" << endl;

					for (int i = 0; i < 2; i++) {
						pfitrskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Acrobatics";
						}

						else if (x == "b") {
							outfile << "Animal Handling";
						}

						else if (x == "c") {
							outfile << "Athletics";
						}

						else if (x == "d") {
							outfile << "History";
						}

						else if (x == "e") {
							outfile << "Insight";
						}

						else if (x == "f") {
							outfile << "Intimidation";
						}

						else if (x == "g") {
							outfile << "Perception";
						}

						else if (x == "h") {
							outfile << "Survival";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pfitrskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Monk")
				{
					outfile << "-Weapons: Simple, shortswords\n-Tools: Choose 1 artisan tools OR a musical instrument" << endl;
					outfile << "-Skills: ";
					cout << "Possible skills: \na - Acrobatics\nb - Athletics\nc - History\nd - Insight" << endl;
					cout << "e - Religion" << endl << "f - Stealth" << endl;

					for (int i = 0; i < 2; i++) {
						pmonkskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Acrobatics";
						}

						else if (x == "b") {
							outfile << "Athletics";
						}

						else if (x == "c") {
							outfile << "History";
						}

						else if (x == "d") {
							outfile << "Insight";
						}

						else if (x == "e") {
							outfile << "Religion";
						}

						else if (x == "f") {
							outfile << "Stealth";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pmonkskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Paladin")
				{
					outfile << "-Armor: All, Shields\n-Weapons: Simple, Martial\n-Skills: ";
					cout << "Possible skills: \na - Athletics\nb - Insight\nc - Intimidation\nd - Medicine" << endl;
					cout << "e - Persuasion" << endl << "f - Religion" << endl;

					for (int i = 0; i < 2; i++) {
						ppldnskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Athletics";
						}

						else if (x == "b") {
							outfile << "Insight";
						}

						else if (x == "c") {
							outfile << "Intimidation";
						}

						else if (x == "d") {
							outfile << "Medicine";
						}

						else if (x == "e") {
							outfile << "Persuasion";
						}

						else if (x == "f") {
							outfile << "Religion";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto ppldnskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Ranger")
				{
					outfile << "-Armor: Light, Medium, Shields\nWeapons: Simple, Martial\n-Skills: ";

					cout << "Possible skills: \na - Animal handling\nb - Acrobatics\nc - Insight\nd - Investigation" << endl;
					cout << "e - Nature" << endl << "f - Perception" << endl << "g - Stealth" << endl << "h - Survival" << endl;

					for (int i = 0; i < 3; i++) {
						prngrskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Animal Handling";
						}

						else if (x == "b") {
							outfile << "Acrobatics";
						}

						else if (x == "c") {
							outfile << "Insight";
						}

						else if (x == "d") {
							outfile << "Investigation";
						}

						else if (x == "e") {
							outfile << "Nature";
						}

						else if (x == "f") {
							outfile << "Perception";
						}

						else if (x == "g") {
							outfile << "Stealth";
						}

						else if (x == "h") {
							outfile << "Survival";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto prngrskill;
						}

						if (i < 2) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Rogue")
				{
					outfile << "-Armor: Light\n-Weapons: Simple, Hand crossbows, Rapiers, Long/Shortswords\n-Tools: Thieves' Tools";
					if (subclass == "assn" && lvl >= 3) {
						cout << ", Poison kit, Disguise kit" << endl;
					}
					else cout << endl;

					outfile << "-Skills: ";
					if (lvl >= 15) outfile << "Wis saving throws" << endl;

					cout << "Possible skills: \na - Acrobatics\nb - Athletics\nc - Deception\nd - Insight" << endl;
					cout << "e - Intimidation\nf - Investigation\ng - Perception\nh - Performance\ni - Persuasion" << endl;
					cout << "j - Sleight of Hand\nk - Stealth" << endl;

					for (int i = 0; i < 4; i++) {
						progskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Acrobatics";
						}

						else if (x == "b") {
							outfile << "Athletics";
						}

						else if (x == "c") {
							outfile << "Deception";
						}

						else if (x == "d") {
							outfile << "Insight";
						}

						else if (x == "e") {
							outfile << "Intimidation";
						}

						else if (x == "f") {
							outfile << "Investigation";
						}

						else if (x == "g") {
							outfile << "Perception";
						}

						else if (x == "h") {
							outfile << "Performance";
						}

						else if (x == "i") {
							outfile << "Persuasion";
						}

						else if (x == "j") {
							outfile << "Sleight of Hand";
						}

						else if (x == "k") {
							outfile << "Stealth";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto progskill;
						}

						if (i < 3) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Sorcerer")
				{
					outfile << "-Weapons: Dagger, Dart, Sling, Quarterstaff, Light crossbow" << endl << "-Skills: ";

					cout << "Possible skills: \na - Arcana\nb - Deception\nc - Insight\nd - Intimidation" << endl;
					cout << "e - Persuasion" << endl << "f - Religion" << endl;

					for (int i = 0; i < 2; i++) {
						psrcrskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Arcana";
						}

						else if (x == "b") {
							outfile << "Deception";
						}

						else if (x == "c") {
							outfile << "Insight";
						}

						else if (x == "d") {
							outfile << "Intimidation";
						}

						else if (x == "e") {
							outfile << "Persuasion";
						}

						else if (x == "f") {
							outfile << "Religion";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto psrcrskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Warlock")
				{
					outfile << "-Armor: Light\n-Weapons: Simple\n-Skills: ";
					cout << "Possible skills: \na - Arcana\nb - Deception\nc - History\nd - Intimidation" << endl;
					cout << "e - Investigation" << endl << "f - Nature" << endl << "g - Religion" << endl;

					for (int i = 0; i < 2; i++) {
						pwrlkskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Arcana";
						}

						else if (x == "b") {
							outfile << "Deception";
						}

						else if (x == "c") {
							outfile << "History";
						}

						else if (x == "d") {
							outfile << "Intimidation";
						}

						else if (x == "e") {
							outfile << "Investigation";
						}

						else if (x == "f") {
							outfile << "Nature";
						}

						else if (x == "g") {
							outfile << "Religion";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pwrlkskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}
				}

				else if (Class == "Wizard")
				{
					outfile << "Weapons: Dagger, dart, sling, quarterstaff, light crossbow" << endl << "Skills: ";

					cout << "Possible skills: \na - Arcana\nb - History\nc - Insight\nd - Investigation" << endl;
					cout << "e - Medicine" << endl << "f - Religion" << endl;

					for (int i = 0; i < 2; i++) {
						pwzrdskill:
						cout << "Which skill would you like?" << endl;
						cin >> x;

						if (x == "a") {
							outfile << "Arcana";
						}

						else if (x == "b") {
							outfile << "History";
						}

						else if (x == "c") {
							outfile << "Insight";
						}

						else if (x == "d") {
							outfile << "Investigation";
						}

						else if (x == "e") {
							outfile << "Medicine";
						}

						else if (x == "f") {
							outfile << "Religion";
						}

						else if (x == "g") {
							outfile << "Stealth";
						}

						else if (x == "h") {
							outfile << "Survival";
						}

						else {
							cout << endl << "You type summ wrong" << endl;
							goto pwzrdskill;
						}

						if (i < 1) {
							outfile << ", ";
						}
					}

					
				}

				if (Class == "Bard" && subclass == "valr") {
					outfile << endl << "SUBCLASS BASED:\n-Armor: Medium, shields\n-Weapons: Martial" << endl;
				}

				if (Class == "Bard" && subclass == "lore") {
					outfile << endl << "SUBCLASS BASED:\n-Skills: Pick 3" << endl;
				}

				outfile << endl << "RACE BASED:" << endl;
				//for racial proficiencies
				if (Race == "asmr")
				{
					outfile << "-Languages: Common, Celestial" << endl;
				}

				else if (Race == "dwrf")
				{
					outfile << "-Weapon: Battleaxe, handaxe, throwing hammer, warhammer\n-Tools: Smith tools OR Mason tools OR Brewer supplies" << endl;
					outfile << "-Resistances: Poison" << endl;
					if (Subrace == "mntn") {
						outfile << "Armor: Light, medium" << endl;
					}
					outfile << "-Language: Common, dwarven" << endl;
				}

				else if (Race == "elf")
				{
					outfile << "-Skills: Perception" << endl;
					if (Subrace == "high") {
						outfile << "-Weapons: Long/shortsword, Long/shortbow" << endl << "-Languages: Common, Elven, one of choice" << endl;
					}

					else if (Subrace == "wood") {
						outfile << "-Weapons: Long/shortsword, Long/Shortbow" << endl << "-Languages: Common, elven" << endl;
					}

					else if (Subrace == "dark") {
						outfile << "-Weapons: Rapier, shortsword, hand crossbow" << endl << "-Languages: Common, elven" << endl;
					}
				}

				else if (Race == "glth")
				{
					outfile << "-Skills: Athletics" << endl << "-Languages: Common, Giant" << endl;
				}

				else if (Race == "hlng")
				{
					outfile << "-Languages: Common, halfling" << endl;
				}

				else if (Race == "humn")
				{
					outfile << "-Languages: Common, one of choice" << endl;
				}

				else if (Race == "dgbn")
				{
					outfile << "-Languages: Common, draconic" << endl;
				}

				else if (Race == "gnom")
				{
					outfile << "-Languages: Common, gnomish" << endl;
				}

				else if (Race == "helf")
				{
					outfile << "-Skills: 2 of choice\n-Languages: Common, elvish, one of choice" << endl;
				}

				else if (Race == "horc")
				{
					outfile << "-Skills: Intimidation" << endl << "-Languages: Common, orc" << endl;
				}

				else if (Race == "tflg")
				{
					outfile << "Resistances: Fire" << endl << "-Languages: Common, Infernal" << endl;
				}

				else if (Race == "trtl")
				{
					outfile << "-Skills: Survival\n-Languages: Common, Aquan" << endl;
				}

				outfile << endl << "BACKGROUND BASED:" << endl;

				//Background proficiencies
				if (backg == "acly")
				{
					outfile << "-Skills: Insight, Religion\n-Language: Pick 2" << endl;
				}

				else if (backg == "cltn")
				{
					outfile << "-Skills: Deception, Sleight of Hand\n-Tools: Disguise kit, Forgery kit" << endl;
				}

				else if (backg == "crmn")
				{
					outfile << "-Skills: Deception, Stealth\n-Tools: Thieves' tools, Gaming set of choice" << endl;
				}

				else if (backg == "flkh")
				{
					outfile << "-Skills: Animal handling, Survival\n-Tools: One type of Artisan Tools, Vehicles(Land)" << endl;
				}

				else if (backg == "entr")
				{
					outfile << "-Skills: Acrobatics, Performance" << endl;

					if (variant) {
						outfile << "-Tools: Disguise Kit, Unusual and Inexpensive weapon of choice" << endl;
					}

					else {
						outfile << "-Tools: Disguise Kit, Musical Instrument of choice" << endl;
					}
				}

				else if (backg == "hrmt") {
					outfile << "-Skills: Medicine, Religion\n-Tools: Herbalism kit\n-Languages: One of choice" << endl;
				}

				else if (backg == "glda")
				{
					outfile << "-Skills: Insight, persuasion\n-Languages: One of choice" << endl;

					if (variant) {
						outfile << "-Tools: Navigator's tools" << endl;
					}

					else {
						outfile << "-Tools: One kind of Artisan's tools" << endl;
					}
				}

				else if (backg == "nobl")
				{
					outfile << "-Skills: History, Persuasion\n-Languages: 1 of choice\n-Tools: One kind of Gaming set" << endl;
				}

				else if (backg == "otln")
				{
					outfile << "-Skills: Athletics, Survival\n-Languages: One of Choice\n-Tools: One kind of music instrument" << endl;
				}

				else if (backg == "sage")
				{
					outfile << "-Skills: Arcana, History\n-Languages: 2 of choice" << endl;
				}

				else if (backg == "solr")
				{
					outfile << "-Skills: Athletics, Intimidation\n-Tools: One type of gaming set, Vehicles(Land)" << endl;
				}

				else if (backg == "sail")
				{
					outfile << "-Skills: Athletics, Perception\n-Tools: Navigator's tools, Vehicles(Water)" << endl;
				}

				else if (backg == "urch")
				{
					outfile << "-Skills: Sleight of Hand, Stealth\n-Tools: Disguise kit, Thieves' tools" << endl;
				}


				cout << endl << "You will now choose your class-specific equipment. In all cases when there is a choice," << endl;
				cout << "type 'o' for the first choice, 'x' for the second if it exists and any other input will give you\nthe last option." << endl;
				cout << " The letters are always lowercase" << endl;
				//Equipment time

				outfile << endl << "---EQUIPMENT---" << endl;
				outfile << "FROM CLASS: " << endl;
				if (Class == "Barbarian")
				{
					cout << "Greataxe OR any martial melee weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Greataxe" << endl;
					else outfile << "-Martial melee weapon or choice" << endl;

					cout << "2 Handaxes OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-2 Handaxes" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					outfile << "-Explorer's Pack\n-4 Javelins" << endl;
				}

				else if (Class == "Bard")
				{
					cout << "Rapier, longsword, OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Rapier" << endl;
					else if (x == "x") outfile << "-Longsword" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Diplomat's pack OR Explorer's pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Diplomat's pack" << endl;
					else outfile << "-Explorer's pack" << endl;

					cout << "Lute OR Musical instrument of choice" << endl;
					cin >> x;

					if (x == "o") outfile << "-Lute" << endl;
					else outfile << "-Musical instrument of choice" << endl;

					outfile << "-Leather armor\n-A dagger" << endl;
				}

				else if (Class == "Cleric")
				{
					cout << "Mace OR Warhammer" << endl;
					cin >> x;

					if (x == "o") outfile << "-Mace" << endl;
					else outfile << "-Warhammer" << endl;

					cout << "Scale mail, leather armor, OR chain mail" << endl;
					cin >> x;

					if (x == "o") outfile << "-Scale Mail" << endl;
					else if (x == "x") outfile << "-Leather armor" << endl;
					else outfile << "-Chain mail" << endl;

					cout << "Light crossbow with 20 bolts OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Light Crossbow\n-20 Light Crossbow bolts" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Priest pack OR Explorer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Priest pack" << endl;
					else outfile << "-Explorer's pack" << endl;

					outfile << "-Shield\n-Holy symbol" << endl;
				}

				else if (Class == "Druid")
				{
					cout << "Wood shield OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Wood shield" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Scimtar OR any simple melee weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Wood shield" << endl;
					else outfile << "-Simple melee weapon of choice" << endl;

					outfile << "-Leather armor\n-Explorer's pack\n-Druidic focus" << endl;
				}

				else if (Class == "Fighter")
				{
					cout << "Chain Mail OR Leather armor and longbow w/ 20 arrows" << endl;
					cin >> x;

					if (x == "o") outfile << "-Chain Mail" << endl;
					else outfile << "-Leather armor\n-Longbow\n-20 longbow arrows" << endl;

					cout << "Martial weapon and shield OR 2 Martial weapons" << endl;
					cin >> x;

					if (x == "o") outfile << "-Martial weapon of choice\n-Shield" << endl;
					else outfile << "-2 martial weapons of choice" << endl;

					cout << "2 Handaxes OR light crossbow w/ 20 bolts" << endl;
					cin >> x;

					if (x == "o") outfile << "-2 Handaxes" << endl;
					else outfile << "-Light crossbow\n-20 light crossbow bolts" << endl;

					cout << "Explorer pack OR any Dungeoneer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Explorer pack" << endl;
					else outfile << "-Dungeoneer pack" << endl;
				}

				else if (Class == "Monk")
				{
					cout << "A shortsword OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Shortsword" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Explorer pack OR any Dungeoneer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Explorer pack" << endl;
					else outfile << "-Dungeoneer pack" << endl;

					outfile << "-10 Darts" << endl;
				}

				else if (Class == "Paladin")
				{
					cout << "A martial weapon and shield OR two martial weapons" << endl;
					cin >> x;

					if (x == "o") outfile << "-Martial weapon of choice\n-Shield" << endl;
					else outfile << "-2 martial weapons of choice" << endl;

					cout << "5 javelins OR Any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-5 javelins" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Explorer pack OR Priest pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Explorer pack" << endl;
					else outfile << "-Priest pack" << endl;

					outfile << "-Chain mail\n-Holy symbol" << endl;
				}

				else if (Class == "Ranger")
				{
					cout << "Scale mail OR any leather armor" << endl;
					cin >> x;

					if (x == "o") outfile << "-Scale mail" << endl;
					else outfile << "-Leather armor" << endl;

					cout << "2 shortswords OR 2 simple melee weapons" << endl;
					cin >> x;

					if (x == "o") outfile << "-2 shortswords" << endl;
					else outfile << "-2 simple melee weapons of choice" << endl;

					cout << "Explorer pack OR Dungeoneer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Explorer pack" << endl;
					else outfile << "-Dungeoneer pack" << endl;

					outfile << "-Longbow\n-Quiver of 20 longbow arrows" << endl;
				}

				else if (Class == "Rogue")
				{
					cout << "Rapier OR shortsword" << endl;
					cin >> x;

					if (x == "o") outfile << "-Rapier" << endl;
					else outfile << "-Shortsword" << endl;

					cout << "Shortbow w/ quiver of 20 arrows OR shortsword" << endl;
					cin >> x;

					if (x == "o") outfile << "-Shortbow\n-Quiver with 20 shortbow arrows" << endl;
					else outfile << "-Shortsword" << endl;

					cout << "Explorer pack, Burglar pack OR Dungeoneer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Explorer pack" << endl;
					else if (x == "x") outfile << "-Burglar pack" << endl;
					else outfile << "-Dungeoneer pack" << endl;

					outfile << "-Leather armor\n-two daggers\n-Thieves' tools" << endl;
				}

				else if (Class == "Sorcerer")
				{
					cout << "Light crossbow w/ 20 bolts OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Light crossbow\n-20 light crossbow bolts" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Component pouch OR Arcane focus" << endl;
					cin >> x;

					if (x == "o") outfile << "-Component pouch" << endl;
					else outfile << "-Arcane focus" << endl;

					cout << "Dungeoneer pack OR Explorer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Dungeoneer pack" << endl;
					else outfile << "-Explorer pack" << endl;

					outfile << "-2 daggers" << endl;
				}

				else if (Class == "Warlock")
				{
					cout << "Light crossbow w/ 20 bolts OR any simple weapon" << endl;
					cin >> x;

					if (x == "o") outfile << "-Light crossbow\n-20 light crossbow bolts" << endl;
					else outfile << "-Simple weapon of choice" << endl;

					cout << "Component pouch OR Arcane focus" << endl;
					cin >> x;

					if (x == "o") outfile << "-Component pouch" << endl;
					else outfile << "-Arcane focus" << endl;

					cout << "Scholar pack OR Explorer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Scholar pack" << endl;
					else outfile << "-Explorer pack" << endl;

					outfile << "-2 daggers\n-Leather armor\n-Simple weapon of choice" << endl;
				}

				else if (Class == "Wizard")
				{
					cout << "Quarterstaff or dagger" << endl;
					cin >> x;

					if (x == "o") outfile << "-Quarterstaff" << endl;
					else outfile << "-Dagger" << endl;

					cout << "Component pouch OR Arcane focus" << endl;
					cin >> x;

					if (x == "o") outfile << "-Component pouch" << endl;
					else outfile << "-Arcane focus" << endl;

					cout << "Scholar pack OR Explorer pack" << endl;
					cin >> x;

					if (x == "o") outfile << "-Scholar pack" << endl;
					else outfile << "-Explorer pack" << endl;

					outfile << "-Spellbook" << endl;
				}

				outfile << endl << "FROM BACKGROUND:" << endl;
				//backg equips
				if (backg == "acly")
				{
					outfile << "-Holy symbol\n-Prayer book\n-5 sticks incense\n-Vestments\n-Common clothes\n-15gp in a belt pouch" << endl;
				}

				else if (backg == "cltn")
				{
					outfile << "-Fine clothes\n-Disguise kit\n-Tools for your favorite con (see flavor section)\n-15gp in a belt pouch" << endl;
				}

				else if (backg == "crmn")
				{
					outfile << "-Crowbar\n-Dark common clothes with hood\n-15gp in a belt pouch" << endl;
				}

				else if (backg == "flkh")
				{
					outfile << "-Artisan's tools of choice\n-Shovel\n-Iron pot\n-Common clothes" << endl;
				}

				else if (backg == "entr")
				{
					outfile << "-Costume\n-Trinket from a fan" << endl;
					if (variant) {
						outfile << "-An unusual but inexpensive weapon of choice" << endl;
					}

					else {
						outfile << "-Musical instrument of choice" << endl;
					}

					outfile << "-15gp in a belt pouch" << endl;
				}

				else if (backg == "glda")
				{
					outfile << "-Letter of introduction from guild\n-Traveler's clothes" << endl;

					if (variant) {
						outfile << "-Cart and mule" << endl;
					}

					else {
						outfile << "-Artisan's tools of choice" << endl;
					}

					outfile << "-Belt pouch with 15gp" << endl;
				}

				else if (backg == "nobl")
				{
					outfile << "-Fine clothes\n-Signet ring\n-Scroll of pedigree\n-25gp in a belt pouch" << endl;
				}

				else if (backg == "otln")
				{
					outfile << "-Staff\n-Hunting trap\n-Trophy from animal you killed \n-Traveler's clothes\n-10gp in a belt pouch" << endl;
				}

				else if (backg == "hrmt") {
					outfile << "-Scroll case stuffed with notes & prayers\n-Winter blanket\n-Common clothes\nHerbalism kit" << endl;
					outfile << "-5gp in a belt pouch" << endl;
				}

				else if (backg == "sage")
				{
					outfile << "-Bottle of black ink\n-Quill\n-Small knife\n-Letter from dead colleague with question you've yet to answer\n-Common clothes\n-10gp in a belt pouch" << endl;
				}

				else if (backg == "solr")
				{
					cout << "Would you like to have [b]one dice OR a [d]eck of cards? (if neither, computer will choose for you" << endl;
					cin >> x;

					if (x[0] == 'b' || x[0] == 'B') outfile << "-Bone dice" << endl;
					else if (x[0] == 'd' || x[0] == 'D') outfile << "-Deck of cards" << endl;
					else {
						int choice = diceRoll(2);
						if (choice == 1) outfile << "-Bone dice" << endl;
						else outfile << "-Deck of cards" << endl;
					}
					outfile << "-Insignia of rank\n-Trophy from fallen enemy\n-Common clothes\n-10gp in a belt pouch" << endl;
				}

				else if (backg == "sail")
				{
					outfile << "-Belaying pin(club)\n-50ft silk rope\n-Lucky charm(trinket)\n-Common clothes\n-10gp in a belt pouch" << endl;
				}

				else if (backg == "urch")
				{
					outfile << "-Pet mouse\n-Small knife\n-Map of home city\n-Trinket to remember parents by\n-Common clothes\n-10gp in a belt pouch" << endl;
				}

				//Class features
				if (Class == "Barbarian")
				{
					outfile << "-Unarmored Defense: While unarmored, AC = 10 + Con mod + Str Mod. Shields are OK." << endl;
					int rages = 2;
					if (lvl >= 3) rages += 1;
					if (lvl >= 6) rages += 1;
					if (lvl >= 12) rages += 1;
					if (lvl >= 17) rages += 1;

					int ragedice = 2;
					if (lvl >= 9) ragedice += 1;
					if (lvl >= 16) ragedice += 1;
					
					if (lvl != 20) {
						outfile << "-Rage: A";
					}

					else {
						outfile << "-Rage: " << rages << "times per long rest, a";
					}

					outfile << "s bonus action, you can enter rage. It lasts a minute, but ends early" << endl;
					outfile << " if you are knocked unconscious or if your turn ends and you haven't attacked a hostile creature" << endl;
					outfile << " You can also end it on your turn as a bonus action. While raging, you get these benefits:" << endl;
					outfile << " -Advantage on Str checks and saves\n -Resist to bludgeon, pierce, and slash damage" << endl;
					outfile << " -Str melee weapon gets +" << ragedice << " bonus damage" << endl;

					if (lvl >= 2) {
						outfile << "-RECKLESS ATTACK: You can choose to attack recklessly on your attack step. If you do this," << endl;
						outfile << " you have the advantage on melee attack rolls using Str, but attack rolls against you have" << endl;
						outfile << " the advantage until your next turn" << endl;
						outfile << "-DANGER SENSE: You can sense when there are things nearby that shouldn't be. You also have" << endl;
						outfile << " the advantage on saving throws against things you can't see (i.e. traps). This does not" << endl;
						outfile << " work if you are blind, deaf, or incapacitated" << endl;
					}

					if (lvl >= 5) {
						outfile << "-EXTRA ATTACK- you can attack twice per Attack step" << endl;
						outfile << "-FAST MOVEMENT- your speed increases by 10ft while not in heavy armor" << endl;
					}

					if (lvl >= 7) {
						outfile << "-FERAL INSTINCT- you have the advantage on initiative rolls due to your honed instincts" << endl;
						outfile << " Also, if you are surprised at the begining of combat and aren't incapacitated, you can" << endl;
						outfile << " act normally for the first turn, but only if you enter your Rage" << endl;
					}

					if (lvl >= 9) {
						outfile << "-BRUTAL CRIT: You can roll one extra weapon damage die when deciding extra damage for" << endl;
						outfile << " a critical hit on a melee attack" << endl;
					}

					else if (lvl >= 13) {
						outfile << "-BRUTAL CRIT: You can roll two extra weapon damage die when deciding extra damage for" << endl;
						outfile << " a critical hit on a melee attack" << endl;
					}

					else if (lvl >= 17) {
						outfile << "-BRUTAL CRIT: You can roll three extra weapon damage die when deciding extra damage for" << endl;
						outfile << " a critical hit on a melee attack" << endl;
					}

					if (lvl >= 11) {
						outfile << "-RELENTLESS RAGE- While raging, if you drop to 0 HP but you don't die outright, you" << endl;
						outfile << " Can make a DC 10 Con saving throw. On success, you drop to 1 HP instead. Each time you" << endl;
						outfile << " Use this feature, the DC goes up by 5, but when you take a short or long rest the DC drops" << endl;
						outfile << " back down to 10" << endl;
					}

					if (lvl >= 15) {
						outfile << "-PERSISTENT RAGE- your rage will only end early if you fall unconscious or choose to end it" << endl;
					}

					if (lvl >= 18) {
						outfile << "-INDOMITABLE MIGHT- If you make a Str check and roll less than your Str ability score," << endl;
						outfile << " you can use the score instead of the roll" << endl;
					}

					if (subclass == "brsk") {
						if (lvl >= 3) {
							cout << "-FRENZY- while raging you can go into a frenzy and take a bonus action of" << endl;
							cout << " a melee weapon attack each turn while raging. After your rage with frenzy you gain" << endl;
							cout << " one (1) level of exhaustion" << endl << endl;
						}

						if (lvl >= 6) {
							outfile << "-MINDLESS RAGE- you can't be charmed or frightened while raging. If you are" << endl;
							outfile << " charmed or frightened while entering rage, the effect doesn't take place until" << endl;
							outfile << " after the rage" << endl;
						}

						if (lvl >= 10) {
							outfile << "-INTIMIDATING PRESENCE- As your action, you can frighten someone so long as they" << endl;
							outfile << " are within 30ft of you. They must make a Wis throw (DC 8 + Prof. Bonus + Con mod)" << endl;
							outfile << " or they are frightened until the end of your next turn. You can repeat this action" << endl;
							outfile << " to renew the frighten every turn" << endl;
						}

						if (lvl >= 14) {
							outfile << "-RETALIATION- when you take dmg from something within 5ft of you, you can make a" << endl;
							outfile << " melee weapon attack as a reaction" << endl;
						}
					}

					else if (subclass == "totm") {
						int totms = 1;
						string totm;

						if (lvl >= 6) totms += 1;
						if (lvl >= 10) totms += 1;
						if (lvl >= 14) totms += 1; 

						cout << "You will choose " << totms << "totems. You can choose the same one more than once" << endl;
						cout << "The totem options are 'bear', 'wolf', and 'eagle'" << endl;
						if (lvl >= 3) {
							totm3c:
							cout << "3rd level totem: ";
							cin >> totm;

							if (totm == "bear")
							{
								outfile << "-While raging, you have resistance to all damage except psychic" << endl;
							}

							else if (totm == "eagle")
							{
								outfile << "-While raging and not wearing heavy armor, enemies have disadvantage on attack rolls against you." << endl;
								outfile << " Also, you can use Dash as a bonus action each turn" << endl;
							}

							else if (totm == "wolf")
							{
								outfile << endl << "WOLF" << endl;
								outfile << "-While raging, friendly characters have advantage on attack rolls to creatures within 5ft of you" << endl;
							}

							else {
								cout << endl << "You entered something wrong" << endl;
								goto totm3c;
							}
						}

						if (lvl >= 6) {
							totm6c:
							cout << "6th level totem: ";
							cin >> totm;

							if (totm == "bear")
							{
								outfile << "-Your carrying capacity is doubled, and you have advantage on Str checks to push, pull" << endl;
								outfile << " lift, or break items" << endl;
							}

							else if (totm == "eagle")
							{
								outfile << "-You can see up to 1 mile with little to no difficulty, and can see fine details" << endl;
								outfile << " up to 100ft away. And dim light doesnt disadvantage your Perception checks." << endl;
							}

							else if (totm == "wolf")
							{
								outfile << "-You can track other beings at a fast pace, and can move stealthily at a normal pace" << endl;
							}

							else {
								cout << endl << "You entered something wrong" << endl;
								goto totm6c;
							}
						}

						if (lvl >= 10) {
							outfile << "-SPIRIT WALKER- You can cast 'Commune With Nature', but only as a ritual" << endl;
							outfile << " When you do this, a spirit form of one of your totem animals gives you the" << endl;
							outfile << " information you want." << endl << endl;
						}

						if (lvl >= 14) {
							totm14c:
							cout << "14th level totem: ";
							cin >> totm;

							if (totmsprt == "bear")
							{
								outfile << "-While raging, any enemy within 5ft of you has the disadvantage on" << endl;
								outfile << " attack rolls to any target but you or others with this feature. This" << endl;
								outfile << " does not work if target can't see or hear you or can't be frightened" << endl;
							}

							else if (totm == "eagle")
							{
								outfile << "-While raging, you have a flying speed equal to your walking speed." << endl;
								outfile << " But, if you end a turn in the air, you fall if nothing is holding you up" << endl;
							}

							else if (totm == "wolf")
							{
								outfile << "-As a bonus action on your turn, you can knock a Large or smaller creature into a prone" << endl;
								outfile << " position" << endl;
							}

							else {
								cout << endl << "You entered something wrong" << endl;
								goto totm14c;
							}
						}
					}
				}

				else if (Class == "Bard")
				{
					string inspire, song;

					inspire = "d6";
					if (lvl >= 5) inspire = "d8";
					if (lvl >= 10) inspire = "d10";
					if (lvl >= 15) inspire = "d12";

					if (lvl >= 2) song = "d6";
					if (lvl >= 9) song = "d8)";
					if (lvl >= 13) song = "d10";
					if (lvl >= 17) song = "d12";

					outfile << "SPELLCASTING- Your music is magic. Your focus is a musical instrument" << endl;
					outfile << "BARDIC INSPIRATION ("<< inspire <<")- AS a bonus action on a turn, you can choose an animal" << endl;
					outfile << "within 60ft of you. Within 10 mins, that animal can add a roll of a " << inspire << " to any" << endl;
					outfile << "ability check, saving throw, or attack roll. Can only be used once in the 10 mins" << endl;
					outfile << "You have " << chamod << "uses. You regain all uses after a long rest" << endl;

					if (lvl >= 2) {
						outfile << "JACK OF ALL TRADES- you can add half your proficiency bonus (" << bonus << "), rounded down, to any" << endl;
						outfile << "ability check in a skill you aren't already proficient in" << endl;
						outfile << "SONG OF REST(" << song << ")- After giving some performance during a short rest, if any" << endl;
						outfile << "friendlies who can hear your performance would heal after the short rest, they" << endl;
						outfile << "regain an extra "<< song << " roll of HP along with their initial heal" << endl;
					}
					string expert = " two ";
					if (lvl >= 10) expert = " four ";

					if (lvl >= 3) {
						outfile << "EXPERTISE: Pick" << expert << "skills you are proficient in. You can double your proficiency\nbonus for checks with that skill" << endl;
					}

					if (lvl >= 5) {
						outfile << "FONT OF INSPIRATION- After a short or long rest you regain all expended uses of Bardic \nInspiration" << endl;
					}

					if (lvl >= 6) {
						outfile << "COUNTERCHARM- As an action, you can do a performance that lasts until the end of" << endl;
						outfile << "your next turn. During the performance, you and any friendlies within 30ft of you" << endl;
						outfile << "have the advantage on saving throws against being charmed or frightened" << endl;
					}

					string secret = " two ";
					if (lvl >= 14) secret = " four ";
					if (lvl >= 18) secret = " six ";

					if (lvl >= 10) {
						outfile <<"MAGICAL SECRETS- You gain" << secret << "spells or cantrips from ANY class (level permiting), which can include Bard if you like" << endl;
					}

					if (lvl == 20) {
						outfile << "SUPERIOR INSPIRATION- If you roll for initiative and have no Bardic Inspir. uses left," << endl;
						outfile << "you regain one use" << endl;
					}

					if (subclass == "valr") {
						if (lvl >= 3) {
							outfile << "COMBAT INSPIRATION: A creature who has a Bardic Inspiration die from you can" << endl;
							outfile << "use it to add to a damage roll or, as a reaction to an attack, can add it to" << endl;
							outfile << "its own AC between the attacker's roll and the declaration of a hit or miss" << endl;
						}

						if (lvl >= 6) {
							outfile << "You can attack twice instead of once when making the Attack action on your turn" << endl;
						}

						if (lvl >= 14) {
							outfile << "BATTLE MAGIC: When casting a Bard spell, you can make one weapon attack as a bonus action" << endl;
						}
					}

					else if (subclass == "lore") {
						if (lvl >= 3) {
							outfile << "CUTTING WORDS: when a creature you can see within 60ft of you makes a check, attack roll, or" << endl;
							outfile << "damage roll, you can use your reaction and a use of Bardic Inspiration to subtract the number" << endl;
							outfile << "you roll for B. Inspir. from the target's roll. The creature is immune if it can't hear you or" << endl;
							outfile << "if it immune to charming" << endl;
						}

						if (lvl >= 6) {
							outfile << "ADDITIONAL MAGIC SECRETS- you learn two spells or cantrips from ANY class, which can" << endl;
							outfile << "include Bard if you like" << endl;
						}

						if (lvl >= 14) {
							outfile << "PEERLESS SKILL: When making an ability check you can use Bardic Inspiration and add the roll" << endl;
							outfile << "to your check" << endl;
						}
					}

					else if (subclass == "wspr") {
						if (lvl >= 3) {
							int blades = 2;
							if (lvl >= 5) blades += 1;
							if (lvl >= 10) blades += 2;
							if (lvl >= 15) blades += 3;

							outfile << "PSYCHIC BLADES: Once per round on your turn, when you hit a creature" << endl;
							outfile << "with a weapon attack, you can use one charge of your Bardic Inspiration" << endl;
							outfile << "to deal an extra " << blades << "d6 Psychic damage to that creature" << endl;
							outfile << "WORDS OF TERROR: If you speak to a humanoid alone for 1 minute, you can attempt" << endl;
							outfile << "to make it paranoid. At the end of the conversation, the target makes a Wis save" << endl;
							outfile << "against your Spell Save DC. On a fail, it is frightened of you or of one creature" << endl;
							outfile << "of your choice or until it is attacked or damaged or sees an ally being attacked" << endl;
							outfile << "or damaged. On a success, the creature is unaffected and doesn't know what you" << endl;
							outfile << "tried to do. This is once per short or long rest" << endl;
						}

						if (lvl >= 6) {
							outfile << "MANTLE OF WHISPERS: When a humanoid dies within 30ft of you, you can use your" << endl;
							outfile << "reaction to magically capture its shadow. You keep it until using it or after" << endl;
							outfile << "a long rest, whichever is first. You can use the shadow as an action. When you" << endl;
							outfile << "do, it magically transforms into a disuise covering you that makes you look like" << endl;
							outfile << "the dead person (but in perfect health). It lasts for an hour or until you end it" << endl;
							outfile << "as a bonus action. While disguised, you get all knowledge the person would share" << endl;
							outfile << "in casual conversation. No secrets, but some backstory and knowledge of acquaintances." << endl;
							outfile << "Another creature sees through the disguise if it succeeds by a Wis(Insight) check against" << endl;
							outfile << "your Cha(Deception) check. You get a +5 bonus to that check. You can capture one shadow" << endl;
							outfile << "per short or long rest" << endl;
						}

						if (lvl >= 14) {
							outfile << "SHADOW LORE: Once per long rest, as an action, you can magically whisper a phrase that only" << endl;
							outfile << "one creature within 30ft of you can hear. It makes a Wis saving throw against your spell" << endl;
							outfile << "save DC. It automatically succeeds if it doesn't share a language with you or if it can't" << endl;
							outfile << "hear you. On a success, the whisper is unintelligible and has no effect. On a fail, the" << endl;
							outfile << "target is charmed by you for 8 hours or until you or your allies attack it, damage it, or" << endl;
							outfile << "force it to make a saving throw. It interprets the whispers as its deepest secret, which it" << endl;
							outfile << "believes you know. You do not gain knowledge of this secret. The charmed creature obeys your" << endl;
							outfile << "commands for fear of its secret being out. It won't risk its life or fight for you unless it" << endl;
							outfile << "was already inclined to do so. It grants you favors and gifts it would offer a close friend." << endl;
							outfile << "after the 8 hours, the creature doesn't know why it feared you so much" << endl;
						}
					}
				}

				else if (Class == "Cleric")
				{
					int cdiv = 1;
					if (lvl >= 6) cdiv += 1;
					if (lvl >= 18) cdiv += 1;

					double dcr = 0.5;
					if (lvl >= 8) dcr += 0.5;
					if (lvl >= 11) dcr += 1;
					if (lvl >= 14) dcr += 1;
					if (lvl >= 17) dcr += 1;

					if (lvl >= 2)
					{
						outfile << "CHANNEL DIVINITY: You can channel your deity to create one of two effects. You choose which effect" << endl;
						outfile << "Option 1 is Turn Undead, option 2 is determined by your Divine Domain. At 2nd level you" << endl;
						outfile << "can use this ability " << cdiv << " times per a long rest" << endl;
						outfile << "TURN UNDEAD: As an action, you present your holy symbol ans speak some holy words. Every undead" << endl;
						outfile << "that can see or hear you within 30ft must make a Wis saving throw. If they fail, they" << endl;
						outfile << "are turned for a minute or until taking damage. Turned creatures must spend their turns getting away" << endl;
						outfile << "from you. It can't willingly move within 30ft of you. A turned creature cannot make reactions. It" << endl;
						outfile << "can only use Dash as its action. If there is nowhere to use, it can use Dodge" << endl;
					}

					if (lvl >= 5)
					{
						outfile << "DESTROY UNDEAD: If an undead fails its saving throw for Turn Undead, it is immediately" << endl;
						outfile << "destroyed if it has a challenge rating at or below" << dcr << endl;
					}

					if (lvl >= 10)
					{
						outfile << "DIVINE INTERVENTION: You can ask your patron deity to intervene for you if your need is great" << endl;
						outfile << "If you roll a number at or lower than your level, it succeeds. The DM can choose the nature" << endl;
						outfile << "of how they intervene. If you succeed, you cannot use this again for another 7 days. If you" << endl;
						outfile << "fail, you can use it after a long rest" << endl;
					}

					if (lvl == 20)
					{
						outfile << "Divine Intervention now succeeds automatically, no roll needed" << endl;
					}

					if (subclass == "kldg")
					{
						if (lvl >= 1)
						{
							outfile << "BLESSINGS OF KNOWLEDGE: You know two more languages of your choice, also you gain" << endl;
							outfile << "two more skill proficiencies of your choice from: Arcana, History, Nature, or Religion" << endl;
							outfile << "Your proficiency bonus is doubled for checks made using the skills you picked from this" << endl;
						}

						if (lvl >= 2)
						{
							outfile << "CHANNEL DIVINITY- KNOWLEDGE OF THE AGES: As an action, you can choose a tool or skill." << endl;
							outfile << "For 10 minutes, you are proficient in the chosen tool or skill" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "CHANNEL DIVINITY- READ THOUGHTS: As an action, you can choose one creature" << endl;
							outfile << "you can see within 60ft of you. That creature must make a Wis saving throw" << endl;
							outfile << "If it succeeds, you can't use this feature again until after a long rest. If it" << endl;
							outfile << "fails, you can read its surface thoughts (feelings, directly what it's thinking," << endl;
							outfile << "and what is frontmost in its mind) so long as it remains within 60ft of you. You can" << endl;
							outfile << "also, as an action, end this effect and use Suggestion on the creature without expending" << endl;
							outfile << "a spell slot. The creature automatically fails the save. You can only do this during the 1" << endl;
							outfile << "minute time of effect" << endl;
						}

						if (lvl >= 8)
						{
							outfile << "POTENT SPELLCASTING: You add your Wis modifier to any damage you deal with a" << endl;
							outfile << "Cleric cantrip" << endl;
						}

						if (lvl >= 17)
						{
							outfile << "-VISIONS OF THE PAST: While holding an object or just sitting around for at least one minute in meditation," << endl;
							outfile << "you get visions of recent events concerning this object. You can meditate for a number" << endl;
							outfile << "of minutes equal to your Wis score. You must maintain concentration. Cannot use again" << endl;
							outfile << "until after a short or long rest." << endl;
							outfile << "-OBJECT READING: Must be holding the object, you learn how the previous owner aquired and" << endl;
							outfile << "lost the item, as well as the most significant recent event involving it (significant for" << endl;
							outfile << "your purposes, not necessarily general history). You can add a minute for each owner and" << endl;
							outfile << "subsequent information you want to see before the most recent" << endl;
							outfile << "-AREA READING: While meditating, you learn about significant events within a 50ft cube" << endl;
							outfile << "around yourself. For each minute, you learn one significant event starting with the most" << endl;
							outfile << "recent. Significant events can be either ones with powerful emotions (weddings, betrayal, war, etc)" << endl;
							outfile << "or could just be mundane events that are relevant to your purpose" << endl;
						}
					}
						else if (subclass == "life")
						{
							if (lvl >= 1)
							{
								outfile << "DISCIPLE OF LIFE: Whenever you use a 1st level or higher spell to restore a creature's HP," << endl;
								outfile << "it heals an extra 2 + the spell's level" << endl;
							}

							if (lvl >= 2)
							{
								outfile << "CHANNEL DIVINITY- PRESERVE LIFE: While Channeling Divinity, as an action you can" << endl;
								outfile << "present your holy symbol and evoke healing power. You can distribute hit points" << endl;
								outfile << "equal to 5x your cleric level to any creatures within 30ft of you. This ability" << endl;
								outfile << "cannot heal a creature past half of their max health. This does not work on undead" << endl;
								outfile << "or a construct" << endl;
							}

							if (lvl >= 6)
							{
								outfile << "BLESSED HEALER: Whenever you cast a spell of 1st or higher level to heal a creature, you" << endl;
								outfile << "also regain HP equal to 2 + the level of the spell" << endl;
							}

							if (lvl >= 8)
							{
								outfile << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								outfile << "deal 1d8 extra radiant damage. At 14th level, this becomes 2d8 instead of 1" << endl;
							}

							if (lvl >= 17)
							{
								outfile << "Whenever rolling dice to restore HP with a spell, you automatically use the highest number possible" << endl;
								outfile << "ex. instead of rolling 2d6 to restore HP you automatically do 12" << endl;
							}
						}

						else if (subclass == "lght")
						{
							if (lvl >= 1)
							{
								outfile << "BONUS CANTRIP: you gain the 'Light' cantrip if you don't already know it" << endl;
								outfile << "WARDING FLARE: when someone within 30ft attacks you, you can use your reaction" << endl;
								outfile << "to flash light between you and them, giving them the disadvantage on the roll" << endl;
								outfile << "This doesn't work if the target can't be blinded. You can use this a number" << endl;
								outfile << "of times equal to your Wis modifier (minimum 1). You regain all expended uses" << endl;
								outfile << "after a long rest" << endl;
							}

							if (lvl >= 2)
							{
								outfile << "CHANNEL DIVINITY- RADIANCE OF THE DAWN: While Channeling Divinity, as an action, you can" << endl;
								outfile << "present your holy symbol. After this, any magical darkness within 30ft of you is dispelled" << endl;
								outfile << "Also, all hostiles within 30ft of you make a Con saving throw. Those creatures take 2d10 +" << endl;
								outfile << "your cleric level on a failed save, and half that amount on success. A creature with total" << endl;
								outfile << "cover from you is not affected" << endl;
							}

							if (lvl >= 6)
							{
								outfile << "IMPROVED FLARE: You can now use warding flare to block an attack on a creature within 30ft" << endl;
								outfile << "of you" << endl;
							}

							if (lvl >= 8)
							{
								outfile << "POTENT SPELLCASTING: You add your Wis modifier to any damage you deal with a" << endl;
								outfile << "Cleric cantrip" << endl;
							}

							if (lvl >= 17)
							{
								outfile << "You can use your action to make an aura of light that lasts for 1 minute or" << endl;
								outfile << "until you stop it with another action. You emit bright light for 60ft and " << endl;
								outfile << "dim light for another 30ft after that. Enemies in your bright light have" << endl;
								outfile << "disadvantage on saving throws againsts any spell that deals fire or radiant" << endl;
								outfile << "damage" << endl;
							}

							else if (subclass == "deth")
							{
								if (lvl >= 1)
								{
									outfile << "REAPER: You learn one Necromancy cantrip from any spell list." << endl;
									outfile << "When you cast a Necromancy cantrip that targets only one creature," << endl;
									outfile << "it instead can target two creatures within range and within" << endl;
									outfile << "5ft of each other" << endl;
								}

								if (lvl >= 2)
								{
									outfile << "CHANNEL DIVINITY- TOUCH OF DEATH: While Channeling Divinity, when" << endl;
									outfile << "you hit a creature with a melee weapon attack, you can add 5 + double" << endl;
									outfile << "your Cleric level in necrotic damage to the attack" << endl;
								}

								if (lvl >= 6)
								{
									outfile << "INESCAPABLE DESTRUCTION: Necrotic damage dealt by your Cleric spells" << endl;
									outfile << "and Channel Divinity ignores resistance to necrotic damage" << endl;
								}

								if (lvl >= 8)
								{
									int nyet = 1;
									if (lvl >= 14) nyet = 2;
									outfile << "DIVINE STRIKE: Once per your turn, when you hit a creature with a" << endl;
									outfile << "weapon attack, you can deal an extra " << nyet << "d8 necrotic damage" << endl;
								}

								if (lvl >= 17)
								{
									outfile << "IMPROVED REAPER: Your Reaper ability now also includes necromancy spells of" << endl;
									outfile << "1st-5th Level, not just cantrips. If the spell requires Material components," << endl;
									outfile << "you must include the material for both targets" << endl;
								}
							}

							else if (subclass == "ntur")
							{
								if (lvl >= 1)
								{
									outfile << "ACOLYTE OF NATURE: You learn one (1) druid cantrip of your choice and gain" << endl;
									outfile << "proficiency in One (1) skill out of Animal Handling, Nature, or Survival" << endl;
								}

								if (lvl >= 2)
								{
									outfile << "CHANNEL DIVINITY- CHARM ANIMALS AND PLANTS: While Channeling Divinity, as" << endl;
									outfile << "an action, you present your holy symbol and invoke the name of your deity." << endl;
									outfile << "Then every beast or plant within 30ft that can see you makes a Wis saving" << endl;
									outfile << "throw. If it fails, they are charmed for 1 minute or until taking damage" << endl;
									outfile << "Charmed creatures are friendly to you and other creatures you designate" << endl;
								}

								if (lvl >= 6)
								{
									outfile << "DAMPEN ELEMENTS: When you or a creature within 30 ft of you takes acid, cold," << endl;
									outfile << "fire, lightning, or thunder damage, you can use your reaction to grant that" << endl;
									outfile << "creature resistance to that instance of the damage" << endl;
								}

								if (lvl >= 8)
								{
									int nyet = 1;
									if (lvl >= 2) nyet = 2;
									outfile << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
									outfile << "deal " << nyet << "d8 extra cold, fire, or lightning damage (type of your choice)." << endl;
								}

								if (lvl >= 17)
								{
									outfile << "MASTER OF NATURE: While creatures are charmed from your Charm Animals and Plants feature," << endl;
									outfile << "you can use a bonus action on your turns to verbally command what each of those creatures" << endl;
									outfile << "will do on its next turn" << endl;
								}
							}
						}

						else if (subclass == "tmps")
						{
							if (lvl >= 1)
							{
								outfile << "WRATH OF THE STORM: When a creature within 5ft of you that you can see hits you" << endl;
								outfile << "with an attack, you force them to make a Dex save. They take 2d8 lightning damage" << endl;
								outfile << "on a failed save, half that much on success. You can use this a number of times equal" << endl;
								outfile << "to your Wis modifier (min. 1). You regain all expended uses after a long rest" << endl;
							}

							if (lvl >= 2)
							{
								outfile << "CHANNEL DIVINITY- DESTRUCTIVE WAVE: While Channeling Divinity, when you roll lightning" << endl;
								outfile << "or thunder damage, you can deal maximum damage instead of rolling" << endl;
							}

							if (lvl >= 6)
							{
								outfile << "THUNDERBOLT STRIKE: When you deal lightning damage to a Large or smaller creature, you" << endl;
								outfile << "can also push it up to 10ft back" << endl;
							}

							if (lvl >= 8)
							{
								int nyet = 1;
								if (lvl >= 14) nyet = 2;
								outfile << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								outfile << "deal 1d8 extra thunder damage. At 14th level, this becomes 2d8 instead of 1" << endl;
							}

							if (lvl >= 17)
							{
								outfile << "While not underground or indoors, you have a flying speed equal to your walking speed" << endl;
							}
						}

						else if (subclass == "trik")
						{
							if (lvl >= 1)
							{
								outfile << "BLESSINGS OF THE TRICKSTER: When you touch a willing creature, you give them the" << endl;
								outfile << "acvantage on Dex (Stealth) checks for one (1) hour or until you use this feature" << endl;
								outfile << "again" << endl;
							}

							if (lvl >= 2)
							{
								outfile << "CHANNEL DIVINITY- INVOKE DUPLICITY: While Channeling Divinity, as an action, you can create" << endl;
								outfile << "a perfect illusion of yourself that lasts for one minute of until you lose concentration." << endl;
								outfile << "The illusion appears in an unoccupied space you can see within 30ft of you. As a bonus action" << endl;
								outfile << "you can move the illusion 30ft in any direction within a 120ft range of you. You can cast spells" << endl;
								outfile << "as if you were in that space, but you use your own stats and senses. Also, when you and your" << endl;
								outfile << "illusion are both within 5ft of a creature that can see the illusion, you have the advantage on" << endl;
								outfile << "attack rolls toward that creature" << endl;
							}

							if (lvl >= 6)
							{
								outfile << "CHANNEL DIVINIY- CLOAK OF SHADOWS: While Channeling Divinity, as an action, you can become" << endl;
								outfile << "invisible until your next turn. You become visible if you attack or cast a spell" << endl;
							}

							if (lvl >= 8)
							{
								int nyet = 1;
								if (lvl >= 14) nyet = 2;
								outfile << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								outfile << "deal " << nyet << "d8 extra poison damage." << endl;
							}

							if (lvl >= 17)
							{
								outfile << "IMPROVED DUPLICITY: You can now make 4 illusions instead of 1 when using your Invoke Duplicity" << endl;
								outfile << "feature. You can move any number of them on each turn as a bonus action, with the same limitations" << endl;
								outfile << "you had with the one (30ft per turn within 120ft of you)" << endl;
							}
						}

						else if (subclass == "war")
						{
							if (lvl >= 1)
							{
								outfile << "BONUS PROFICIENCIES: You are now proficient with Martial weapons and Heavy armor" << endl;
								outfile << "WAR PRIEST: When you use the Attack action, you can make a weapon attack as a" << endl;
								outfile << "bonus action. You can use this feature a number of times equal to your Wis mod." << endl;
								outfile << "(minimum 1). You regain expended uses after a long rest" << endl;
							}

							if (lvl >= 2)
							{
								outfile << "CHANNEL DIVINITY- GUIDED STRIKE: While Channeling Divinity, when you make an attack" << endl;
								outfile << "roll, you can add 10 to the roll between the dice roll and the DM declaring a hit or" << endl;
								outfile << "miss" << endl;
							}

							if (lvl >= 6)
							{
								outfile << "CHANNEL DIVINITY- WAR GOD'S BLESSING: When a creature within 30ft of you makes an attack" << endl;
								outfile << "roll, you can use your reaction to give the roll a +10 bonus so long as you do it between" << endl;
								outfile << "the roll and the DM declaring hit or miss" << endl;
							}

							if (lvl >= 8)
							{
								cout << "DIVINE STRIKE: On each of your turns, when you hit a creature with a weapon attack, you can" << endl;
								cout << "deal 1d8 extra damage of the same kind as was dealt by the weapon." << endl;
							}

							if (lvl >= 17)
							{
								outfile << "AVATAR OF BATTLE: You gain resistance to bludgeoning, slashing, and piercing damage from" << endl;
								outfile << "nonmagical weapons" << endl;
							}
						}
					
				}

				else if (Class == "Druid")
				{

					if (lvl >= 1)
					{
						outfile << "DRUIDIC: You can automatically spot and decipher any message left in the secret Druid language" << endl;
						outfile << "Other players must make a DC 15 Wis (Perception) saving throw to spot it, and cannot decipher" << endl;
						outfile << "it without magic" << endl;
					}

					else if (drid == "2nd")
					{
						double wshape = .25;
						if (lvl >= 4) wshape += .25;
						if (lvl >= 8) wshape += .5;
						if (lvl >= 2 && subclass == "moon") wshape = 1;
						if (lvl >= 6 && subclass == "moon") wshape = (int)(lvl / 3);
						outfile << "WILD SHAPE: You can use your action to magically assume the form of a beast you" << endl;
						outfile << "have seen before. You can use this feature twice. You regain expended uses after" << endl;
						outfile << "a long rest. Your beast has a max CR of " << wshape << endl;
						outfile << "You can stay in this form for an amount of hours equal to half your Druid level, rounded" << endl;
						outfile << "down per use. You can use a bonus action on your turn to revert back early. You revert" << endl;
						outfile << "automatically when becoming unconscious, falling to 0 HP, or dying. Would you like to" << endl;
						outfile << endl << "--WILD SHAPE EXTRA RULES--" << endl;
						outfile << "-Your stats are replaced by those of the beast, save for your Int, Wis, and Cha scores" << endl;
						outfile << " you also retain saving throws and skills, as well as getting those of the beast. If the" << endl;
						outfile << " beast and you share a proficiency, and the beast's bonus is higher, you can use its bonus" << endl;
						outfile << " for that stat. You cannot use lair or legendary actions, even if your beast has them" << endl << endl;
						outfile << "-You get the beast's HP and Hit Dice. When you revert to your normal form, you go back" << endl;
						outfile << " to the amount of HP you had before transforming unless you reverted as a result of hitting" << endl;
						outfile << " 0 HP, in which case the excess damage carries to your normal form. You are not knocked unconscious" << endl;
						outfile << " unless that brings your normal form to 0 HP" << endl;
						outfile << "-You can't cast spells, and your ability to speak and take an action is limited by your form" << endl;
						outfile << " Transforming doesn't break your concentration for spells or hinder you for taking actions for" << endl;
						outfile << " a spell you've already cast" << endl;
						outfile << "-You choose if your equipment falls to the ground, merges with you, or is worn by your beast" << endl;
						outfile << " the DM decides if the equipment is practical or usable for your creature (equipment doesn't" << endl;
						outfile << " change size). If it can't be used, it has to fall to the ground or merge with you. Merged" << endl;
						outfile << " equipment has no effect, but it will appear back on you when you revert back" << endl;
						outfile << "-Any physical ability you have (i.e. Darkvision) does not carry over unless the beast also" << endl;
						outfile << " has the ability" << endl;
						if (lvl < 8) outfile << "-Chosen animal can't have a flying speed" << endl;
						if (lvl < 4) outfile << "-Chosen animal can't have a swimming speed" << endl;
					}

					if (lvl >= 18)
					{
						outfile << "BEAST SPELLS: While in Wild Shape, you can cast most druid spells. You can give Verbal" << endl;
						outfile << "and Somatic components, but cannot provide Material components" << endl;
						outfile << "TIMELESS BODY: For every 10 years that pass, you only age 1 year" << endl;
					}

					if (lvl >= 20) outfile << "ARCHDRUID: You can use Wild Shape an infinite amount of times" << endl;


					if (subclass == "land")
					{
						if (lvl >= 2)
						{
							outfile << "BONUS CANTRIP: You learn an extra druid cantrip of your choice" << endl;
							outfile << "NATURAL RECOVERY: During a short rest, you can recover spell" << endl;
							outfile << "slots of your choice. Their combined level is equal to half your" << endl;
							outfile << "druid level, rounded down. None of the slots can be 6th level or" << endl;
							outfile << "higher. You can't use this feature again until after a long rest" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "LAND'S STRIDE: Moving through nonmagical difficult terrain costs" << endl;
							outfile << "no extra movement. You can also pass through nonmagical plants" << endl;
							outfile << "without any negative effects (i.e. Thorn damage, slow). You have" << endl;
							outfile << "the advantage on saving throws against magically created or controlled" << endl;
							outfile << "plants made to impede movement, like those from the 'Entangle' spell" << endl;
						}

						if (lvl >= 10)
						{
							outfile << "NATURE'S WARD: You can't be charmed by elementals or fey, and are" << endl;
							outfile << "immune to poison and disease" << endl;
						}

						if (lvl >= 14)
						{
							outfile << "NATURE'S SANCTUARY: Creatures of the natural world can sense your" << endl;
							outfile << "connection to nature, and are hesitant to attack you. When a beast" << endl;
							outfile << "or plant creature attacks you, it must make a Wis save against your" << endl;
							outfile << "druid spell save DC. On a failed save, they must choose a new target" << endl;
							outfile << "or the roll just fails. On success, they are immune to this effect" << endl;
							outfile << "for 24 hours. The creature is aware of this effect before making the" << endl;
							outfile << "attack roll on you" << endl;
						}
					}

					else if (dridcrl == "moon")
					{
						if (lvl >= 2)
						{
							outfile << "COMBAT WILD SHAPE: You can use Wild Shape as a bonus action on your turn" << endl;
							outfile << "instead of an action. Also, while transformed, you can use a bonus action" << endl;
							outfile << "to expend a spell slot and regain HP equal to 1d8 per level of the slot" << endl;
							outfile << "expended" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "PRIMAL STRIKE: Attacks while using Wild Form become magical for the purpose" << endl;
							outfile << "of overcoming resistance and immunity to nonmagical attacks and damage" << endl;
						}

						if (lvl >= 10)
						{
							outfile << "ELEMENTAL WILD SHAPE: You can expend 2 uses of Wild Shape at once to" << endl;
							outfile << "turn into an earth, wind, fire, or water elemental" << endl;
						}

						if (lvl >= 14)
						{
							outfile << "THOUSAND FORMS: You have a great grasp of Wild Shape, and can alter" << endl;
							outfile << "details instead of your whole form. You can cast 'alter self' at will" << endl;
						}
					}
				}

				else if (Class == "Fighter")
				{
					
					if (lvl >= 1)
					{
						outfile << "SECOND WIND: On your turn, you can take a bonus action to regain HP equal to" << endl;
						outfile << "1d10 + your Fighter Level. You cannot use this again until after a short or" << endl;
						outfile << "long rest" << endl;
						cout << "Pick a fighting style. type the letter in front of the style" << endl;

						cout << endl << "--FIGHTING STYLES--" << endl;
						cout << "a- ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;
						cout << "b- DEFENSE: Extra +2 to AC while wearing armor" << endl;
						cout << "c- DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
						cout << "   you get a +2 bonus on damage rolls with that weapon" << endl;
						cout << "d- GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
						cout << "   for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
						cout << "   even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
						cout << "   '2-handed' or 'versatile' property" << endl;
						cout << "e- PROTECTION: When a creature you see attacks another creature you see within" << endl;
						cout << "   5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
						cout << "   roll. You must be using a shield" << endl;
						cout << "f- TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
						cout << "   put your ability modifier on the second attack" << endl;
						cout << "Pick here: ";
						cin >> x;

						if (x == "a") outfile << "ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;

						else if (x == "b") outfile << "DEFENSE: Extra +2 to AC while wearing armor" << endl;

						else if (x == "c") {
							outfile << "DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
							outfile << "you get a +2 bonus on damage rolls with that weapon" << endl;
						}

						else if (x == "d") {
							outfile << "GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
							outfile << "for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
							outfile << "even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
							outfile << "'2-handed' or 'versatile' property" << endl;
						}

						else if (x == "e") {
							outfile << "PROTECTION: When a creature you see attacks another creature you see within" << endl;
							outfile << "5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
							outfile << "roll. You must be using a shield" << endl;
						}

						else if (x == "f") {
							outfile << "TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
							outfile << "put your ability modifier on the second attack" << endl;
						}
					}
					
					if (lvl >= 2)
					{
						int act = 1;
						if (lvl >= 17) act = 2;
						outfile << "ACTION SURGE: You can take an extra Action on your turn. You can only use this" << endl;
						outfile << act << " times before needing a short or long rest" << endl;
					}

					int atks = 2;
					if (lvl >= 11) atks += 1;
					if (lvl == 20) atks += 1;
					if (lvl >= 5) outfile << "EXTRA ATTACK: You can attack " << atks << " on the Attack action on your turn" << endl;
					
					if (lvl >= 9)
					{
						int indo = 1;
						if (lvl >= 13) indo += 1;
						if (lvl >= 17) indo += 1;
						outfile << "INDOMITABLE: WHen you fail a saving throw, you can reroll it. You MUST" << endl;
						outfile << "use this new roll. You can only use this " << indo << " times per long rest" << endl;
					}

					if (subclass == "cmpn")
					{
						if (lvl >= 3)
						{
							outfile << "IMPROVED CRITICAL: Your weapon attacks score a crit when you roll a 19 or 20" << endl;
						}

						if (lvl >= 7)
						{
							outfile << "REMARKABLE ATHLETE: You can ass half your prof. bonus (round up) to any Str, Dex," << endl;
							outfile << "or Con check you make that doesn't already use your proficiency bonus. Also, when" << endl;
							outfile << "you do a running long jump, the distance you can cover increases by a number of ft" << endl;
							outfile << "equal to your Str modifier (" << strmod << ")" << endl;
						}

						if (lvl >= 10)
						{
							cout << "Pick an additional fighting style. Type the letter in front of the style" << endl;

							cout << endl << "--FIGHTING STYLES--" << endl;
							cout << "a- ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;
							cout << "b- DEFENSE: Extra +2 to AC while wearing armor" << endl;
							cout << "c- DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
							cout << "   you get a +2 bonus on damage rolls with that weapon" << endl;
							cout << "d- GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
							cout << "   for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
							cout << "   even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
							cout << "   '2-handed' or 'versatile' property" << endl;
							cout << "e- PROTECTION: When a creature you see attacks another creature you see within" << endl;
							cout << "   5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
							cout << "   roll. You must be using a shield" << endl;
							cout << "f- TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
							cout << "   put your ability modifier on the second attack" << endl;
							cout << "Pick here: ";
							cin >> x;

							if (x == "a") outfile << "ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;

							else if (x == "b") outfile << "DEFENSE: Extra +2 to AC while wearing armor" << endl;

							else if (x == "c") {
								outfile << "DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
								outfile << "you get a +2 bonus on damage rolls with that weapon" << endl;
							}

							else if (x == "d") {
								outfile << "GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
								outfile << "for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
								outfile << "even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
								outfile << "'2-handed' or 'versatile' property" << endl;
							}

							else if (x == "e") {
								outfile << "PROTECTION: When a creature you see attacks another creature you see within" << endl;
								outfile << "5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
								outfile << "roll. You must be using a shield" << endl;
							}

							else if (x == "f") {
								outfile << "TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
								outfile << "put your ability modifier on the second attack" << endl;
							}
						}

						if (lvl >= 15)
						{
							cout << "SUPERIOR CRITICAL: Your weapon attacks score a crit on a roll of 18-20" << endl;
						}

						if (lvl >= 18)
						{
							outfile << "SURVIVOR: At the start of each of your turns, if you are at or below half your" << endl;
							outfile << "Max HP, you gain HP equal to 5 + your Con modifier" << endl;
						}
					}
					
					else if (subclass == "bmas")
					{
						if (lvl >= 3)
						{
							int superior = 4;
							if (lvl >= 7) superior += 1;
							if (lvl >= 15) superior += 1;

							int supsides = 8;
							if (lvl >= 10) supsides += 2;
							if (lvl >= 18) supsides += 2;

							outfile << "STUDENT OF WAR: You gain a proficiency in one Artisan's Tools of your choice" << endl;
							outfile << "COMBAT SUPERIORITY: Your Maneuvers are fueled by Superiority dice" << endl << endl;
							cout << "Superiority Dice: You have " << superior << " Superiority Dice (d" << supsides <<"'s). A superiority dice is expended" << endl;
							cout << "every time you use one. You regain all dice after a short or long rest." << endl;
							cout << "Saving Throws: Some Maneuvers require the target to make a saving throw to resist its" << endl;
							cout << "effects. The DC is 8 + your Str or Dex modifier (your choice)" << endl;
						}

						if (lvl >= 7)
						{
							cout << "KNOW YOUR ENEMY: If you spend at least 1 minute observing or interacting with" << endl;
							cout << "a creature outside battle, you learn info about it as it relates to you. The DM" << endl;
							cout << "tells you if they are equal, better, or worse in two of the following areas (your" << endl;
							cout << "choice)" << endl << "-Str Score" << endl << "-Dex Score" << endl << "-Con Score" << endl << "-AC" << endl;
							cout << "-Current HP" << endl << "-Total class levels (if any)" << endl << "-Figher Class Levels (if any)" << endl;
						}

						if (lvl >= 15)
						{
							cout << "RELENTLESS: When you roll for Initiative and have no Superiority" << endl;
							cout << "left, you regain 1 Superiority die" << endl;
						}

						int maneuver = 3;
						if (lvl >= 7) maneuver += 2;
						if (lvl >= 10) maneuver += 2;
						if (lvl >= 15) maneuver += 2;

						cout << "Pick your Maneuvers. You have " << maneuver << " maneuvers." << endl;
						cout << "Your options are:" << endl;
						cout << "-Commander's Strike 'cmst'" << endl << "-Disarming Attack 'datk'" << endl << "-Distracting Strike 'dstr'" << endl;
						cout << "-Evasive Footwork 'evft'" << endl << "-Feinting Attack 'fatk'" << endl << "-Goading Attack 'gatk'" << endl;
						cout << "-Lunging Attack 'latk'" << endl << "-Maneuvering Attack 'matk'" << endl << "Menacing Attack 'metk'" << endl;
						cout << "-Parry 'pary'" << endl << "-Precision Attack 'prtk'" << endl << "-Pushing Attack 'putk'" << endl << "-Rally 'raly" << endl;
						cout << "-Reposte 'rpst'" << endl << "-Sweeping Attack 'satk'" << endl << "-Trip Attack 'tatk'" << endl;
						outfile << "--MANEUVERS--" << endl;
						
						for(int i = 1; i <= maneuver; i++) {
							string manny;
							pmanny:
							cout << "Pick Maneuver " << i << ": ";
							cin >> manny;

							if (manny == "cmst")
							{
								outfile << "-On your Attack, you can skip attacking and use a bonus action to command a friendly" << endl;
								outfile << "that can see and hear you to attack. They can use their reaction to immediately make" << endl;
								outfile << "an attack. Upon doing so, you expend a Superiority die. They add the roll to their" << endl;
								outfile << "attack's damage roll" << endl;
							}

							else if (manny == "datk")
							{
								outfile << "-When you hit a creature with a weapon attack, you can attempt to disarm it" << endl;
								outfile << "by using a Superiority diethis forces the creature to drop an item it's holding" << endl;
								outfile << "of your choice. You add the Superiority die roll to your damage. The creature" << endl;
								outfile << "must make a Str save. On a failed save, they drop the item to their feet" << endl;
							}

							else if (manny == "dstr")
							{
								outfile << "-When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
								outfile << "die to cause an opening for a teammate. Add the Superiority roll to the" << endl;
								outfile << "damage. The next attack roll to that creature, so long as it is before" << endl;
								outfile << "your next turn and not made by you, has the advantage" << endl;
							}

							else if (manny == "evft")
							{
								outfile << "While moving, you can expend a Superiority die. You add the roll to your AC" << endl;
								outfile << "until you stop moving" << endl;
							}

							else if (manny == "fatk")
							{
								outfile << "You can spend a Superiority die and a bonus action on your turn to feint," << endl;
								outfile << "choosing a creature within 5ft of you. You have the advantage on your next" << endl;
								outfile << "attack roll on that creature. On a hit, add the Superiority roll to the damage" << endl;
							}

							else if (manny == "gatk")
							{
								outfile << "-When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
								outfile << "die to goad them. Add the Superiority roll to the damage. That creature" << endl;
								outfile << "makes a Wis saving throw. On a failed save, that creature has the disadvantage" << endl;
								outfile << "on attack rolls against anyone but you until your next turn" << endl;
							}

							else if (manny == "latk")
							{
								outfile << "-When making a melee attack, you can expend a Superiority die to extend your" << endl;
								outfile << "attack reach by 5ft. If you hit, add the Superiority roll to the attack's" << endl;
								outfile << "damage" << endl;
							}

							else if (manny == "matk")
							{
								outfile << "-When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
								outfile << "die to maneuver a friend into a better position. Add the Superiority roll" << endl;
								outfile << "to your attack damage. Choose a friendly creature who can see or hear you." << endl;
								outfile << "That creature can use their reaction to move up to half their normal speed" << endl;
								outfile << "without provoking Opportunity Attacks from enemies" << endl;
							}

							else if (manny == "metk")
							{
								outfile << "-When you hit a creature with a weapon attack, you can expend a Superiotity" << endl;
								outfile << "die to try to frighten them. Add the Superiority roll to your attack damage." << endl;
								outfile << "That creature must make a Wis saving throw. On a failed save, they are" << endl;
								outfile << "frightened of you until the end of your next turn" << endl;
							}

							else if (manny == "pary")
							{
								outfile << "-When damaged by a melee attack, you can expend a Superiority die to reduce the" << endl;
								outfile << "damage you take by the Superiority roll + your Dex modifier" << endl;
							}

							else if (manny == "prtk")
							{
								outfile << "-When you make a weapon attack roll against a creature, you can expend a" << endl;
								outfile << "Superiority die to add it to the roll. You must do this before any effects" << endl;
								outfile << "of the attack are applied, but can do it before or after the roll" << endl;
							}

							else if (manny == "putk")
							{
								outfile << "-When you hit a creature with a weapon attack, you can expend a Superiority" << endl;
								outfile << "die to try to push them back. Add the Superiority roll to the damage. They" << endl;
								outfile << "make a Str saving throw. On a failed save, they are pushed up to 15ft back" << endl;
							}

							else if (manny == "raly")
							{
								outfile << "-On your turn, as a bonus action, you expend a Superiority die. Choose a" << endl;
								outfile << "friendly creature that can see or hear you. You bolster their morale," << endl;
								outfile << "granting them Temporary HP equal to the Superiority roll + your Cha" << endl;
								outfile << "modifier" << endl;
							}

							else if (manny == "rpst")
							{
								outfile << "-When a creature misses you with a melee attack, you can use your reaction and one Superiority" << endl;
								outfile << "die to make a melee attack on that creature. On a hit, add the Superiority roll to your damage" << endl;
								outfile << "roll" << endl;
							}

							else if (manny == "satk")
							{
								outfile << "-When you hit a creature with a melee weapon attack, you can expend one Superiority die to try" << endl;
								outfile << "to damage another target witht the attack. If they are within 5ft and your reach, and your" << endl;
								outfile << "original attack roll would work on that creature, they take damage of the same type as the" << endl;
								outfile << "first damage equal to the Superiority roll" << endl;
							}

							else if (manny == "tatk")
							{
								outfile << "-When you hit a creature with a weapon attack, you can use a Superiority die to attempt" << endl;
								outfile << "to trip them. You add the Superiority roll to your damage roll. Target creature must" << endl;
								outfile << "make a Str saving throw. On a failed save, you knock them prone" << endl;
							}

							else {
								cout << endl << "You entered something wrong" << endl;
								goto pmanny;
							}
						}
						outfile << "------------" << endl;
					}
					
					else if (subclass == "ekni")
					{
						if (lvl >= 3)
						{
							outfile << "SPELLCASTING: You do voodoo" << endl;
							outfile << "WEAPON BOND: You learn a ritual that makes a bond between you and a weapon. The" << endl;
							outfile << "ritual takes place over an hour, and can be performed during a short rest. The" << endl;
							outfile << "weapon must be within reach the whole time. At the end, you touch the weapon," << endl;
							outfile << "creating the bond. A bonded weapon cannot be disarmed from you and, if it is" << endl;
							outfile << "on the same plane of existance, you can summon it as a bonus action on your" << endl;
							outfile << "turn, making it teleport to your hand. You can have up to 2 bonded weapons" << endl;
							outfile << "at a time. If you want to bond to a third weapon, you must sever the bond" << endl;
							outfile << "from one of the first two" << endl;
						}

						if (lvl >= 7)
						{
							outfile << "WAR MAGIC: When you use your action to cast a cantrip, you can make a weapon" << endl;
							outfile << "attack as a bonus action" << endl;
						}

						if (lvl >= 10)
						{
							outfile << "ELDRITCH STRIKE: Your weapon attacks undercut resistance to your spells" << endl;
							outfile << "When you hit a creature with a weapon attack, it has the disadvantage on" << endl;
							outfile << "the next saving throw for a spell you cast before the end of your next turn" << endl;
						}

						if (lvl >= 15)
						{
							outfile << "While using Action Surge, you can teleport up to 30ft away to an unnocupied space" << endl;
							outfile << "you can see. You can do this before or after the additional action" << endl;
						}

						if (lvl >= 18)
						{
							outfile << "IMPROVED WAR MAGIC: When you use your action to cast a spell, you can make a weapon" << endl;
							outfile << "attack as a bonus action" << endl;
						}
					}
				}

				else if (Class == "Monk")
				{
					if (lvl >= 1)
					{
						outfile << "UNARMORED DEFENSE: While not using armor or a shield, your AC is 10 + your Dex" << endl;
						outfile << "modifier + your Wis mod" << endl;
						outfile << "MARTIAL ARTS: To start, a monk weapon is a shortsword or a simple weapon w/o the" << endl;
						outfile << "Two-Handed or Heavy property. While unarmored and only using monk weapons, you" << endl;
						outfile << "Gain the following benefits:" << endl << endl;
						outfile << "-You can use Dex instead of Str for attack and damage rolls for unarmed strikes" << endl;
						outfile << "and monk weapons" << endl << endl;
						outfile << "You roll can a d4 instead for damage for your unarmed attacks and monk weapons." << endl;
						outfile << "This changes per level (shown in the Martial Arts section of 'tabl')" << endl << endl;
						outfile << "-When you take the Attack action on your turn with an unarmed strike or monk" << endl;
						outfile << "weapon, you can make an unarmed strike as a bonus action" << endl << endl;
						outfile << "Some monk orders have special weapons, like Nunchaku (2 clubs + chain), or Kama" << endl;
						outfile << "(sickle with shorter blade). To use a weapon like this, find out what weapon it" << endl;
						outfile << "weapon it is most like in the Weapons section" << endl;
					}

					if (lvl >= 2)
					{
						int speedinc = 10;
						if (lvl >= 6) speedinc += 5;
						if (lvl >= 10) speedinc += 5;
						if (lvl >= 14) speedinc += 5;
						if (lvl >= 18) speedinc += 5;

						outfile << "UNARMORED MOVEMENT: WHile not wearing armor or a shield, your speed increases" << endl;
						outfile << "by " << speedinc << "ft" << endl;
						outfile << "KI: Ki Points work sort of like spell slots. They help you do Monk abilities." << endl;
						outfile << "The amount of points equal to your level. Some abilities" << endl;
						outfile << "require a Saving throw to be made. The DC for this is 8 + your proficiency bonus +" << endl;
						outfile << "your Wis modifier. You regain expended Points after a short or long rest, so long " << endl;
						outfile << "as 30 minutes of said rest are spent meditating. You start with 3 such abilities" << endl << endl;
						outfile << "-FLURRY OF BLOWS: Immediately after taking the Attack action on your turn, you can" << endl;
						outfile << "make 2 unarmed strikes as a bonus action" << endl << endl;
					}

					if (lvl >= 3)
					{
						outfile << "DEFLECT MISSILE: As a reaction, when hit by a ranged weapon attack, you can attempt" << endl;
						outfile << "to deflect or catch the missile. When you do, damage is reduced by 1d10 + Your Dex" << endl;
						outfile << "modifier + your Monk Level. If you reduce the damage to 0 in this way, you catch" << endl;
						outfile << "the missile if you have a hand open and the item can fit in your hand. If you" << endl;
						outfile << "catch the missile in this way, you can spend 1 Ki to throw it. You are proficient" << endl;
						outfile << "with the ammunition for the purpose of this throw. If it is not a Monk weapon, it" << endl;
						outfile << "becomes one for this feature. This throw is part of the same reaction" << endl;
					}

					if (lvl >= 4)
					{
						outfile << "SLOW FALL: You can use your reaction to a fall to reduce the damage taken" << endl;
						outfile << "from the fall by 5 x your Monk Level" << endl;
					}

					if (lvl >= 5)
					{
						outfile << "EXTRA ATTACK: You can attack twice when you take the Attack action on your turn" << endl;
					}

					if (lvl >= 6)
					{
						outfile << "KI-EMPOWERED STRIKES: Your unarmed strikes count as magical for the purpose" << endl;
						outfile << "of overcoming resistance to nonmagical attacks and damage" << endl;
					}

					if (lvl >= 7)
					{
						outfile << "EVASION: When subjected to a damage affect that requires a Dex save to take half damage," << endl;
						outfile << "you take no damage on a success and half damage on a fail" << endl;
					}

					if (lvl >= 9)
					{
						outfile << "UNARMORED MOVEMENT IMPROVEMENT: On your turn, while not wearing armor or a shield," << endl;
						outfile << "you can move across vertical or liquid surfaces without falling" << endl;
					}

					if (lvl >= 10)
					{
						outfile << "PURITY OF BODY: You can no longer be affected by poison or disease" << endl;
					}

					if (lvl >= 13)
					{
						outfile << "TOUNGUE OF THE SUN AND MOON: You now understand all spoken languages. Additionally," << endl;
						outfile << "any creature that understands any language can understand what you say" << endl;
					}

					if (lvl >= 14)
					{
						outfile << "DIAMOND SOUL: You not have proficiency in all saving throws. Additionally, if" << endl;
						outfile << "you fail a saving throw, you can spend 1 Ki to reroll it and take the second" << endl;
						outfile << "roll" << endl;
					}

					if (lvl >= 15)
					{
						outfile << "TIMELES BODY: You do not suffer the frailty of old age. You can still die of old age" << endl;
						outfile << "Additionally, you no longer need food or water" << endl;
					}

					if (lvl >= 18)
					{
						outfile << "EMPTY BODY: You can use your action to spend 4 Ki Points and become invisible" << endl;
						outfile << "During that time, you have resistance to all damage except Force. Additionally," << endl;
						outfile << "you can use 8 Ki points to use the Astral Projection spell without material" << endl;
						outfile << "components. When you do, you cannot take anyone else with you" << endl;
					}

					else if (lvl == 20)
					{
						outfile << "PERFECT SELF: When you roll initiative and have no Ki Points left," << endl;
						outfile << "you regain 4 Ki Points" << endl;
					}

					if (subclass == "hand")
					{
						if (lvl >= 3)
						{
							outfile << "OPEN HAND TECHNIQUE: When you hit an enemy with one of the extra Flurry of Blows attacks, " << endl;
							outfile << "you can impose one of the following effects:" << endl;
							outfile << "-Succeed a Dex throw or be knocked prone" << endl;
							outfile << "-Succeed a Str throw or be pushed up to 15ft back" << endl;
							outfile << "-Can't take reactions until the end of your next turn" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "WHOLENESS OF BODY: As an action, you can gain HP equal to 3x your monk level" << endl;
							outfile << "You can only use this once per long rest" << endl;
						}

						if (lvl >= 11)
						{
							outfile << "TRANQUILITY: At the end of a long rest, you gain the effect of a Sanctuary" << endl;
							outfile << "spell. The spell can end early as normal. The saving throw DC is 8 + Wis" << endl;
							outfile << "modifier + proficiency bonus" << endl;
						}

						if (lvl >= 17)
						{
							outfile << "QUIVERING PALM: When you hit a creature with an unarmed strike, you can spend 3 Ki Points" << endl;
							outfile << "to start imperceptible vibrations in that creature, which can last up to an amount of days" << endl;
							outfile << "equal to your monk level. They are harmless unless you use your action to end them. To end" << endl;
							outfile << "them, you must be on the same plance of existence. When you end them, the creature makes a" << endl;
							outfile << "Con saving throw. On a fail, it drops to 0 HP. On a success, it takes 10d10 necrotic damage" << endl;
							outfile << "You can only have one creature with your vibrations at a time. You can end the vibrations" << endl;
							outfile << "harmlessly without using an action" << endl;
						}
					}

					else if (subclass == "shad")
					{
						if (lvl >= 3)
						{
							outfile << "SHADOW ARTS: You can use your Ki to duplicate some spells. As an" << endl;
							outfile << "action, you can spend 2 Ki Points to cast Darkvision, Darkness, Pass" << endl;
							outfile << "Pass Without Trace, or Silence without needing the Material Components" << endl;
							outfile << "Additionally, you know the Minor Illusion cantrip if you don't already" << endl;
							outfile << "know it" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "SHADOW STEP: As a bonus action, while in dim light or darkness, you can" << endl;
							outfile << "teleport up to 60ft in an unnocupied space you can see that is also in" << endl;
							outfile << "in dim light or darkness. You then have the advantage on the first melee" << endl;
							outfile << "attack you make before the end of the turn" << endl;
						}

						if (lvl >= 11)
						{
							outfile << "CLOAK OF DARKNESS: When you are in an area of dim light or darkness, you" << endl;
							outfile << "can use your action to become invisible. You stay that way until making" << endl;
							outfile << "an attack, cast a spell, or go into a space with bright light" << endl;
						}

						if (lvl >= 17)
						{
							outfile << "OPPORTUNIST: When a creature within 5ft of you is hit by a creature other" << endl;
							outfile << "than you, you can use your reaction to make a melee attack on the first" << endl;
							outfile << "creature" << endl;
						}
					}

						
					else if (mtra == "lmns")
					{
						outfile << endl << "\n--RULES FOR SPELLCASTING WITH THE FOLLOWING ABILITIES--" << endl;
						outfile << "For any spell, you do not need material components. Once you reach 5th Level," << endl;
						outfile << "you can spend additional Ki Points to increase the level of your spell. 1 Ki" << endl;
						outfile << "point spent this way raises the level by 1. There is a table below for the max" << endl;
						outfile << "Ki Points you can spend in total on a spell, based on your level" << endl;
						outfile << "5th-8th: 3 Ki Points" << endl << "9th-12th: 4 Ki Points" << endl << "13th-16th: 5 Ki Points" << endl;
						outfile << "17th-20th: 6 Ki Points" << endl;

						if (lvl >= 3)
						{
							cout << "a- ELEMENTAL ATTUNEMENT: You can use your action to cause an elemental effect" << endl;
							cout << "	of your choice of the following options:" << endl;
							cout << "	-Create a harmless sensory effect related to one of the four elements" << endl;
							cout << "	such as some mist or sparks" << endl;
							cout << "	-Instantaneously light or snuff out a candle, torch, or small campfire" << endl;
							cout << "	-Chill or warm up to 1 pound of nonliving material for up to 1 hour" << endl;
							cout << "	-Cause earth, fire, water, or mist to shape itself within a 1ft cube" << endl;
							cout << "	into a crude form of your choice" << endl;
							cout << "b- FANGS OF FIRE STRIKE: When you use the Attack action on your turn, you" << endl;
							cout << "	can spend 1 Ki Point to make flames come from your fists and feet. Your" << endl;
							cout << "	unarmed strikes have an extra 10 ft of range and deal flame damage instead" << endl;
							cout << "	of bludgeoning. Also, while rolling for damage you can spend 1 Ki Point to" << endl;
							cout << "	deal an extra 1d10 of fire damage" << endl;
							cout << "c- FIST OF FOUR THUNDERS: You can spend 2 Ki Points to cast Thunderwave" << endl;
							cout << "d- FIST OF UNBROKEN AIR: You can create an air blast that functions like a fist." << endl;
							cout << "	You spend 2 Ki Points and choose a creature within 30ft of you. They must make" << endl;
							cout << "	a Str saving throw. On a fail, they take 3d10 bludgeoning damage plus 1d10 for" << endl;
							cout << "	each extra Ki Point you spend. You can push them back up to 20ft and knock them" << endl;
							cout << "	prone. On success, they take half that much damage and aren't pushed back or knocked" << endl;
							cout << "	prone." << endl;
							cout << "e- RUSH OF THE GALE SPIRITS: You can spend 2 Ki Points to cast Gust of Wind" << endl;
							cout << "f- SHAPE THE FLOWING WATER: As an action, you can spend 1 Ki Point to choose an area" << endl;
							cout << "	no larger than a 30ft cube within 120ft of you. Within that area, you can freely" << endl;
							cout << "	manipulate ice. You can change it into any shape you want, raise or lower elevation," << endl;
							cout << "	create pillars, and so forth. The thing you create cannot be larger than half the" << endl;
							cout << "	area's dimension (15ft items if the area is 30ft). Also, you can change water to" << endl;
							cout << "	ice and vice versa. You cannot use this to trap or injure a creature" << endl;
							cout << "g- SWEEPING CINDER STRIKE: You can spent 2 Ki Points to cast Burning Hands" << endl;
							cout << "h- WATER WHIP: You can spend 2 Ki Points as a bonus action to create a whip of water" << endl;
							cout << "	that and choose a creature to hit with the whip. They must make a Dex save. On" << endl;
							cout << "	a fail, they take 3d10 bludgeoning damage plus 1d10 for each extra Ki Point you" << endl;
							cout << "	spend. Also, they can either be knocked prone or pulled up to 25ft closer to you" << endl;
							cout << "	On a success, they take half that damage and aren't pulled or knocked prone" << endl;
						}

						if (lvl >= 6)
						{
							cout << "i- CLENCH OF THE NORTH WIND: You can spend 3 Ki Points to cast Hold Person" << endl;
							cout << "j- GONG OF THE SUMMIT: You can spend 3 Ki Points to cast Shatter" << endl;
						}

						if (lvl >= 11)
						{
							cout << "k- ETERNAL MOUNTAIN DEFENSE: You can spend 5 Ki Points to cast Stoneskin, targetting yourself" << endl;
							cout << "l- FLAMES OF THE PHOENIX: You can spend 4 Ki Points to cast Fireball" << endl;
							cout << "m- MIST STANCE: You can spend 4 Ki Points to cast Gaseous Form, targetting yourself" << endl;
							cout << "n- RIDE THE WIND: You can spend 4 Ki Points to cast Fly, targetting yourself" << endl;
						}

						if (lvl >= 17)
						{
							cout << "o- BREATH OF WINTER: You can spend 6 Ki Points to cast Cone of Cold" << endl;
							cout << "p- RIVER OF HUNGRY FLAME: You can spend 5 Ki Points to cast Wall of Fire" << endl;
							cout << "q- WAVE OF ROLLING EARTH: You can spend 6 Ki Points to cast Wall of Stone" << endl;
						}

						int feats = 1;
						if (lvl >= 6) feats++;
						if (lvl >= 11) feats++;
						if (lvl >= 17) feats++;
						
						for (int i = 0; i < feats; i++) {
							cout << "Pick a feature" << endl;
							cin >> x;

							if (x[0] == 'a') {
								outfile << "ELEMENTAL ATTUNEMENT: You can use your action to cause an elemental effect" << endl;
								outfile << "of your choice of the following options:" << endl;
								outfile << "-Create a harmless sensory effect related to one of the four elements" << endl;
								outfile << "such as some mist or sparks" << endl;
								outfile << "-Instantaneously light or snuff out a candle, torch, or small campfire" << endl;
								outfile << "-Chill or warm up to 1 pound of nonliving material for up to 1 hour" << endl;
								outfile << "-Cause earth, fire, water, or mist to shape itself within a 1ft cube" << endl;
								outfile << "into a crude form of your choice" << endl;
							}

							if (x[0] == 'b') {
								outfile << "FANGS OF FIRE STRIKE: When you use the Attack action on your turn, you" << endl;
								outfile << "can spend 1 Ki Point to make flames come from your fists and feet. Your" << endl;
								outfile << "unarmed strikes have an extra 10 ft of range and deal flame damage instead" << endl;
								outfile << "of bludgeoning. Also, while rolling for damage you can spend 1 Ki Point to" << endl;
								outfile << "deal an extra 1d10 of fire damage" << endl;
							}

							if (x[0] == 'c') {
								outfile << "FIST OF FOUR THUNDERS: You can spend 2 Ki Points to cast Thunderwave" << endl;
							}

							if (x[0] == 'd') {
								outfile << "FIST OF UNBROKEN AIR: You can create an air blast that functions like a fist." << endl;
								outfile << "You spend 2 Ki Points and choose a creature within 30ft of you. They must make" << endl;
								outfile << "a Str saving throw. On a fail, they take 3d10 bludgeoning damage plus 1d10 for" << endl;
								outfile << "each extra Ki Point you spend. You can push them back up to 20ft and knock them" << endl;
								outfile << "prone. On success, they take half that much damage and aren't pushed back or knocked" << endl;
								outfile << "prone." << endl;
							}

							if (x[0] == 'e') {
								outfile << "RUSH OF THE GALE SPIRITS: You can spend 2 Ki Points to cast Gust of Wind" << endl;
							}

							if (x[0] == 'f') {
								outfile << "SHAPE THE FLOWING WATER: As an action, you can spend 1 Ki Point to choose an area" << endl;
								outfile << "no larger than a 30ft cube within 120ft of you. Within that area, you can freely" << endl;
								outfile << "manipulate ice. You can change it into any shape you want, raise or lower elevation," << endl;
								outfile << "create pillars, and so forth. The thing you create cannot be larger than half the" << endl;
								outfile << "area's dimension (15ft items if the area is 30ft). Also, you can change water to" << endl;
								outfile << "ice and vice versa. You cannot use this to trap or injure a creature" << endl;
							}

							if (x[0] == 'g') {
								outfile << "SWEEPING CINDER STRIKE: You can spent 2 Ki Points to cast Burning Hands" << endl;
							}

							if (x[0] == 'h') {
								outfile << "WATER WHIP: You can spend 2 Ki Points as a bonus action to create a whip of water" << endl;
								outfile << "that and choose a creature to hit with the whip. They must make a Dex save. On" << endl;
								outfile << "a fail, they take 3d10 bludgeoning damage plus 1d10 for each extra Ki Point you" << endl;
								outfile << "spend. Also, they can either be knocked prone or pulled up to 25ft closer to you" << endl;
								outfile << "On a success, they take half that damage and aren't pulled or knocked prone" << endl;
							}

							if (x[0] == 'i') {
								outfile << "CLENCH OF THE NORTH WIND: You can spend 3 Ki Points to cast Hold Person" << endl;
							}

							if (x[0] == 'j') {
								outfile << "GONG OF THE SUMMIT: You can spend 3 Ki Points to cast Shatter" << endl;
							}

							if (x[0] == 'k') {
								outfile << "ETERNAL MOUNTAIN DEFENSE: You can spend 5 Ki Points to cast Stoneskin, targetting yourself" << endl;
							}

							if (x[0] == 'l') {
								outfile << "FLAMES OF THE PHOENIX: You can spend 4 Ki Points to cast Fireball" << endl;
							}

							if (x[0] == 'm') {
								outfile << "MIST STANCE: You can spend 4 Ki Points to cast Gaseous Form, targetting yourself" << endl;
							}

							if (x[0] == 'n') {
								outfile << "RIDE THE WIND: You can spend 4 Ki Points to cast Fly, targetting yourself" << endl;
							}

							if (x[0] == 'o') {
								outfile << "BREATH OF WINTER: You can spend 6 Ki Points to cast Cone of Cold" << endl;
							}

							if (x[0] == 'p') {
								outfile << "RIVER OF HUNGRY FLAME: You can spend 5 Ki Points to cast Wall of Fire" << endl;
							}

							if (x[0] == 'q') {
								outfile << "WAVE OF ROLLING EARTH: You can spend 6 Ki Points to cast Wall of Stone" << endl;
							}
						}

						outfile << "--------------------------" << endl;
					}
				}

				else if (Class == "Paladin")
				{
				
					if (lvl >= 1)
					{
						outfile << "DIVINE SENSE: You can sense the presence of good and evil. As an action," << endl;
						outfile << "you open your senses to these forces. Until the end of your next turn," << endl;
						outfile << "you know the location of any celestial, fiend, or undead within 60ft of " << endl;
						outfile << "you that isn't completely covered. You know the type of being you sense," << endl;
						outfile << "but no real specifics (like species or name). Within the same radius, you" << endl;
						outfile << "can sense any consecrated or desecrated land, like with the Hallow spell." << endl;
						outfile << "You can use this an amount of times equal to 1 + Cha modifier per long" << endl;
						outfile << "rest" << endl;
						outfile << "LAY ON HANDS: You have a pool of healing power that replenishes after a" << endl;
						outfile << "long rest. The amount in that bad boy is 5 * your Paladin level. As an" << endl;
						outfile << "action, you can touch a creature to heal if for HP with a max of however" << endl;
						outfile << "much is left in the pool. Additionally, you can use 5 points from the pool" << endl;
						outfile << "to cure the target of one disease or neutralize one posion affecting it. You" << endl;
						outfile << "can cure multiple things with one use, points permitting. This has no effect" << endl;
						outfile << "on undead or constructs." << endl;
					}
				
					if (lvl >= 2)
					{
						cout << "DIVINE SMITE: If you hit a creature with a melee weapon attack, you can use" << endl;
						cout << "a spell slot to deal extra radiant damage. The damage for a 1st level slot is" << endl;
						cout << "2d8, and increases by 1d8 for each slot higher (max of 5d8). If the target is" << endl;
						cout << "an undead or a fiend, the damege increases by 1d8, unnaffected by the max." << endl;
						outfile << "SPELLCASTING: You can into magic!" << endl;

						cout << "FIGHTING STYLE: You choose 1 fighting style. You cannot have more than one, even" << endl;
						cout << "if you later get to choose again" << endl;
						cout << endl << "--PALADIN FIGHTING STYLES--" << endl;
						cout << "a- DEFENSE: While wearing armor, you get an extra +1 to AC" << endl << endl;
						cout << "b- DUELING: While wielding a weapon in one hand and no other weapon, you" << endl;
						cout << "   gain a +2 bonus to damage with that weapon" << endl << endl;
						cout << "c- GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
						cout << "   for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
						cout << "   even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
						cout << "   '2-handed' or 'versatile' property" << endl << endl;
						cout << "d- PROTECTION: When a creature you see attacks another creature you see within" << endl;
						cout << "   5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
						cout << "   roll. You must be using a shield" << endl;
						cout << endl << "Enter your choice: " << endl;
						cin >> x;

						if (x[0] == 'a') {
							outfile << "DEFENSE: While wearing armor, you get an extra +1 to AC" << endl;
						}

						if (x[0] == 'b') {
							outfile << "DUELING: While wielding a weapon in one hand and no other weapon, you" << endl;
							outfile << "gain a +2 bonus to damage with that weapon" << endl;
						}

						if (x[0] == 'c') {
							outfile << "GREAT WEAPON FIGHTING: When you roll a 1 or 2 on a damage roll you make" << endl;
							outfile << "for a 2-handed weapon, you can reroll the die and MUST use the new roll," << endl;
							outfile << "even if it is a 1 or 2 again. You can only use this for weapons with the" << endl;
							outfile << "'2-handed' or 'versatile' property" << endl;
						}

						if (x[0] == 'd') {
							outfile << "PROTECTION: When a creature you see attacks another creature you see within" << endl;
							outfile << "5ft of you, you can use your reaction to impose a disadvantage on the attack" << endl;
							outfile << "roll. You must be using a shield" << endl;
						}
					}
					
					if (lvl >= 3)
					{
						outfile << "DIVINE HEALTH: You are immune to disease" << endl;
					}

					if (lvl >= 5)
					{
						outfile << "EXTRA ATTACK: You can attack twice instead of once when taking the Attack action on" << endl;
						outfile << "your turn" << endl;
					}

					int aura = 10;
					if (lvl >= 18) aura = 30;

					else if (lvl >= 6)
					{
						outfile << "AURA OF PROTECTION: Within " << aura << "ft of you, if a friendly makes a saving throw" << endl;
						outfile << "they gain a bonus equal to your Cha modifier. You must be conscious for this" << endl;
					}
					
					if (lvl >= 10)
					{
						outfile << "AURA OF COURAGE: Within " << aura << "ft of you, friendlies can't be frightened while you" << endl;
						outfile << "are conscious" << endl;
					}

					if (lvl >= 11)
					{
						outfile << "IMPROVED DIVINE SMITE: Any time you hit a creature with a melee weapon attack," << endl;
						outfile << "You deal an extra 1d8 radiant damage. If using Divine Smite, this damage is added" << endl;
						outfile << "to the bonus of Divine Smite" << endl;
					}

					if (lvl >= 14)
					{
						outfile << "CLEANSING TOUCH: You can use your action to end a spell's effect on you" << endl;
						outfile << "or a willing creature. You can use this a number of times equal to your" << endl;
						outfile << "Cha modifier per long rest" << endl;
					}
					
					if (subclass == "dvtn")
					{
						if (lvl >= 3)
						{
							outfile << "CHANNEL DIVINITY OPTIONS:" << endl;
							outfile << "-SACRED WEAPON: Using your Channel Divinity, as an action, you can embue a weapon" << endl;
							outfile << "you are holding with your power. For 1 minute, you add your Cha modifier to attack" << endl;
							outfile << "rolls made with the weapon. Also,it emits bright light for 20ft and dim light for" << endl;
							outfile << "20ft beyond that. If it is not already magical, it becomes so for the duration. You" << endl;
							outfile << "can end this effect on your turn as part of any other action. If you are no longer" << endl;
							outfile << "holding or carrying the weapon, or fall unconscious, the effect ends." << endl << endl;
							outfile << "-TURN THE UNHOLY: As an action, you present your holy symbol ans speak some holy words. Every undead" << endl;
							outfile << " or fiend that can see or hear you within 30ft must make a Wis saving throw. If they fail, they" << endl;
							outfile << "are turned for a minute or until taking damage. Turned creatures must spend their turns getting away" << endl;
							outfile << "from you. It can't willingly move within 30ft of you. A turned creature cannot make reactions. It" << endl;
							outfile << "can only use Dash as its action. If there is nowhere to use, it can use Dodge" << endl;
						}

						if (lvl >= 7)
						{
							outfile << "AURA OF DEVOTION: You and friendlies within " << aura <<"ft of you can't" << endl;
							outfile << "be charmed while you are conscious" << endl;
						}

						if (lvl >= 15)
						{
							outfile << "PURITY OF SPIRIT: You are constantly under the effects of a 'Protection" << endl;
							outfile << "from Good and Evil' spell." << endl;
						}

						if (lvl >= 20)
						{
							outfile << "HOLY NIMBUS- As an action, you emit an aura of sunlight. For 1" << endl;
							outfile << "minute, brightlight shines from you in a 30ft radiius, and dim" << endl;
							outfile << "light goes 30ft beyond that. When an enemy creature starts its" << endl;
							outfile << "turn in the bright light, it takes 10 radiant damage. Also, for" << endl;
							outfile << "the duration, you have the advantage on saving throws against" << endl;
							outfile << "spells from fiends and undead. This can be used once per long" << endl;
							outfile << "rest" << endl;
						}
					}
						
					else if (subclass == "acnt")
					{
						if (lvl >= 3)
						{
							outfile << "CHANNEL DIVINITY OPTIONS:" << endl;
							outfile << "-NATURE'S WRATH: As an action, cause a creature you can see within 10ft of you" << endl;
							outfile << "to ensnare with spectral vines. The creature must succeed a Str of Dex (its choice)" << endl;
							outfile << "or be restrained. While restrained, it repeats this at the end of its turns as well." << endl;
							outfile << "On success, it frees itself and the vines vanish." << endl;
							outfile << "-TURN THE FAITHLESS: As an action, you present your holy symbol ans speak some holy words. Every fey" << endl;
							outfile << " or fiend that can see or hear you within 30ft must make a Wis saving throw. If they fail, they" << endl;
							outfile << "are turned for a minute or until taking damage. Turned creatures must spend their turns getting away" << endl;
							outfile << "from you. It can't willingly move within 30ft of you. A turned creature cannot make reactions. It" << endl;
							outfile << "can only use Dash as its action. If there is nowhere to use, it can use Dodge" << endl;
						}

						if (lvl >= 7)
						{
							outfile << "AURA OF WARDING: You and friendlies within " << aura << "ft of you have resistance" << endl;
							outfile << "to spell damage" << endl;
						}

						if (lvl >= 15)
						{
							outfile << "UNDYING SENTINEL: When reduced to 0 HP but not outright killed, you" << endl;
							outfile << "can choose to drop to 1 HP instead. Can only use 1 per long rest. Also," << endl;
							outfile << "you don't suffer the effects of old age and can't be aged magically" << endl;
						}

						if (lvl >= 20)
						{
							outfile << "ELDER CHAMPION: As an action, you can transform into the form of an" << endl;
							outfile << "ancient force of nature (examples: green skin, leafy hair, etc.). This" << endl;
							outfile << "lasts for 1 minute, and for hat time you get the following benefits:" << endl;
							outfile << "-At the beginning of your turns, you regain 10 HP" << endl;
							outfile << "-When you use a Paladin spell with a casting time of 1 action, you can" << endl;
							outfile << " do it as a bonus action instead" << endl;
							outfile << "-Ememies within 10ft of you have disadvantage on saving throws against" << endl;
							outfile << " your spells and Channel Divinity options" << endl;
							outfile << "You may do this once per long rest" << endl;
						}
					}
						
					else if (subclass == "vngc")
					{
						if (lvl >= 3)
						{
							outfile << "CHANNE DIVINITY OPTIONS:" << endl;
							outfile << "-ABJURE ENEMY: As an action, you present your holy symbol ans speak a prayer of denunciation" << endl;
							outfile << "Using your Channel Divinity, choose a creature within 60ft of you that you can see. That" << endl;
							outfile << "creature must make a Wis saving throw. Fiends and undead have the disadvantage on this throw." << endl;
							outfile << "On a fail, they become frightened for 1 minute of until it takes damage. While frightened, its" << endl;
							outfile << "speed is 0 and it can't benifit from any speed bonuses. On a success, its speed is halved for" << endl;
							outfile << "a minute, or until it takes damage" << endl;
							outfile << "-VOW OF ENMITY: As a bonus action, you can take a Vow of Enmity against a creature you can see" << endl;
							outfile << "within 10ft of you, using Channel Divinity. You get the advantage on attack rolls on that" << endl;
							outfile << "creature for 1 minute or until it falls unconscious or hits 0 HP" << endl;
						}

						if (lvl >= 7)
						{
							outfile << "RELENTLESS AVENGER: When you hit an enemy with an opportunity" << endl;
							outfile << "attack, you can move up to half your movement speed immediately" << endl;
							outfile << "after as part of the same reaction. This doesn't provoke opportunity" << endl;
							outfile << "attacks on you" << endl;
						}

						if (lvl >= 15)
						{
							outfile << "SPIRIT OF VENGEANCE: When a creature under your Vow of Enmity" << endl;
							outfile << "makes an attack, you can use your reaction to make a melee weapon attack on them" << endl;
							outfile << "if they are in range" << endl;
						}

						else if (sothchoice == "20th")
						{
							outfile << "AVENGING ANGEL: Once/long rest, using your action, you can transform. For 1 hour, you" << endl;
							outfile << "Gain the following features:" << endl;
							outfile << "-Wings sprout from your back, you get a flying speed of 60ft" << endl;
							outfile << "-You emanate a 30ft aura of menace. The first time an enemy enters the" << endl;
							outfile << " aura or starts a turn there, they become frightened for 1 minute or" << endl;
							outfile << " until taking damage. Attack rolls on those creatures have the advantage" << endl;
						}
					}
				}

				else if (Class == "Ranger")
				{
					int favored = 1;
					if (lvl >= 6) favored += 1;
					if (lvl >= 14) favored += 1;

					int terrain = 1;
					if (lvl >= 6) terrain += 1;
					if (lvl >= 10) terrain += 1;

					if (lvl >= 1)
					{
						outfile << "FAVORED ENEMY: Choose a type of favored enemy OR two types of humanoid enemies." << endl;
						outfile << "You have the advantage on Wis(Survival) checks to track thhat kind of enemy and" << endl;
						outfile << "on Int checks to recall information about them. You also learn one additional" << endl;
						outfile << "language spoken by that type of enemy, if they speak one." << endl;
						outfile << "Your Favored Enemies are:" << endl;

						cout << "Choose " << favored << " favored enemies. your options are:" << endl;
						cout << "a-Aberrations\nb-Beasts\nc-Celestials\nd-Constructs\ne-Dragons\nf-Elementals\ng-Fey\nh-Fiends" << endl;
						cout << "i-Giants\nj-Monstrosities\nk-Oozes\nl-Plants\nm-Undead" << endl;
						for (int i = 0; i < terrain; i++) {
							cout << endl << "Enter your choice: ";
							cin >> x;

							if (x[0] == 'a') {
								outfile << "-Abberations" << endl;
							}

							else if (x[0] == 'b') {
								outfile << "-Beasts" << endl;
							}

							else if (x[0] == 'c') {
								outfile << "-Celestials" << endl;
							}

							else if (x[0] == 'd') {
								outfile << "-Constructs" << endl;
							}

							else if (x[0] == 'e') {
								outfile << "-Dragons" << endl;
							}

							else if (x[0] == 'f') {
								outfile << "-Elementals" << endl;
							}

							else if (x[0] == 'g') {
								outfile << "-Fey" << endl;
							}

							else if (x[0] == 'h') {
								outfile << "-Fiends" << endl;
							}

							else if (x[0] == 'i') {
								outfile << "-Giants" << endl;
							}

							else if (x[0] == 'j') {
								outfile << "-Monstrosities" << endl;
							}

							else if (x[0] == 'k') {
								outfile << "-Oozes" << endl;
							}

							else if (x[0] == 'l') {
								outfile << "-Plants" << endl;
							}

							else if (x[0] == 'm') {
								outfile << "-Undead" << endl;
							}
						}

						cout << "You need to choose " << terrain << " Favored Terrain. Your options are:" << endl;

						cout << "a-Arctic\nb-Coast," << endl;
						cout << "c-Desert\nd-Forest\ne-Grassland\nf-Mountain\ng-Swamp\nh-Underdark." << endl;

						for (int i = 0; i < terrain; i++) {
							cout << "Enter your terrain: ";
							cin >> x;

							if (x[0] == 'a') outfile << "-Arctic" << endl;
							else if (x[0] == 'b') outfile << "-Coast" << endl;
							else if (x[0] == 'c') outfile << "-Desert" << endl;
							else if (x[0] == 'd') outfile << "-Forest" << endl;
							else if (x[0] == 'e') outfile << "-Grassland" << endl;
							else if (x[0] == 'f') outfile << "-Mountain" << endl;
							else if (x[0] == 'g') outfile << "-Swamp" << endl;
							else if (x[0] == 'h') outfile << "-Underdark" << endl;
						}

						outfile << "NATURAL EXPLORER: Your favored terrains are: ";
						outfile << "Wis or Int check related to that terrain, your proficiency bonus is doubled" << endl;
						outfile << "If you are proficient in the skill being used. Also, in this terrain, you and" << endl;
						outfile << "your party gain the following effects: " << endl;
						outfile << "-Diffucult terrain doesn't slow your travel" << endl;
						outfile << "-Your group can't get lost except by magical means" << endl;
						outfile << "-Even while doing another activity during travel (i.e. foraging), you are alert" << endl;
						outfile << " for danger" << endl;
						outfile << "-If travelling alone, you can move stealthily at a normal pace" << endl;
						outfile << "-When foraging, you find twice as much food as normal" << endl;
						outfile << "-When tracking creatures in the terrain, you can also tell their number, size, and" << endl;
						outfile << " how long ago they were in the area" << endl;
						if (lvl >= 3) outfile << "-When using Primeval Awareness, the range increases to 6 miles for you" << endl;
					}
					
					if (lvl >= 2)
					{
						cout << "Choose a fighting style. Options are: " << endl;
						cout << "a- Archery\nb-Defense\nc-Dueling\nd-Two-Weapon fighting" << endl;
						cout << endl << "Enter your choice: ";
						cin >> x;

						if (x[0] == 'a') outfile << "-ARCHERY: +2 bonus on attack rolls for ranged weapons" << endl;
						else if (x[0] == 'b') outfile << "-DEFENSE: Extra +2 to AC while wearing armor" << endl;
						else if (x[0] == 'c') {
							outfile << "-DUELING: While holding a melee weapon in one hand and no other weapons," << endl;
							outfile << " you get a +2 bonus on damage rolls with that weapon" << endl;
						}
						else if (x[0] == 'd') {
							outfile << "-TWO-WEAPON FIGHTING (Dual Wielding): When doing two-weapon fighting, you can" << endl;
							outfile << " put your ability modifier on the second attack" << endl;
						}
					}
					
					if (lvl >= 3)
					{
						outfile << "PRIMEVAL AWARENESS: You can use your action and a spell slot to focus on the" << endl;
						outfile << "area around you. For 1 minute per spell slot level used, you can sense if" << endl;
						outfile << "aberrations, celestials, dragons, elementals, fey, fiends, or undead are within" << endl;
						outfile << "1 mile of you. This feature doesn't reveal the creatures' location or number" << endl;
					}

					if (lvl >= 5)
					{
						outfile << "EXTRA ATTACK: You can attack twice instead of once when you take the Attack" << endl;
						outfile << "action on your turn" << endl;
					}

					if (lvl >= 8)
					{
						outfile << "LAND'S STRIDE: Moving through difficult nonmagical terrain costs you no" << endl;
						outfile << "extra movement. You can also pass through nonmagical plants without being" << endl;
						outfile << "slowed or taking damage from thorns, spines, etc. Additionally, you have the" << endl;
						outfile << "advantage on saving throws against magical plants used to impede movement," << endl;
						outfile << "such as those made by the 'entangle' spell" << endl;
					}
					
					if (lvl >= 10)
					{
						outfile << "HIDE IN PLAIN SIGHT: You can spend 1 minute to apply camoflauge to" << endl;
						outfile << "yourself, given access to mud, dirt, plants, and other naturalmaterials" << endl;
						outfile << "for camoflauge. Once camoflauged, you can hide by pressing up against" << endl;
						outfile << "a solid surface at least as tall and wide as you are. You gain a +10" << endl;
						outfile << "bonus to Dex(Stealth) checks as long as you stay there without moving" << endl;
						outfile << "or taking actions. If you do, you must reapply camoflauge to regain the" << endl;
						outfile << "benefit." << endl;
					}

					if (lvl >= 14)
					{
						outfile << "VANISH: You can use the Hide action as a bonus action on your turn. Also," << endl;
						outfile << "you can't be tracked by nonmagical means, unless you choose to leave a" << endl;
					}

					if (lvl >= 18)
					{
						outfile << "FERAL SENSES: When you attack a creature you can't see, your inability" << endl;
						outfile << "to see it doesn't impose a disadvantage on attack rolls against it. Also," << endl;
						outfile << "you are aware of the location of any invisible creature within 30ft of you," << endl;
						outfile << "provided it isn't hidden from you and you aren't deafened or blinded" << endl;
					}

					if (lvl >= 20)
					{
						outfile << "FOE SLAYER: Once per your turn, you can add your Wis modifier to the attack" << endl;
						outfile << "or damage roll made on one of your Favored Enemies. You can do this before or" << endl;
						outfile << "after the roll, but it must be before the effects of the roll are done" << endl;
					}
					
					else if (rngr == "rarc")
					{
						if (subclass == "hntr")
						{
							if (lvl >= 3)
							{
								cout << "Choose: [c]olossus slayer, [g]iant killer, or [h]orde breaker: ";
								cin >> x;

								if (x[0] == 'c') {
									outfile << "-COLLOSSUS SLAYER: If you higt a creature with a weapon attack and it is" << endl;
									outfile << " below its max HP, it takes an extra 1d8 damage. You can do this once per" << endl;
									outfile << " turn" << endl;
								}
								else if (x[0] == 'g') {
									outfile << "-GIANT KILLER: If a Large or larger creature is within 5ft of you and hits" << endl;
									outfile << " or misses you with an attack, you can use your reaction to attack it right" << endl;
									outfile << " after its attack, so long as you can see it" << endl;
								}
								else if (x[0] == 'h') {
									outfile << "-HORDE BREAKER: Once per your turn when you make a weapon attack, you can make" << endl;
									outfile << " another attack with the same weapon to a creature within 5ft of the first and" << endl;
									outfile << " within the range of your weapon" << endl;
								}
							}

							if (lvl >= 7)
							{
								cout << "DEFENSIVE TACTICS: Choose between [e]scape the horde, [m]ultiattack defense, or [s]teel will" << endl;
								cin >> x;

								if (x[0] == 'e') outfile << "-ESCAPE THE HORDE: Opportunity attacks against you have the disadvantage" << endl;

								if (x[0] == 'm') {
									outfile << "-MULTIATTACK DEFENSE: When a creature hits you with a weapon attack, you gain" << endl;
									outfile << " a +4 bonus to AC against all subsequent attacks from that creature until the" << endl;
									outfile << " end of the turn" << endl;
								}

								else if (x[0] == 's') outfile << "-STEEL WILL: You have the advantage on saving throws against being frightened" << endl;
							}

							if (lvl >= 11)
							{
								cout << "MULTIATTACK: Choose [v]olley or [w]hirlwind attack:" << endl;
								cin >> x;

								if (x[0] == 'v') {
									outfile << "-VOLLEY: You can use your action to make a ranged weapon attack to any number" << endl;
									outfile << " of creatures within 10ft of a point you can see. You must have ammunition for" << endl;
									outfile << " each target, and must make a separate attack roll for each" << endl;
								}

								else if (x[0] == 'w') {
									outfile << "-WHIRLWIND ATTACK: You can use your action to make a weapon attack to any number" << endl;
									outfile << " of creatures within 5ft of you, with a separate attack roll for each target" << endl;
								}
							}

							if (lvl >= 15)
							{
								cout << "SUPERIOR HUNTER'S DEFENSE: Choose [e]vasion, [s]tand against the tide, or [u]ncanny dodge" << endl;
								cin >> x;

								if (x[0] == 'e') {
									outfile << "-EVASION: When you make a dex throw that normally yields taking half damage on" << endl;
									outfile << " a success, you instead take no damage on a success and half damage on a fail" << endl;
								}

								else if (x[0] == 's') {
									outfile << "-STAND AGAINST THE TIDE: When a creature misses you with a weapon attack, you" << endl;
									outfile << " can use your reaction to force it to make the same attack on another creature" << endl;
									outfile << " of your choice, other than itself" << endl;
								}

								else if (x[0] == 'u') {
									outfile << "-UNCANNY DODGE: When an attacker you can see hits you with an attack, you can" << endl;
									outfile << " use your reaction to halve the damage" << endl;
								}
							}
						}
						
						else if (subclass == "bmst")
						{
							if (lvl >= 3)
							{
								outfile << "RANGER'S COMPANION: You get a beast companion. Choose a beast no" << endl;
								outfile << "larger than Medium with a CR of 1/4 or lower. Add your proficiency" << endl;
								outfile << "bonus to its AC, attack rolls, damage rolls, and any saving throws" << endl;
								outfile << "or skill checks the beast is proficient in. Its HP is its normal" << endl;
								outfile << "or 4x your Ranger level, whichever is higher. The beast obeys you" << endl;
								outfile << "as best it can. It takes its turn on your initiative, but doesn't" << endl;
								outfile << "act unless you tell it to. On your turn you can tell it where to" << endl;
								outfile << "move without using an action. You can use your action to tell it" << endl;
								outfile << "to make the Attack, Dash, Disengage, Dodge, or Help action. Once" << endl;
								outfile << "you have the Extra Attack feature, you can do one attack with the" << endl;
								outfile << "beast and one with you. While travelling in a Favored terrain with" << endl;
								outfile << "only the beast, you can move stealthily at a normal pace. If it dies," << endl;
								outfile << "you can get a new one by spending 8 hours magically bonding with a" << endl;
								outfile << "new creature which can be the same or a new type as the old one, so" << endl;
								outfile << "long as it still meets the requirements" << endl;
							}

							if (lvl >= 7)
							{
								outfile << "EXCEPTIONAL TRAINING: On any turn your beast doesn't attack, you can use" << endl;
								outfile << "a bonus action to command it to take the Dash, Disengage, Dodge, or Help" << endl;
								outfile << "action on its turn" << endl;
							}

							if (lvl >= 11)
							{
								outfile << "Your beast can make two attacks when you command it to make the Attack" << endl;
								outfile << "action on your turn" << endl;
							}

							if (lvl >= 15)
							{
								outfile << "When you cast a spell targetting yourself, you can also target your beast" << endl;
								outfile << "if it is within 30ft of you" << endl;
							}
						}
					}
				
				}

				else if (Class == "Rogue")
				{
					
					if (lvl >= 1)
					{
						int ex = 2;
						if (lvl >= 6) ex = 4;
						outfile << "EXPERTISE: Choose " << ex << " skill proficiencies or one skill and thieves' tools." << endl;
						outfile << "all checks made with these skills (or tools) have a doubled proficiency" << endl;
						outfile << "bonus." << endl;
						outfile << "SNEAK ATTACK: If you have the advantage on an attack roll, you can deal" << endl;
						outfile << "an extra 1d6 of damage of the weapon is ranged or finesse. You can use" << endl;
						outfile << "this once per turn. You don't need to have the advantage on the roll" << endl;
						outfile << "if another enemy of the target is within 5ft of it, if you don't have" << endl;
						outfile << "the disadvantage, AND if it isn't incapacitated. The amount of damage" << endl;
						outfile << "from this increases with level, shown in the 'tabl' section." << endl;
						outfile << "THIEVES' CANT: You know the secret language of thieves. Only another" << endl;
						outfile << "creature that knows Thieve's Cant can understand such messages. It" << endl;
						outfile << "takes 4x longer to convey messages this way than regularly. Also," << endl;
						outfile << "you understand a set of simple secret signs and symbols used for" << endl;
						outfile << "short messages, such as if there is dangerous territory nearby, if" << endl;
						outfile << "a territory is owned by the thieves' guild, if loot is nearby, if the" << endl;
						outfile << "people in an area are easy targets, or if a safe house for thieves are" << endl;
						outfile << "nearby" << endl;
					}
					
					if (lvl >= 2)
					{
						outfile << "CUNNING ACTION: You can take a bonus action on each of your turns in combat." << endl;
						outfile << "This can only be used to make the Dash, Disengage, or Hide actions" << endl;
					}

					if (lvl >= 5)
					{
						outfile << "UNCANNY DODGE: When an attacker you can see hits you with an attack, you can" << endl;
						outfile << "use your reaction to halve its damage to you" << endl;
					}
					
					if (lvl >= 7)
					{
						outfile << "EVASION: When you are subjected to an effect that makes you do a Dex save to take" << endl;
						outfile << "half damage, on a success you now take no damage, and on a fail take half damage" << endl;
					}

					if (lvl >= 11)
					{
						outfile << "RELIABLE TALENT: If you make a check that you can use a prof. bonus on, you can" << endl;
						outfile << "treat any d20 roll lower than a 10 as a 10." << endl;
					}

					if (lvl >= 14)
					{
						outfile << "BLINDSENSE: If you can hear, you are aware of the location of any hidden or" << endl;
						outfile << "invisible enemies within 10ft of you" << endl;
					}

					if (lvl >= 18)
					{
						outfile << "ELUSIVE: No attack roll can have the advantage on you while you aren't incapacitated" << endl;
					}

					if (lvl >= 20)
					{
						outfile << "STROKE OF LUCK: If your attack misses an enemy within range, you can turn it into a hit." << endl;
						outfile << "Alternatively, If you fail an ability check, you can treat the roll as a nat20. You can" << endl;
						outfile << "do this once per short or long rest" << endl;
					}
					
					if (subclass == "thf")
					{
						if (lvl >= 3)
						{
							outfile << "FAST HANDS: You can use the bonus action from your Cunning Action to make a" << endl;
							outfile << "Dex (Sleight of Hand) check, use your Theives' Tools to disarm a trap or open" << endl;
							outfile << "a lock, or take the Use an Object action" << endl;
							outfile << "SECOND-STORY WORK: Climbing no longer costs extra movement. Additionally, when" << endl;
							outfile << "you make a running jump, the distance you jump increases by an amount of feet" << endl;
							outfile << "equal to your Dex modifier" << endl;
						}

						if (lvl >= 9)
						{
							outfile << "SUPREME SNEAK: You have advantage on Dex (Stealth) checks where you move no more" << endl;
							outfile << "than half your speed on that turn" << endl;
						}

						if (lvl >= 13)
						{
							outfile << "USE MAGIC DEVICE: You can ignore all class, race, and level requirements on the use" << endl;
						}

						if (lvl >= 17)
						{
							outfile << "THIEF'S REFLEXES: You can take two turns during the first round of any combat. You" << endl;
						}
					}
						
					else if (subclass == "assn")
					{
						if (lvl >= 3)
						{
							outfile << "ASSASSINATE: You have the advantage on attack rolls against creatures that haven't" << endl;
							outfile << "taken a turn in the combat yet. Additionally, any hit against a surprised creature" << endl;
							outfile << "is critical" << endl;
						}

						if (lvl >= 9)
						{
							outfile << "INFILTRATION EXPERTISE: You can make fake identities for yourself. You must spend 7" << endl;
							outfile << "days and 25gp to create the history, profession, etc of your fake self. You can't make" << endl;
							outfile << "an ID already used by someone else. The process entails getting clothes, letters of" << endl;
							outfile << "introduction, letters of reccomendation, official looking certifications for jobs, etc" << endl;
							outfile << "Once you finish, if you assume that identity as a disguise, other creatures will believe" << endl;
							outfile << "you to be that person until given an extremely obvious reason not to" << endl;
						}

						if (lvl >= 13)
						{
							outfile << "IMPOSTOR: You can perfectly mimic a person's speech, mannerisms, and handwriting so long" << endl;
							outfile << "as you have spent 3 hours studying each. This ruse is indiscernable by casual observers." << endl;
							outfile << "If a creature gets wary, you have the advantage on a Cha(Deception) check to avoid detection" << endl;
						}

						if (lvl >= 17)
						{
							outfile << "DEATH STRIKE: When you hit a surprised creature, the creature makes a Con Saving Throw" << endl;
							outfile << "with DC 8 + your Dex mod. + your proficiency bonus. On a fail, double the damage of" << endl;
							outfile << "attack on the creature" << endl;
						}
					}
						
					else if (subclass == "actr")
					{
						if (lvl >= 3)
						{
							outfile << "MAGE HAND LEGERDEMAIN: When you cast 'Mage Hand', you can make it invisible" << endl;
							outfile << "and it can perform the additional following actions:" << endl;
							outfile << "-Can stow one object the hand is holding in a container worn or carried by" << endl << " another creature" << endl;
							outfile << "-Can retrieve an object from a contaier worn or carried by another creature" << endl;
							outfile << "-Can use thieve's tools to pick locks and disarm traps at a range" << endl;
							outfile << "You can perform these tasks without being noticed if you succeed on a Dex" << endl;
							outfile << "(Sleight of Hand) check against the creature's Wis(Perception) check" << endl;
							outfile << "Additionally, you can use the bonus action from your Cunning Action to" << endl;
							outfile << "control the hand" << endl;
						}

						if (lvl >= 9)
						{
							outfile << "MAGICAL AMBUSH: If you are hidden from a creature when you cast a spell that" << endl;
							outfile << "targets it, it has the disadvantage on any saving throws against that spell" << endl;
							outfile << "this turn" << endl;
						}

						if (lvl >= 13)
						{
							outfile << "VERSATILE TRICKSTER: You can distract creatures with your Mage Hand. As a" << endl;
							outfile << "bonus action on your turn, you can designate a creature within 5ft of the hand." << endl;
							outfile << "Until end of turn, you have the advantage on attack rolls on that creature" << endl;
						}

						if (lvl >= 17)
						{
							outfile << "SPELL THIEF: Once per long rest, immediately after a creature casts a spell targetting you" << endl;
							outfile << "or including you in its AOE, you can use your reaction to force the creature to make a saving" << endl;
							outfile << "throw with its spellcasting ability modifier. The DC equals your spell save DC. On a failed save," << endl;
							outfile << "you negate the spell's effect on you and steal the knowledge of how to cast it if it is at least" << endl;
							outfile << "1st Level spell of a level that you can cast (doesn't have to be a Wizard spell). For the next" << endl;
							outfile << "8 hours, you know the spell and can cast it using your spell slots. The creature can't cast the" << endl;
							outfile << "spell until the 8 hours have passed." << endl;\
						}
					}
				}

				else if (Class == "Sorcerer")
				{
					
					if (lvl >= 2)
					{
						outfile << "FONT OF MAGIC: You can tap into you well of magic, which is represented by Sorcery" << endl;
						outfile << "Points (SP). You regain spent SP at the ";
						outfile << "end of a long rest, and cannot have more than your level's max at any one time." << endl;
						outfile << "FLEXIBLE CASTING: You can turn spell slots into SP and vice versa. Either action is" << endl;
						outfile << "done as a bonus action on your turn. The conversion table of spell slots is below." << endl;
						outfile << "Conversion Table (spell slot - amt. of SP):" << endl;
						outfile << "1st - 2" << endl << "2nd - 3" << endl << "3rd - 5" << endl << "4th - 6" << endl << "5th - 7" << endl;
					}
					
					if (lvl >= 3)
					{
						int metas = 2;
						if (metas >= 10) metas++;
						if (metas >= 17) metas++;

						outfile << "METAMAGIC: You can twist your spells to do what you need. You can generally only use one" << endl;
						outfile << "metamagic per spell. Your options are: ";
						cout << "Choose " << metas << " metamagic options. Your options are: " << endl;
						cout << "a-Careful spell\nb-Distant spell\nc-Empowered spell\nd-Extended spell\ne-Heightened spell\nf-Quickened spell" << endl;
						cout << "g-Subtle spell\nh-Twinned spell" << endl;

						for (int i = 0; i < metas; i++) {
							cin >> x;
							if (x == "a") {
								outfile << "-CAREFUL SPELL: You can protect creatures from your spell's full force spend 1 SP and" << endl;
								outfile << " choose a number of creatures up to your Cha modifier (min. of 1 creature). All chosen" << endl;
								outfile << " creatures succeed the saving throw from your spell" << endl;
							}

							else if (x == "b") {
								outfile << "-DISTANT SPELL: If a spell you cast has a range of 5ft or greater, you can spend 1 SP to" << endl;
								outfile << " double the range. If the range is touch, you can spend 1 SP to make the range 30ft" << endl;
							}

							else if (x == "c") {
								outfile << "-EMPOWERED SPELL: You can spend 1 SP to reroll a number of damage dice up to your Cha" << endl;
								outfile << " modifier. You have to use the new rolls. You can use Empowered Spell even if you applied" << endl;
								outfile << " a different Metamagic to the same spell" << endl;
							}

							else if (x == "d") {
								outfile << "-EXTENDED SPELL: If a spell you cast has a duration of 1 minute, you can spend 1 SP to" << endl;
								outfile << " double its duration, to a maximum of 24 hours" << endl;
							}

							else if (x == "e") {
								outfile << "-HEIGHTENED SPELL: When you cast a spell that causes a creature to make a saving throw" << endl;
								outfile << " to resist its effects, you can spend 3 SP to give it the disadvantage on the first of" << endl;
								outfile << " those throws." << endl;
							}

							else if (x == "f") {
								outfile << "-QUICKENED SPELL: If a spell has a casting time of 1 action, you can spend 1 SP to make" << endl;
								outfile << " its casting time 1 bonus action" << endl;
							}

							else if (x == "g") outfile << "-SUBTLE SPELL: You can spend 1 SP to remove the verbal and somatic components of a spell" << endl;

							else if (x == "h") {
								outfile << "-TWINNED SPELL: When you cast a spell that targets only one creature and has a range larger" << endl;
								outfile << " than self, you can spend an amount of SP equal to the spell's level to target a second" << endl;
								outfile << " creature in range with the same spell" << endl;
							}
						}
					}
					
					if (lvl >= 20)
					{
						outfile << "SORCEROUS RESTORATION: You regain 4 spent SP after a short rest" << endl;
					}
					
					if (subclass == "dbld")
					{
						cout << "Pick a bloodline. the letter in front of the color option will be how you pick your bloodline. Optiona are:" << endl;
						cout << "Acid - a. Black, b. Copper" << endl << "Lightning - c. Blue, d. Bronze" << endl << "c. Fire - e. Brass, f. Gold, g. Red" << endl;
						cout << "Poison - h. Green" << endl << "Cold - i. Silver, j. white" << endl;
						cin >> x;

						string ancestor = "";
						if (x == "a") ancestor = "Black Acid";
						else if (x == "b") ancestor = "Copper Acid";
						else if (x == "c") ancestor = "Blue Lightning";
						else if (x == "d") ancestor = "Bronze Lightning";
						else if (x == "e") ancestor = "Brass Fire";
						else if (x == "f") ancestor = "Gold Fire";
						else if (x == "g") ancestor = "Red Fire";
						else if (x == "h") ancestor = "Green Poison";
						else if (x == "i") ancestor = "Silver Cold";
						else if (x == "j") ancestor = "White Cold";

						if (lvl >= 1)
						{
							outfile << "ANCESTRY: " << ancestor << " Dragon" << endl << endl;
							outfile << "DRAGON ANCESTOR: You can speak, read, and write Draconic. Also, when you make a Cha" << endl;
							outfile << "check interacting with dragons, the proficiency bonus is doubled if it applies." << endl;
							outfile << "DRACONIC RESILIENCE: Your HP max increases by 1, and does it again every time you gain" << endl;
							outfile << "a level in this class. Additionally, parts of your skin are covered by a thin sheen of" << endl;
							outfile << "dragon-like scales. When you aren't wearing armor, your AC is 13 + your Dex modifier" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "ELEMENTAL AFFINITY: When you cast a spell that deals damage of the kind of your draconic" << endl;
							outfile << "ancestry, you can add your Cha modifier to that damage. At the same time, you can spend" << endl;
							outfile << "1 SP to gain resistance to that type of damage for 1 hour" << endl;
						}

						if (lvl >= 14)
						{
							outfile << "DRAGON WINGS: As a bonus action on your turn, you can create dragon wings on your" << endl;
							outfile << "back, gaining a flying speed equal to your current walking speed. They last until" << endl;
							outfile << "you dismiss them as a bonus action on your turn. You can't manifest them while" << endl;
							outfile << "wearing armor that doesn't accomodate them. If you are wearing clothes that don't" << endl;
							outfile << "accomodate them, they may be destroyed when you manifest them" << endl;
						}

						else if (sorg == "18th")
						{
							outfile << "DRACONIC PRESENCE: As an action, you can spend 5 SP to exude an aura of awe or fear" << endl;
							outfile << "(your choice) to a distance of 60ft. For 1 minute or until you lose concentration, " << endl;
							outfile << "each hostile creature that starts its turn in your aura must make a Wis save. On a" << endl;
							outfile << "fail, it is either charmed (awe) or frightened (fear) of you for the duration of the" << endl;
							outfile << "aura. On a success, it is immune to your aura for 24 hours" << endl;
						}
					}
					
					else if (subclass == "wldm")
					{
						if (lvl >= 1)
						{
							outfile << "WILD MAGIC SURGE: Immediately after you cast a sorcerer spell of 1st level or higher, the" << endl;
							outfile << "DM can have you roll a d20. If you roll a 1, roll on the Wild Magic Surge table (WMST) for" << endl;
							outfile << "a random effect instead of doing the initial spell's effect" << endl;
							outfile << "TIDES OF CHAOS: Once per long rest (exception at end), you can give yourself the" << endl;
							outfile << "advantage on an attack roll, ability check, or saving throw. Any time before you" << endl;
							outfile << "regain the use of this effect, the DM can have you to roll on the WMST immediately" << endl;
							outfile << "after casting a sorcerer spell of 1st Level or higher. If they do, you regain the" << endl;
							outfile << "use of this feature" << endl;
						}

						if (lvl >= 6)
						{
							outfile << "BEND LUCK: When another creature you can see makes an attack roll, ability check, or" << endl;
							outfile << "saving throw, you can use your reaction and 2 SP to add 1d4 as a penalty or bonus to" << endl;
							outfile << "the roll. You can do this after the creature rolls but before effects happen" << endl;
						}

						else if (lvl >= 14)
						{
							outfile << "CONTROLLED CHAOS: When you roll on the WMST you can roll twice and choose either roll" << endl;
						}

						if (lvl >= 18)
						{
							outfile << "SPELL BOMBARDMENT: Once per turn, when rolling damage for a spell, if you roll the" << endl;
							outfile << "highest number possible on any of those dice, choose one of those dice, roll it again" << endl;
							outfile << "and add that roll to the damage (on top of all original rolls)" << endl;
						}
					}
				}

				else if (Class == "Warlock")
				{
					string boon = "";
					if (lvl >= 2)
					{
						int invocations = 2;
						if (lvl >= 5) invocations++;
						if (lvl >= 7) invocations++;
						if (lvl >= 9) invocations++;
						if (lvl >= 12) invocations++;
						if (lvl >= 15) invocations++;
						if (lvl >= 18) invocations++;

						cout << endl << "Pick " << invocations << " Eldritch Invocations. Options are:" << endl;
						cout << "a-ARMOR OF THE SHADOWS: You can cast Mage Armor on yourself at will w/o expending a spell slot" << endl;
						cout << "b-BEAST SPEECH: You can cast Speak with Animals at will w/o expending a spell slot" << endl;
						cout << "c-BEGUILING INFLUENCE: You gain proficiency in Deception and Persuasion" << endl;
						cout << "d-DEVIL'S SIGHT: You can see normally in darkness, both magical and nonmagical, to a distance" << endl;
						cout << " of 120 feet" << endl;
						cout << "e-ELDRITCH SIGHT: You can cast Detect Magic at will w/o expending a spell slot" << endl;
						cout << "f-EYES OF THE RUNE KEEPER: You can read all writing" << endl;
						cout << "g-FIENDISH VIGOR: You can cast False Life as a 1st Level spell on yourself w/o using a spell slot" << endl;
						cout << " or material components" << endl;
						cout << "h-GAZE OF TWO MINDS: As an action, you can touch a willing humanoid and percieve through its senses" << endl;
						cout << " until the end of your next turn. As long as you stay on the same plane of existence, you can use" << endl;
						cout << " your action on subsequent turns to maintain the connection. You get any special senses they have" << endl;
						cout << " for the duration, and are blinded and deafened to your surroundings." << endl;
						cout << "i-MASK OF MANY FACES: You can cast Disguise Self at will w/o expending a spell slot" << endl;
						cout << "j-MISTY VISIONS: You can cast Silent Image at will w/o expending a spell slot or material components" << endl;
						cout << "k-THIEF OF FIVE FATES: Once per long rest, you can cast bane using a warlock spell slot" << endl;
						cout << "l-AGONIZING BLAST: You can add your Cha modifier to damage dealt by your Eldritch Blast" << endl;
						cout << "m-ELDRITCH SPEAR: Your Eldritch Blast has a range of 300ft" << endl;
						cout << "n-REPELLING BLAST: When you hit a creature with your Eldritch Blast, you can knock them back up" << endl;
						cout << " to 10ft in a straight line" << endl;
					}
					/*
					else if (wrlk == "3rd")
					{
						cout << endl << "--3rd LEVEL WARLOCK--" << endl;
						cout << "PACT BOON: You get a boon from your Patron. You get one of the following features" << endl;
						cout << "of your choice:" << endl;
						cout << "-PACT OF THE CHAIN: You learn the 'Find Familiar' spell and can cast it as a ritual." << endl;
						cout << " this doesn't count against your spells known. Your familiar can take any of the" << endl;
						cout << " normal forms or the special forms of an imp, pseudodragon, quasit, or sprite." << endl;
						cout << " Also, you can forgo the Attack action on your turn and your familiar can attack" << endl;
						cout << " in your place" << endl;

						cout << "-PACT OF THE BLADE: As an action, you can create a pact weapon in your empty hand." << endl;
						cout << " You can change its appearance each time you summon it. You are proficient with it" << endl;
						cout << " while you use it. It counts as magical for the purpose of overcoming resistance or" << endl;
						cout << " immunity to nonmagical attacks/damage. The weapon dissapears if it is 5ft+ away from" << endl;
						cout << " you for more than a minute, if you dismiss it (no action), if you use this again, or" << endl;
						cout << " if you die. You can transform one magical weapon into your pact weapon as a 1 hour" << endl;
						cout << " ritual while holding it. It can be done during a short rest. Once bonded, you can" << endl;
						cout << " dismiss it into an extradimensional space. You can summon it thereafter. You can't" << endl;
						cout << " do this with an artifact or sentient weapon. The bond breaks if you die, if you do" << endl;
						cout << " the hour ritual to another weapon, of if you use a 1-hour ritual to break your bond." << endl;
						cout << " It appears at your feet if you break your bond with it while it is in the extradimen-" << endl;
						cout << " al space" << endl;
						goto wrlk;
					}
					
					else if (wrlk == "11th")
					{
						cout << endl << "--11th LEVEL WARLOCK--" << endl;
						cout << "MYSTIC ARCANUM: Choose a 6th Level Warlock spell as an 'arcanum'. Once per long rest," << endl;
						cout << "you can cast your arcanum without using a spell slot. At higher levels, when you get" << endl;
						cout << "higher level arcanums, each spell can be cast this way once per long rest." << endl;
						goto wrlk;
					}

					else if (wrlk == "13th")
					{
						cout << endl << "--13th LEVEL WARLOCK--" << endl;
						cout << "You gain a 7th Level Warlock spell as an arcanum" << endl;
						goto wrlk;
					}

					else if (wrlk == "15th")
					{
						cout << endl << "--15th LEVEL WARLOCK--" << endl;
						cout << "You gain a 8th Level Warlock spell as an arcanum" << endl;
						goto wrlk;
					}

					else if (wrlk == "17th")
					{
						cout << endl << "--17th LEVEL WARLOCK--" << endl;
						cout << "You gain a 9th Level Warlock spell as an arcanum" << endl;
						goto wrlk;
					}

					if (lvl >= 20)
					{
						outfile << "ELDRITCH MASTER: Once per long rest, you can spend 1 minute entreating your patron. If you do," << endl;
						outfile << "you regain all used spell slots" << endl;
					}

					if (ptrn == "list")
						{
							cout << endl << "--OTHERWORLDLY PATRON OPTIONS--" << endl;
							cout << "-Archfey ('afey')" << endl << "-The Fiend ('fnd')" << endl << "-Great Old One ('groo')" << endl;
							cout << "In the specific zones, 'spel' will give you the extended spell lists" << endl;
							goto ptrn;
						}

						else if (ptrn == "afey")
						{
							cout << endl << "--ARCHFEY--" << endl;
							cout << "Your patron is fey nobility, who has been around since before the mortal races were born";
							afey:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> x;

							if (x == "1st")
							{
								cout << endl << "--1st LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "FEY PRESENCE: Once per short or long rest, as an action, you make each creature in a 10ft" << endl;
								cout << "cube originating from you make a Wis saving throw against your Warlock spell save DC. All" << endl;
								cout << "creatures that fail are either charmed or frightened by you (your choice)" << endl;
								goto afey;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "MISTY ESCAPE: Once per short or long rest, when you take damage, you can use your reaction" << endl;
								cout << "to turn invisible and teleport up to 60ft away to an empty space you can see. You stay" << endl;
								cout << "invisible until the start of your next turn or until you attack or cast a spell" << endl;
								goto afey;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "BEGUILING DEFENSES: You are immune to being charmed. When a creature tries to charm you," << endl;
								cout << "you can use your reaction to attempt to charm them back. They have to succeed on a Wis" << endl;
								cout << "save against your Warlock Spell DC or be charmed by you for 1 minute or until they take" << endl;
								cout << "any damage" << endl;
								goto afey;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL ARCHFEY WARLOCK--" << endl;
								cout << "DARK DELERIUM: Once per short or long rest,As an action, choose a creature you can see" << endl;
								cout << "within 60ft of you. It makes a Wis save against your Warlock spell save DC. On a fail," << endl;
								cout << "it is charmed or frightened by you (your choice) for 1 minute or until you lose concentration." << endl;
								cout << "This effect ends if the creature takes damage. While the effect is going, the creature" << endl;
								cout << "thinks it is lost in a misty realm, which appearance you choose. The creature can see" << endl;
								cout << "and hear only you, itself, and the illusion" << endl;
								goto afey;
							}

							else if (x == "spel")
							{
								cout << endl << "--ARCHFEY WARLOCK EXTENDED SPELL LISTS--" << endl;
								cout << "You can treat the following spells as if they were on the Warlock spell lists, and can" << endl;
								cout << "learn them in a normal way. You do NOT automatically know them" << endl;
								cout << "1st- Faerie Fire, Sleep" << endl << "2nd - Calm emotions, Phantasmal force" << endl << "Blink, Plant growth" << endl;
								cout << "4th- Dominate beast, Greater invisibilty" << endl << "5th- Dominate person, Seeming" << endl;
								goto afey;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto ptrn;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto afey;
							}
						}

						else if (ptrn == "fnd")
						{
							cout << endl << "--FIEND--" << endl;
							cout << "Your Patron is an evil being of the lower realms. They desire the destruction of all things";
							fnd:
							cout << endl << "What level would you like to see features for?" << endl;
							cin >> x;

							if (x == "1st")
							{
								cout << endl << "--1st LEVEL FIEND WARLOCK--" << endl;
								cout << "DARK ONE'S BLESSING: When you reduce an enemy to 0 HP, you gain temporary HP equal to" << endl;
								cout << "your Cha modifier + your Warlock level (minimum 1)" << endl;
								goto fnd;
							}

							else if (x == "6th")
							{
								cout << endl << "-6th LEVEL FIEND WARLOCK--" << endl;
								cout << "DARK ONE'S OWN LUCK: Once per short or long rest, you can add a d10 to an ability check" << endl;
								cout << "or saving throw that you make. You can do this after the roll, but before effects are" << endl;
								cout << "carried out" << endl;
								goto fnd;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL FIEND WARLOCK--" << endl;
								cout << "FIENDISH RESILIENCE: You can choose one damage type after a short or long rest. You gain" << endl;
								cout << "resistance to that damage type until you choose a new one with this feature. This resistance" << endl;
								cout << "does not apply to magical or silvered weapons" << endl;
								goto fnd;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL FIEND WARLOCK--" << endl;
								cout << "HURL THROUGH HELL: Once per long rest, when you hit a creature with an attack, you can use" << endl;
								cout << "this feature to instantly transport them through the lower planes. The creature dissapears" << endl;
								cout << "and hurtles through the nightmarish landscape. At the end of your next turn, the creature" << endl;
								cout << "returns to the space it previously occupied, or the nearest unoccupied space. If the creature" << endl;
								cout << "is not a fiend, it takes 10d10 psychic damage from PTSD from the experience" << endl;
								goto fnd;
							}

							else if (x == "spel")
							{
								cout << endl << "--FIEND WARLOCK EXTENDED SPELL LIST--" << endl;
								cout << "You can treat the following spells as if they were on the Warlock spell lists, and can" << endl;
								cout << "learn them in a normal way. You do NOT automatically know them" << endl;
								cout << "1st- Burning hands, Command" << endl << "2nd- Blindness/deafness, scorching ray" << endl;
								cout << "3rd- Fireball, stinking cloud" << endl << "4th- Fire shield, Wall of fire" << endl << "5th- Flame Strike, Hallow" << endl;
								goto fnd;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto ptrn;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto fnd;
							}
						}

						else if (ptrn == "groo")
						{
							if (lvl >= 1)
							{
								cout << "AWAKENED MIND: You can communicate telepathically to any creature you can see within 30ft" << endl;
								cout << "of you. You do not need to share a language with them, but they need to be able to understand" << endl;
								cout << "at least one language" << endl;
							}

							else if (x == "6th")
							{
								cout << endl << "--6th LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "ENTROPIC WARD: Once per short or long rest, when a creature makes an attack on you, you can use" << endl;
								cout << "your reaction to impose the disadvantage to the roll. If it misses, you have advantage on the" << endl;
								cout << "next attack roll on that creature that you make before the end of your next turn" << endl;
								goto groo;
							}

							else if (x == "10th")
							{
								cout << endl << "--10th LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "THOUGHT SHIELD: Your thoughts can't be read by telepathy or any other means unless you allow it." << endl;
								cout << "Also, you have resistance to psychic damage, and whenever a creature deals psychic damage to you," << endl;
								cout << "it also takes that much damage" << endl;
								goto groo;
							}

							else if (x == "14th")
							{
								cout << endl << "--14th LEVEL GREAT OLD ONE WARLOCK--" << endl;
								cout << "CREATE THRALL: You can use your action to touch an incapacitated humanoid. That creature is" << endl;
								cout << "charmed by you until a remove curse spell is used on it, the charmed condition is removed, or" << endl;
								cout << "you use this feature again. You can communicate telepathically to with the charmed creature" << endl;
								cout << "so long as you are on the same plane of existence" << endl;
								goto groo;
							}

							else if (x == "spel")
							{
								cout << endl << "--GREAT OLD ONE WARLOCK EXTENDED SPELL LIST--" << endl;
								cout << "You can treat the following spells as if they were on the Warlock spell lists, and can" << endl;
								cout << "learn them in a normal way. You do NOT automatically know them" << endl;
								cout << "1st- Dissonant whispers, Tasha's hideous laughter" << endl << "2nd- Detect thoughts, Phantasmal force" << endl;
								cout << "3rd- Clairvoyance, sending" << endl << "Dominate beast, Evard's black tentacles" << endl;
								cout << "5th- Dominate person, Telekinesis" << endl;
								goto groo;
							}

							else if (x == "exit")
							{
								cout << endl;
								goto ptrn;
							}

							else
							{
								cout << endl << "You typed something wrong" << endl;
								goto groo;
							}
						}

						else if (ptrn == "exit")
						{
							cout << endl;
							goto wrlk;
						}

						else
						{
							cout << endl << "You typed something wrong" << endl;
							goto ptrn;
						}
					

					else if (wrlk == "einv")
					{
						else if (prereq == "lvl")
						{
							cout << endl << "--LEVEL PREREQUISITE ELDRITCH INVOCATIONS--" << endl;
							cout << "-ASCENDANT STEP(9th Level): You can cast Levitate on yourself w/o using a spell slot or material" << endl;
							cout << " components" << endl;
							cout << "-BEWITCHING WHISPERS(7th): Once per long rest, you can cast Compulsion using a Warlock spell slot" << endl;
							cout << "-CHAINS OF CARCERI(15th, Pact of Chain): Once per long rest, you can cast Hold Monster at will," << endl;
							cout << " targetting a fiend, celestial, or elemental, w/o using a spell slot or material components" << endl;
							cout << "-DREADFUL WORD(7th): Once per long rest, you can cast Confusion with a Warlock spell slot" << endl;
							cout << "-LIFEDRINKER(12th, Pact of the Blade): When you hit a creature with your pact weapon" << endl;
							cout << " you deal extra necrotic damage equal to your Cha modifier (minimum 1)" << endl;
							cout << "-MASTER OF MYRIAD FORMS: You can cast Alter Self at will w/o using a spell slot" << endl;
							cout << "-MINIONS OF CHAOS(9th): Once per long rest, you can cast Conjure Elemental with a Warlock spell" << endl;
							cout << " slot" << endl;
							cout << "-MIRE THE MIND(5th): Once per long rest, you can cast Slow with a Warlock spell slot" << endl;
							cout << "-ONE WITH SHADOWS(5th): When in an area of dim light or darkness, you can use your action to turn" << endl;
							cout << " turn invisible until you move or take an action or reaction" << endl;
							cout << "-OTHERWORLDLY LEAP (9th): You can cast Jump on yourself at will w/o using a spell slot" << endl;
							cout << "-SCULPTOR OF FLESH (7th): Once per long rest, you can cast Polymorph using a Warlock spell slot" << endl;
							cout << "-SIGN OF ILL OMEN (5th): Once per long rest, you can cast Bestow Curse with a Warlock spell slot" << endl;
							cout << "-THIRSTING BLADE (5th, Pact of the Blade): You can attack with your pact weapon twice with the" << endl;
							cout << " Attack action on your turn" << endl;
							cout << "-VISIONS OF DISTANT REALMS (15th): You can cast Arcane Eye at will w/o using a spell slot" << endl;
							cout << "-WHISPERS OF THE GRAVE (9th): You can cast Speak with Dead at will w/o using a spell slot" << endl;
							cout << "-WITCH SIGHT (15th): You can see the true form of any shapechanger or creature concealed by" << endl;
							cout << " illusion or transmutation magic" << endl;
							goto einv;
						}

						else if (prereq == "pact")
						{
							cout << endl << "--PACT PREREQUISITE ELDRITCH INVOCATIONS--" << endl;
							cout << "-BOOK OF ANCIENT SECRETS (Pact of the Tome): You can now put rituals in your Book of Shadows." << endl;
							cout << " Choose 2 1st Level spells with the ritual tag from any class' spell list. The spells appear in" << endl;
							cout << " the book and don't count against your number of spells known. With your Book of Shadows in hand" << endl;
							cout << " you can cast the spells as rituals. You can't cast them another way unless you have learned the" << endl;
							cout << " spell in that way. You can also cast a Warlock spell you know as a ritual if it has the ritual" << endl;
							cout << " tag. If you find other ritual spells, you can add them to the book if their level is less than" << endl;
							cout << " or equal to your Warlock level(rounded up) and if you have time to transcribe it. It takes 2" << endl;
							cout << " hours and 50gp (for the rare inks to transcribe it) per spell level to transcribe" << endl;
							cout << "-CHAINS OF CARCERI(15th, Pact of Chain): Once per long rest, you can cast Hold Monster at will," << endl;
							cout << " targetting a fiend, celestial, or elemental, w/o using a spell slot or material components" << endl;
							cout << "-LIFEDRINKER(12th, Pact of the Blade): When you hit a creature with your pact weapon" << endl;
							cout << " you deal extra necrotic damage equal to your Cha modifier (minimum 1)" << endl;
							cout << "-THIRSTING BLADE (5th, Pact of the Blade): You can attack with your pact weapon twice with the" << endl;
							cout << " Attack action on your turn" << endl;
							cout << "-VOICE OF THE CHAIN MASTER (Pact of the Chain): You can communicate telepathically with your" << endl;
							cout << " familiar and percieve through its senses if you are on the same plane of existence. Also, while" << endl;
							cout << " percieving through its senses you can speak through it in your voice, even if it is normally" << endl;
							cout << " incapable of speech" << endl;
							goto einv;
						}
					}
					*/
				}

				else if (Class == "Wizard")
				{

				}

				//background features
				if (backg == "acly")
				{
					outfile << "Free healing at temples for your religion, but you provide" << endl;
					outfile << "material components. Those who share your religion help (only) you with a modest lifestyle." << endl;
					outfile << "Also, can ask for non-hazardous asistance from priests from your original temple, so long as" << endl;
				}

				else if (backg == "cltn")
				{
					outfile << "You have all official documents, papers, acquaintances set up for a second" << endl;
					outfile << "persona. You can assume that persona easily. You can also forge offical documents and personal" << endl;
					outfile << "so long as you have seen the type of document or handwriting you wish to copy" << endl;
				}

				else if (backg == "crmn")
				{
					outfile << "You have a liaison to the criminal network. You can use him to send" << endl;
					outfile << "messages, even long distance. With this, you know all local messengers," << endl;
					outfile << "corrupt caravan masters, and shifty sailors to send the messages" << endl;
				}

				else if (backg == "flkh")
				{
					outfile << "Can find a place to hide, rest, recuperate among other commoners, unless you've shown yourself to be" << endl;
					outfile << "a danger to them. Will shield you from law or others looking for you, but will not risk life for you" << endl;
				}

				else if (backg == "entr")
				{
					outfile << "You start on good standing with the guild. Guild members will help you do lodging and food" << endl;
					outfile << "Guilds often have political power, and will help defend you in a case if there is a case to" << endl;
					outfile << "be made or if the crime is justifiable. Also, while in good standing w/ the guild, you can" << endl;
					outfile << "get access to political figures. To stay in good standing, there is a monthly 5gp due. You" << endl;
					outfile << "can be a bit late, but must pay back all dues to stay in guild good graces." << endl;
				}

				else if (backg == "glda")
				{
					cout << "You can always find somewhere to perform." << endl;
					cout << "At such places, you get free food and housing, of modest or comfortable standard (depends on the" << endl;
					cout << "venue), so long as you perform every night. Strangers recognize (and usually like) you in any town" << endl;
					cout << "where you have previously performed" << endl;
					if (variant) outfile << "-For you, this means a battle arena of some kind" << endl;
				}

				else if (backg == "nobl")
				{
					outfile << "You're welcome in high society. The elites accept you, commoners try to please you (mostly out of fear)" << endl;
					outfile << "and you can get an audience with a local noble if need be" << endl;
				}

				else if (backg == "otln")
				{
					outfile << "Perfect memory for maps and landscapes that you've seen before. Also, you can find food" << endl;
					outfile << "and fresh water for you and up to 5 others each day, provided that the necessary things" << endl;
					outfile << "are there, like water, berries, or small game" << endl;
				}

				else if (backg == "sage")
				{
					outfile << "When looking for a piece of information, you pretty much always know how to find it." << endl;
					outfile << "You know who to ask or where to go to find the information, if it can be found" << endl;
				}

				else if (backg == "solr")
				{
					outfile << "Your rank is still recognized in your old military. You can use it to procure supplies and" << endl;
					outfile << "can usually find a place to sleep at a friendly encampment or fort which recognizes your rank" << endl;
				}

				else if (backg == "sail")
				{
					if (variant) {
						outfile << "People are scared of you, so in a civilized area you can get away with minor crimes (Dine and dash, breaking" << endl;
						outfile << "doors, etc), and people will not report you" << endl;
					}

					else {
						outfile << "You can usually find free passage on a ship (friendly with captain, your former vessel, etc.) as" << endl;
						outfile << "a favor from its captain. Because is favor, route may not meet all needs, and you and companions" << endl;
					}
				}

				else if (backg == "hrmt") {
					outfile << "Research and prayer during your hermitage gave you a unique, powerful discovery about the" << endl;
					outfile << "world, the multiverse, or any plane. Talk to your DM to figure out the nature of your discovery" << endl;
					outfile << "and its effect on the campaign" << endl;
				}

				else if (backg == "urch")
				{
					outfile << "You can find backstreets in cities, allowing you and companions to move twice as fast as your" << endl;
					outfile << "normal speed would allow while in a city" << endl;
				}

				//for racial features
				if (Race == "asmr")
				{
					if (lvl >= 3) {
						if (Subrace == "prtc") {
							outfile << "Radiant Soul: As an action, you can transform (your eyes shine and two glowing, " << endl;
							outfile << "incorporeal wings come out your back) for one minute or until you end it as a bonus" << endl;
							outfile << "action. While transformed, you have a flying speed of 30ft and once per turn, you" << endl;
							outfile << "can deal extra radiant damage when you do a spell or an attack.\nExtra damage: " << lvl << endl;
						}

						if (Subrace == "scrg") {
							outfile << "Radiant Consumption: As an action, you can transform (Searing light" << endl;
							outfile << "radiates from you, and pours out of your orfices) for one minute or until you end it as a" << endl;
							outfile << "bonus action. While transformed, you produce bright light in a 10ft radius, and dim light for" << endl;
							outfile << "another 10ft. At the end of your turns while transformed, you and each creature within 10ft" << endl;
							outfile << "take radiant damage equal to half your level, rounded up. Also, once per turn while transformed" << endl;
							outfile << "on an attack or spell, you can deal " << lvl << " extra radiant damage" << endl;
						}

						if (Subrace == "faln") {
							outfile << "Necrotic Shroud: As an action, you can transform (Your eyes become" << endl;
							outfile << "pools of black and two skeletal, ghostly, flightless wings come out of your back) for one" << endl;
							outfile << "minute or until you end it as a bonus action. Upon transforming, other creatures that can" << endl;
							outfile << "see you within 10 ft of you make a Cha saving throw. If they fail, they are frightened of" << endl;
							outfile << "you until your next turn. While transformed, on an attack or spell, you can deal extra " << lvl << " necrotic damage" << endl;
						}
					}
				}

				else if (Race == "dwrf")
				{
					outfile << "Stonecunning: When doing History check about stonework, you are proficient" << endl << "and the proficiency bonus is doubled" << endl;
					if (Subrace == "hill") {
						outfile << "Your max HP increases be whatever your level is" << endl;
					}
				}

				else if (Race == "elf")
				{
					outfile << "Fey Ancestry- Advantages on saving throws against being charmed," << endl;
					outfile << "can't be put to sleep via magic" << endl;
					outfile << "Trance- Can meditate for 4 hours a day instead of sleeping 8 hours at night" << endl;
					
					if (Subrace == "high") {
						outfile << "You get One (1) Cantrip from the Wizard cantrip list, use Int check to cast" << endl;
					}

					if (Subrace == "wood") {
						outfile << "'Mask of the Wild'- Can try to hide even when only lightly obscured by natural conditions" << endl;
						outfile << "(Rainain, foliage, etc)" << endl;
					}

					if (Subrace == "dark") {
						cout << "Darkvision 120 ft" << endl;
						cout << "Sunlight sensitivity- disadvantage on attack and perception checks in direct sunlight" << endl;
						cout << "Drow magic- You get the 'Dancing Lights' Cantrip";

						if (lvl >= 3) outfile << "\n-The 'Faerie Fire' spell" << endl;
						if (lvl >= 5) outfile << "-the 'Darkness' spell" << endl;;
					}
				}

				else if (Race == "glth")
				{
					outfile << "Natural Athlete: You are proficient in athletics" << endl;
					outfile << "Stone's Endurance: Once per short or long rest, when you take damage you can" << endl;
					outfile << "reduce the damage taken by 1d12 + your Con modifier." << endl;
					outfile << "Powerful Build: You count as one size larger when determining carrying capacity" << endl;
					outfile << "or weight you can, push, drag, or lift" << endl;
					outfile << "Mountain Born: You are acclimated to high altitudes and low climates" << endl;
				}

				else if (Race == "hlng")
				{
					outfile << "Lucky: when you roll a nat1 on a d20, you can reroll the die but must use the new roll" << endl;
					outfile << "Brave: Advantage on saving throws against being frightened" << endl;
					outfile << "Nimble- can move through space of any creature larger than you" << endl;
					if (Subrace == "ltft") {
						outfile << "Can hide behind creatures at least 1 size bigger than you" << endl;
					}
				}

				else if (Race == "dgbn")
				{
					int dmg = 2;
					if (lvl >= 6) dmg += 1;
					if (lvl >= 11) dmg += 1;
					if (lvl >= 16) dmg += 1;
					outfile << "Ancestry: You have a breath weapon and dmg resist associated with your ancestry" << endl;
					outfile << "The damage of this breath weapon is " << dmg << "d6 on a failed save, half that on a success" << endl;
					outfile << "-Ancestry:\n-Breath attack kind/damage type: \n-GO BACK TO HANDBOOK SECTION TO CHOOSE ANCESTRY" << endl;
					
				}

				else if (Race == "gnom")
				{
					outfile << "Darkvision 60ft" << endl;
					outfile << "Advantage on all Wis, Cha, and Int saves against magic" << endl;
					if (Subrace == "rock") {
						outfile << "When making a History check on magic lore, alchemical tools, or tech devices, add twice your prof. bonus" << endl;
						outfile << "Can make a clockwork thing (A functional model beast, a fire starter, or music box) out of 10gp of materials" << endl << endl;
					}

					if (Subrace == "frst") {
						outfile << "You know the Minor Illusion cantrip. Int is your spellcasting ability for it" << endl;
						outfile << "You can communicate simple ideas and commands to Small and smaller beasts" << endl;
					}
				}

				else if (Race == "helf")
				{
					outfile << "Fey Ancestry: Adv. on saves against being charmed, can't get put to sleep by magic" << endl;
				}

				else if (Race == "horc")
				{
					outfile << "Darkvision 60ft" << endl;
					outfile << "Relentless Endurance: If you are dropped to 0 HP but not killed outright," << endl;
					outfile << "You drop to 1 HP instead. Can't use this feature again until after a long rest" << endl;
					outfile << "Savage attack: when you roll a crit, you can roll one of the weapon's damage dice" << endl;
					outfile << "again and add that to the extra damage" << endl;
				}

				else if (Race == "tflg")
				{
					outfile << "Darkvision 60ft, but are colorblind in dark/dim" << endl;
					outfile << "You have resistance to fire damage" << endl;
					if (lvl >= 5) {
						outfile << "Infernal Legacy: You know the 'Thaumaturgy' Cantrip." << endl;
						outfile << "-You can cast 'Hellish Rebuke' at 2nd lvl once per day." << endl;
						outfile << "-You can cast 'Darkness' once per day. \n-Cha is your spellcasting ability";
						outfile << "for those spells." << endl;
					}

					else if (lvl >= 3) {
						outfile << "Infernal Legacy: You know the 'Thaumaturgy' Cantrip." << endl;
						outfile << "-You can cast 'Hellish Rebuke' at 2nd lvl once per day.";
						outfile << "\n-Cha is your spellcasting ability";
						outfile << "for those spells." << endl;
					}

					else {
						outfile << "Infernal Legacy: You know the 'Thaumaturgy' Cantrip.";
						outfile << "\n-Cha is your spellcasting ability";
						outfile << "for that spells." << endl;
					}
				}

				else if (Race == "trtl")
				{
					outfile << "Natural Weaponry- Claws: You can make unarmed strikes with your claws. On hit, " << endl;
					outfile << "you do slashing damage equal to 1d4 + your Str modifier instead of the normal" << endl;
					outfile << "bludgeoning damage" << endl;
					outfile << "Hold Breath: You can hold your breath for 1 hour. You aren't naturally good at" << endl;
					outfile << "swimming, but you can stay underwater for the hour" << endl;
					outfile << "Natural Armor: You have a base AC of 17. Your Dex modifier doesn't affect this." << endl;
					outfile << "Armor does not affect this, but when using a shield you can apply the bonus as usual" << endl;
				}

				//Spell time
				if (Class == "Bard")
				{

				}

				else if (Class == "Cleric")
				{

				}

				else if (Class == "Druid")
				{

				}

				else if (Class == "Fighter")
				{

				}

				else if (Class == "Paladin")
				{

				}

				else if (Class == "Ranger")
				{

				}

				else if (Class == "Rogue")
				{

				}

				else if (Class == "Sorcerer")
				{
					if (lvl >= 2) outfile << "Sorcery points: " << lvl;
				}

				else if (Class == "Warlock")
				{

				}

				else if (Class == "Wizard")
				{

				}

				outfile.close();
				goto rference;
			}

			else if (begun == "truth")
			{
				cout << "What is the name of this User account?" << endl;
				cin >> x;
				ofstream outfile("C:\\Users\\" + string(x) + "\\Desktop\\truth.txt", ios::out);
				outfile << "Bakugou x Uraraka shippers should be shot on sight" << endl;
				outfile << "Todoroki and Deku are pure children and deserve protection" << endl;
				outfile << "Tsuyu Asui is best girl" << endl;
				outfile << "Kirishima and Bakugou are meant for each other" << endl;
				outfile << "The Joker is Harley Quinn's backstory, not her love interest" << endl;
				outfile.close();
				cout << endl;
				goto rference;
			}

			else if (begun == "exit")
			{
				return 0;
			}

			else
			{
				cout << "You typed something in wrong. Watch capitalization." << endl << endl;
				goto rference;
			}

		}

		else
		{
			cout << endl << "You entered it wrong. You literally had only two options. How could you have possibly messed this up" << endl;
			cout << "Like I knew you were dumb but Jesus H. Roosevelt Christ what the Fuck" << endl;
			cout << "Look the options are 'begin' and 'message'. Capitalization is important." << endl << "follow your grammar rules. check your spelling. Get your eyes checked. Et Cetera" << endl << endl;
			goto explain;

		}
	}

	else if (password == "backdoor")
	{
		cout << endl;
		goto thiccboi;
	}

	else if (password == "testfile")
	{
		cout << "What is the name of this User account?" << endl;
		cin >> x;
		ofstream outfile("C:\\Users\\" + string(x) + "\\Desktop\\testfile.txt", ios::out);
		outfile << "line one of test" << endl << "line 2 of test" << endl;
		cout << "yeet" << endl;
		outfile << "line 3 of test" << endl;
		outfile.close();
		cout << endl;
		Sleep(1000);
		goto thiccboi;
	}

	else if (password == "rngtest")
	{
		int dieSides, roll;
		cin >> dieSides;
		roll = diceRoll(dieSides);
		cout << roll;
		Sleep(2500);
		goto thiccboi;
	}
	else
	{
		return 0;
	}

}