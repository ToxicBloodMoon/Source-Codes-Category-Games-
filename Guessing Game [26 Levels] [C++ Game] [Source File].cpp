#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Start();
void GetResults();

int i, j, life, maxrand;
char c;

void Start() {
	i = 0;
	j = 0;
	life = 0;
	maxrand = 30;
	
	cout << " ______________________________________________________________________________________________________\n";
	cout << "|======================================================================================================|\n"; 
	cout << "|===================================Game Mode Selector=================================================|\n";
	cout << "|======================================================================================================|\n";
	cout << "|Select a Difficulty mode:                                                                             |\n"; // the user has to select a difficutly level
	cout << "|Note : When you have chosen your difficulty,Type Letters in Capital, small letters wont               |\n";
	cout << "|register in game, remember this note                                                                  |\n";
	cout << "|______________________________________________________________________________________________________|\n";
	cout << "|Mode Type : Easy (0-100)                                                                              |\n";
	cout << "|A : Easy 1 (0-40)                                                                                     |\n"; 
	cout << "|B : Easy 2 (0-50)                                                                                     |\n"; 
	cout << "|C : Easy 3 (0-75)                                                                                     |\n"; 
	cout << "|D : Easy 4 (0-100)                                                                                    |\n"; 
	cout << "|Mode Type : Moderate (0-400)                                                                          |\n"; 
	cout << "|E : Moderate 1 (0-125)                                                                                |\n"; 
	cout << "|F : Moderate 2 (0-150)                                                                                |\n";
	cout << "|G : Moderate 3 (0-175)                                                                                |\n";
	cout << "|H : Moderate 4 (0-200)                                                                                |\n";
	cout << "|I : Moderate 5 (0-250)                                                                                |\n";
	cout << "|J : Moderate 6 (0-300)                                                                                |\n";
	cout << "|K : Moderate 7 (0-350)                                                                                |\n";
	cout << "|L : Moderate 8 (0-400)                                                                                |\n";
	cout << "|Mode Type : Difficult (0-1000)                                                                        |\n";
	cout << "|M : Difficult 1 (0-500)                                                                               |\n";
	cout << "|N : Difficult 2 (0-800)                                                                               |\n";
	cout << "|O : Difficult 3 (0-1000)                                                                              |\n";
	cout << "|Mode Type : Extreme (0-15000)                                                                         |\n";
	cout << "|P : Extreme 1 (0-3000)                                                                                |\n";
	cout << "|Q : Extreme 2 (0-5000)                                                                                |\n";
	cout << "|R : Extreme 3 (0-8000)                                                                                |\n";
	cout << "|S : Extreme 4 (0-10000)                                                                               |\n";
	cout << "|T : Extreme 5 (0-13000)                                                                               |\n";
	cout << "|U : Extreme 6 (0-15000)                                                                               |\n";
	cout << "|Mode Type : Hardcore (0-80000)                                                                        |\n";
	cout << "|V : Hardcore 1 (0-18000)                                                                              |\n";
	cout << "|W : Hardcore 2 (0-30000)                                                                              |\n"; 
	cout << "|X : Hardcore 3 (0-50000)                                                                              |\n";
	cout << "|Y : Hardcore 4 (0-80000)                                                                              |\n";       
	cout << "|Mode Type : Unknown (0-?)                                                                             |\n";
	cout << "|Z : Unknown Mode (0-?)                                                                                |\n";
	cout << "|======================================================================================================|\n";
	cout << "|Game Settings And Menu                                                                                |\n";
	cout << "|1 : Change Log                                                                                        |\n";
	cout << "|2 : Tutorial [Under Progress]                                                                         |\n";
	cout << "|3 : News                                                                                              |\n";
	cout << "|4 : Developer News [Availble For People In Beta Or Developers Of The Game]                            |\n";
	cout << "|5 : Copyright Act And License Agreement [License Isnt Available Yet]                                  |\n";
	cout << "|======================================================================================================|\n";
	cout << "|If you want to exit then                                                                              |\n";
	cout << "|Type 0 And Hit Enter                                                                                  |\n"; 
	cout << "|======================================================================================================|\n";
	cout << "|Check The Upper Most Part Of The Application To See Game Info                                         |\n";
	cout << "|Goodluck! Have Fun Playing!                                                                           |\n";
	cout << "|======================================================================================================|\n";
	cout << "|Cant See The Whole Choices? Scroll Up To See The Whole Difficulty Modes                               |\n";
	cout << "|======================================================================================================|\n";
	cout << "|Letters Before The Collons Are The Letters To Type When You Pick The Difficulty                       |\n";
	cout << "|======================================================================================================|\n";
	cout << "|Type The Difficulty level you want(Capital Letters Only):                                             |\n";
	c = 30;

	cin >> c;                   // read the user's choice
	cout << "\n";

	switch (c) {
		case 'A':
			maxrand = 40;  // the random number will be between 0 and maxrand
			cout << " ___________________________________________\n";
			cout << "|[======-You have Chosen Easy Mode-========]|\n";
			cout << "|[==-Picking Random Number From 0-40....-==]|\n";
			cout << "|[==-...................................-==]|\n"; 
			cout << "|[=======-Number Has Been Picked!-=========]|\n";
			cout << "|[=====-Type A number Below To Start-======]|\n";
			break;
		case 'B':
			maxrand = 50;
			cout << " ___________________________________________\n";
			cout << "|[======-You have Chosen Easy Mode-========]|\n";
			cout << "|[==-Picking Random Number From 0-50....-==]|\n";
			cout << "|[==-...................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=========]|\n";
			cout << "|[=====-Type A number Below To Start-======]|\n";
			break;
		case 'C':
			maxrand = 75;
			cout << " ___________________________________________\n";
			cout << "|[======-You have Chosen Easy Mode-========]|\n";
			cout << "|[==-Picking Random Number From 0-75....-==]|\n";
			cout << "|[==-...................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=========]|\n";
			cout << "|[=====-Type A number Below To Start-======]|\n";
			break;
		case 'D':
			maxrand = 100;
			cout << " ___________________________________________\n";
			cout << "|[======-You have Chosen Easy Mode-========]|\n";
			cout << "|[==-Picking Random Number From 0-100...-==]|\n";
			cout << "|[==-...................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=========]|\n";
			cout << "|[=====-Type A number Below To Start-======]|\n";
			break;
		case 'E':
			maxrand = 125;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-125....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'F':
			maxrand = 150;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-150....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'G':
			maxrand = 175;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-175....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'H':
			maxrand = 200;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-200....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'I':
			maxrand = 250;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-250....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'J':
			maxrand = 300;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-300....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'K':
			maxrand = 350;
			
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-350....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'L':
			maxrand = 400;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Moderate Mode-======]|\n";
			cout << "|[==-Picking Random Number From 0-400....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[======-Type A number Below To Start-======]|\n";
			break;
		case 'M':
			maxrand = 500;
			cout << " ___________________________________________\n";
			cout << "|[==-  You have Chosen Difficult Mode    -==]|\n";
			cout << "|[==-Picking Random Number From 0-500....-==]|\n";
			cout << "|[==-....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-=========]|\n";
			cout << "|[==-    Type A number Below To Start    -==]|\n";
			break;
		case 'N':
			maxrand = 800;
			cout << " ________________________________________\n";
			cout << "|[===-You have Chosen Difficult Mode-===]|\n";
			cout << "|[==-Picking Random Number From 0-800-==]|\n"; 
			cout << "|[==-................................-==]|\n";
			cout << "|[======-Number Has Been Picked!-=======]|\n";
			cout << "|[====-Type A number Below To Start-====]|\n";
			break;
		case 'O':
			maxrand = 1000;
			cout << " ________________________________________\n";
			cout << "|[===-You have Chosen Difficult Mode-====]|\n";
			cout << "|[==-Picking Random Number From 0-1000-==]|\n";
			cout << "|[==-.................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=======]|\n";
			cout << "|[====-Type A number Below To Start-=====]|\n";
			break;
		case 'P':
			maxrand = 3000;
			cout << " ________________________________________\n";
			cout << "|[===-You have Chosen Difficult Mode-====]|\n";
			cout << "|[==-Picking Random Number From 0-3000-==]|\n";
			cout << "|[==-.................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=======]|\n";
			cout << "|[====-Type A number Below To Start-=====]|\n";
			break;
		case 'Q':
			maxrand = 5000;
			cout << " ________________________________________\n";
			cout << "|[===-You have Chosen Difficult Mode-====]|\n";
			cout << "|[==-Picking Random Number From 0-5000-==]|\n";
			cout << "|[==-.................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=======]|\n";
			cout << "|[====-Type A number Below To Start-=====]|\n";
			break;
		case 'R':
			maxrand = 8000;
			cout << " _________________________________________\n";
			cout << "|[====-You have Chosen Extreme Mode-=====]|\n";
			cout << "|[==-Picking Random Number From 0-8000-==]|\n";
			cout << "|[==-.................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-=======]|\n";
			cout << "|[====-Type A number Below To Start-=====]|\n";
			break;
		case 'S':
			maxrand = 10000;
			cout << " __________________________________________\n";
			cout << "|[=====-You have Chosen Extreme Mode-=====]|\n";
			cout << "|[==-Picking Random Number From 0-10000-==]|\n";
			cout << "|[==-..................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-========]|\n";
			cout << "|[=====-Type A number Below To Start-=====]|\n";
			break;
		case 'T':
			maxrand = 13000;
			cout << " __________________________________________\n";
			cout << "|[=====-You have Chosen Extreme Mode-=====]|\n";
			cout << "|[==-Picking Random Number From 0-13000-==]|\n";
			cout << "|[==-..................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-========]|\n";
			cout << "|[====-Type A number Below To Start-======]|\n";
			break;
		case 'U':
			maxrand = 15000;
			cout << " __________________________________________\n";
			cout << "|[=====-You have Chosen Extreme Mode-=====]|\n";
			cout << "|[==-Picking Random Number From 0-15000-==]|\n";
			cout << "|[==-..................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-========]|\n";
			cout << "|[=====-Type A number Below To Start-=====]|\n";
			break;
		case 'V':
			maxrand = 18000;
			cout << " __________________________________________\n";
			cout << "|[=====-You have Chosen Extreme Mode-=====]|\n";
			cout << "|[==-Picking Random Number From 0-18000-==]|\n";
			cout << "|[==-..................................-==]|\n";
			cout << "|[=======-Number Has Been Picked!-========]|\n";
			cout << "|[=====-Type A number Below To Start-=====]|\n";
			break;
		case 'W':
			maxrand = 30000;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Hardcore mode-=====]|\n";
			cout << "|[==-]Picking Random Number From 0-30000-==]|\n";
			cout << "|[==-...................................-==]|\n";
			cout << "|[======-Number Has Been Picked!-==========]|\n";
			cout << "|[====-Type A Number Below To Start-=======]|\n";
			break;
		case 'X':
			maxrand = 50000;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Hardcore mode-=====]|\n";
			cout << "|[==-]Picking Random Number From 0-30000-==]|\n";
			cout << "|[==-...................................-==]|\n";
			cout << "|[======-Number Has Been Picked!-==========]|\n";
			cout << "|[====-Type A Number Below To Start-=======]|\n";
			break;
		case 'Y':
			maxrand = 80000;
			cout << " ___________________________________________\n";
			cout << "|[=====-You have Chosen Hardcore mode-=====]|\n";
			cout << "|[==-]Picking Random Number From 0-30000-==]|\n";
			cout << "|[==-...................................-==]|\n";
			cout << "|[======-Number Has Been Picked!-==========]|\n";
			cout << "|[====-Type A Number Below To Start-=======]|\n";
			break;
		case 'Z':
			maxrand = 99999; 
			cout << " _____________________________________________\n";
			cout << "|[======-You have Chosen Unknown mode-=======]|\n";
			cout << "|[===-Picking Random Number From 0-Unknown-==]|\n";//Dont Edit This, Just Keep It Unknown When Passing The Application To A Person 
			cout << "|[==-.....................................-==]|\n";
			cout << "|[========-Number Has Been Picked!-==========]|\n";
			cout << "|[=====-Type A Number Below To Start-========]|\n";
			break;																					
		case '1':
			cout << " ______________________________________________________________________________________________________\n";
			cout << "|Change Log :                                                                                          |\n";
			cout << "|Version 0.0.0.5 First Game Version June 19 2019                                                       |\n";
			cout << "| 5 Levels                                                                                             |\n"; //Application [Game]
			cout << "|Version 0.0.3.1                                                                                       |\n";
			cout << "|[Event] App Distributed To Developers                                                                 |\n";
			cout << "|-Fixed Errors With WinFile                                                                            |\n"; //Source Code
			cout << "|-Fixed Errors With Processing And Compiling Errors                                                    |\n"; //Source Code
			cout << "|Version 0.0.4.5                                                                                       |\n";
			cout << "|-Updated Levels To 10                                                                                 |\n"; //Application [Game]
			cout << "|-Updated Lives To 7                                                                                   |\n"; //Application [Game]
			cout << "|-Updated Case Level Errors                                                                            |\n"; //Source Code [Go To Line 34 to 311 to see all Cases]
			cout << "|-Updated Maxrands For All Choices                                                                     |\n"; //Maxrands Are In the cases , heres how it looks like "maxrand = 80000 <=Number To choose When System will pick number between maxrand and 0
			cout << "|[Important Event]Distribution Of The App                                                              |\n";
			cout << "|Version 0.1.7.9                                                                                       |\n";
			cout << "|-Updated Levels To 26                                                                                 |\n";
			cout << "|-Updated Lives To 15                                                                                  |\n";
			cout << "|Version 1.1.8.7 [Current Version]                                                                     |\n";
			cout << "|-Outline Boxes For Letters                                                                            |\n"; //Source Code [Located In All Functions Containing 'Cout << '
			cout << "|-Slow Compilation On Some Computers Especially Windows 7,Xp,8.1 And 10                                |\n"; //In App  [Only Will Happen If The Computer Has High Ram]
			cout << "|-Slow Loading For App And Opening Of CMD Exe Application To Run App                                   |\n"; //Currently Fixing, Updated Earlier Because Of Huge problems
			cout << "|[Future Updates!]                                                                                     |\n";
			cout << "|Converting Code To HTML and JAVA Script Language To Enchance App                                      |\n";
			cout << "|App Will Be Soon Be 64 and 32(84x) Bit                                                                |\n";
			cout << "|Soon To Have Website                                                                                  |\n";
			cout << "|App Will Be Uploaded To MediaFire For Further Distribution                                            |\n";
			cout << "|Toxic Guessing Game : Name Will Be Changed Based On Users Choice [Voting Through Discord, Or Website] |\n";
			cout << "|Discord Server Will Be Posted On Website [Onced Realeased]                                            |\n";
			cout << "|======================================================================================================|\n\n";
			Start();
		case '2':
			cout << " _____________________________________\n";
			cout << "|Tutorials Aren't Available Right Now |\n";
			cout << "|Tutorials Are Expected To Be released|\n";
			cout << "|On 2021 March Stay Tuned!            |\n";
			cout << "|=====================================|\n\n";
			Start();
		case '3':
			cout << " _____________________________________________________________________\n";
			cout << "|[News!]                                                              |\n";
			cout << "|Hiring Developers For The App [Note: No Salary Is Included]          |\n";
			cout << "|App Will Be Distributed Through MediaFire On January Or February 2021|\n";
			cout << "|App Will Now Be Available As A Chrome And FireFox Extension Soon!    |\n";
			cout << "|=====================================================================|\n\n";
			Start();
		case '4':
			cout << " ________________________________________________________\n";
			cout << "|C++ Game Script will Now Be Exported To Both HTML And C |\n";
			cout << "|Original Game Script Will Remain C++                    |\n";
			cout << "|========================================================|\n\n";
			Start();
		case '5':
			cout << " ______________________________________________________________________________________________________\n";
			cout << "|Copyright Act And Statements                                                                          |\n";
			cout << "|This Product Of The ToxicBloodMoon Program Group Has Copyright Licensces                              |\n";
			cout << "|Any Distribution And No Confirmation From Head Developer Of The Game Will Be Considered CopyRight     |\n"; 
			cout << "|The Copyright Act of 1976, which provides the basic framework for the current copyright law, was      |\n";
			cout << "|enacted on October 19, 1976, as Pub. L. No. 94-553, 90 Stat. 2541. The 1976 Act was a comprehensive   |\n";
			cout << "|revision of the copyright law in Title 17. Listed below in chronological order of their enactment are |\n";
			cout << "| the Copyright Act of 1976 and subsequent amendments to Title 17.                                     |\n";
			cout << "|Significant copyright legislation enacted since the last printed edition of this circular in December |\n";
			cout << "|2016 includes the Marrakesh Treaty Implementation Act and the Orrin G. Hatch�Bob Goodlatte Music      |\n";
			cout << "|Modernization Act, both signed into law in October 2018; the National Defense Authorization Act for   |\n";
    		cout << "|Fiscal Year 2020, the Satellite Television Community Protection and Promotion Act of 2019, and the    |\n";
    		cout << "|Library of Congress Technical Corrections Act of 2019, all signed into law in December 2019;          |\n";
    		cout << "|and the Coronavirus Aid, Relief, and Economic Security Act, signed into law in March 2020.            |\n";
    		cout << "|======================================================================================================|\n\n";
    		Start();
		default:
			exit(0);
		break;
	}

	life = 30;         // number of lifes of the player
	srand((unsigned)time(NULL)); // init Rand() function
	j = rand() % maxrand;  // j get a random value between 0 and maxrand
	
	GetResults();
}

void GetResults() {
	if (life <= 0) { // if player has no more life then he loses
	    cout << " __________\n";
		cout << "|You lose !|\n";
		cout << "|==========|\n\n";
		Start();
	}

	cout << "|Type a number: \n";
	cin >> i;
	
	if((i>maxrand) || (i<0)) { // if the user number isn't correct, restart
	    cout << " ______________________________________\n";
		cout << "|Error: number not between 0 and \n" << maxrand << "|\n";
		GetResults();
	}

	if(i == j) {
		cout << " _________________________\n";
		cout << "|YOU WIN! Congratulations!|\n"; // the user found the secret number
		cout << "|=========================|\n\n";
		Start();
	} else if(i>j) {
		cout << " _____________\n";
		cout << "|NumberToo BIG|\n";
		cout << "|=============|\n";
		life = life - 1;
		cout << " ___________________\n";
		cout << "|Lives remaining: " << life << "|\n";
		cout << "|===================|\n\n";
		GetResults();
	} else if(i<j) {
		cout << " ________________\n";
		cout << "|Number Too SMALL|\n";
		life = life - 1;
		cout << " ___________________\n";
		cout << "|Lives remaining: " << life << "|\n";
		cout << "|===================|\n";
		GetResults();
	}
}

int main() {
	
	cout << " ______________________________________________________________________________________________________\n";
	cout << "|======================================================================================================|\n";
	cout << "|** Toxic Guessing Game [Outline Boxes Update!] **                                                     |\n";
	cout << "|Hi Welcome To My Game !                                                                               |\n";
	cout << "|** Version : 1.1.8.7 Alpha **                                                                         |\n";
	cout << "|======================================================================================================|\n";
	cout << "|Developer : ToxicEclipse                                                                              |\n";
	cout << "|Co-Developers : =Ecliptic= =Galactic Eclipse= =Toxic Glitcher= =Demonicz= =None=                      |\n"; //Developer Names Are Just NickedNamed, For Security Reasons
    cout << "|[=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-Goal Of The Game-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=]|\n";
	cout << "|The Goal of the game is to find the secret number.                                                    |\n";
	cout << "|All levels have only 30 lives                                                                         |\n";
	cout << "|From all levels, the game chooses a random number between 0 and the difficulty you choose             |\n";
	cout << "|[Note: Use a strategy in the game to guess the number quickly] {The developer tested the game himself}|\n";
	cout << "|Good Luck And Thank You For Downloading The Game !                                                    |\n";
	cout << "|======================================================================================================|\n";
	Start();
	return 0;
}
