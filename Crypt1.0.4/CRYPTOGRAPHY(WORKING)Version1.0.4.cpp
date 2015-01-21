#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <future>
#include "OpenAnimate.h"
using namespace std;

int main()
{
	//PlaySound(TEXT("wankstasuperlow.WAV"), NULL, SND_ASYNC | SND_LOOP);

	////Measure 1
	//async(Beep, 293.66, 250); //Low D
	//async(Beep, 293.66, 250);
	//async(Beep, 293.66, 250);
	////Measure 2
	//async(Beep, 392.00, 1000); //Low G
	//async(Beep, 587.33, 1000); //High D


	////Measure 3
	//async(Beep, 523.25, 250); //C
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 250); //A
	//async(Beep, 783.99, 1000); //High G
	//async(Beep, 587.33, 500);
	////Measure 4
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 440.00, 250);
	//async(Beep, 783.99, 1000);
	//async(Beep, 587.33, 500);
	////Measure 5
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 523.25, 250);
	//async(Beep, 440.00, 1000);
	//async(Beep, 293.66, 500);
	//async(Beep, 293.66, 250);
	////Measure 6
	//async(Beep, 392.00, 1000);
	//async(Beep, 587.33, 1000);
	////Measure 7
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 440.00, 250);
	//async(Beep, 783.99, 1000);
	//async(Beep, 587.33, 500);
	////Measure 8
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 440.00, 250);
	//async(Beep, 783.99, 1000);
	//async(Beep, 587.33, 500);
	////Measure 9
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 523.25, 250);
	//async(Beep, 440.00, 1000);
	//async(Beep, 293.66, 500);
	//async(Beep, 293.66, 250);
	////Measure 10
	//async(Beep, 329.63, 750); //Low E
	//async(Beep, 329.63, 250);
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 440.00, 250); //A
	//async(Beep, 392.00, 250); //Low G
	////Measure 11
	//async(Beep, 392.00, 250); //Low G
	//async(Beep, 440.00, 250);
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 500); //A
	//async(Beep, 329.63, 250);
	//async(Beep, 369.99, 500); //F#
	//async(Beep, 293.66, 500);
	//async(Beep, 293.66, 250);
	////Measure 12
	//async(Beep, 329.63, 750); //Low E
	//async(Beep, 329.63, 250);
	//async(Beep, 523.25, 250); //C
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 250); //A
	//async(Beep, 392.00, 250);
	////Measure 13
	//async(Beep, 587.33, 250); //High D
	//async(Beep, 440.00, 125); //A
	//async(Beep, 440.00, 1000); //A
	//async(Beep, 293.66, 500);
	//async(Beep, 293.66, 250);
	////Measure 14
	//async(Beep, 329.63, 750); //Low E
	//async(Beep, 329.63, 250);
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 440.00, 250); //A
	//async(Beep, 392.00, 250); //Low G
	////Measure 15
	//async(Beep, 392.00, 250); //Low G
	//async(Beep, 440.00, 250);
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 500); //A
	//async(Beep, 329.63, 250);
	//async(Beep, 369.99, 500); //Low F#
	//async(Beep, 587.33, 500);
	//async(Beep, 587.33, 250);
	////Measure 16
	//async(Beep, 783.99, 500); //High G
	//async(Beep, 739.99, 250); //High F#
	//async(Beep, 622.25, 500); //D#
	//async(Beep, 587.33, 250); //High D
	//async(Beep, 523.25, 500); //C
	//async(Beep, 466.16, 250); //A#
	//async(Beep, 440.00, 500); //A
	//async(Beep, 392.00, 250); //Low G
	////Measure 17
	//async(Beep, 587.33, 1250); //High D
	//async(Beep, 293.66, 250); //Low D
	//async(Beep, 293.66, 250);
	//async(Beep, 293.66, 250);
	////Measure 18
	//async(Beep, 392.00, 1000); //Low G
	//async(Beep, 587.33, 1000); //High D
	////Measure 19
	//async(Beep, 523.25, 250); //C
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 250); //A
	//async(Beep, 783.99, 1000); //High G
	//async(Beep, 587.33, 500);
	////Measure 20
	//async(Beep, 523.25, 250); //C
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 250); //A
	//async(Beep, 783.99, 1000); //High G
	//async(Beep, 587.33, 500);
	////Measure 21
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 523.25, 250);
	//async(Beep, 440.00, 1000);
	//async(Beep, 293.66, 500); //Low D
	//async(Beep, 293.66, 250);
	////Measure 22
	//async(Beep, 392.00, 1000); //Low G
	//async(Beep, 587.33, 1000); //High D
	////Measure 23
	//async(Beep, 523.25, 250); //C
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 250); //A
	//async(Beep, 783.99, 1000); //High G
	//async(Beep, 587.33, 500);
	////Measure 24
	//async(Beep, 523.25, 250); //C
	//async(Beep, 493.88, 250); //B
	//async(Beep, 440.00, 250); //A
	//async(Beep, 783.99, 1000); //High G
	//async(Beep, 587.33, 500);
	////Measure 25
	//async(Beep, 523.25, 250);
	//async(Beep, 493.88, 250);
	//async(Beep, 523.25, 250);
	//async(Beep, 440.00, 1000);



Opening();



	while (1){

		HANDLE  hConsole;
		int k;

		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		k = 14;

		SetConsoleTextAttribute(hConsole, k);


		string test;



		string choice;

		PlaySound(TEXT("master_bidding.WAV"), NULL, SND_ASYNC);
		cout << "Do you want to encrypt or decrypt today?" << endl << "(E for encrypt, D for decrypt, Q to quit): ";
		cin >> choice;

		if (((choice[0] == 'Q') && (choice.size() == 1)) || ((choice[0] == 'q') && (choice.size() == 1))){
			break;
		}

		else if (((choice[0] == 'D') && (choice.size() == 1)) || ((choice[0] == 'd') && (choice.size() == 1))){
			PlaySound(TEXT("asyouwish.WAV"), NULL, SND_ASYNC);

			HANDLE  hConsole;
			int kolor;

			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			kolor = 12;

			SetConsoleTextAttribute(hConsole, kolor);

			string filenombre;
			cout << "Name of file to be decrypted: ";
			kolor = 10;

			SetConsoleTextAttribute(hConsole, kolor);

			cin >> filenombre;

			ifstream decryptfile;
			decryptfile.open(filenombre);

			

			int numchars;

			decryptfile >> numchars;


			const int KROW = 3;
			const int KCOL = 3;

			int key[KROW][KCOL];

			decryptfile >> key[0][0] >> key[0][1] >> key[0][2] >> key[1][0] >> key[1][1] >> key[1][2] >> key[2][0] >> key[2][1] >> key[2][2];




			//find determinant

		
				int det = key[0][0] * key[1][1] * key[2][2] + key[0][1] * key[1][2] * key[2][0] + key[0][2] * key[1][0] * key[2][1] - key[0][2] * key[1][1] * key[2][0] - key[0][0] * key[1][2] * key[2][1] - key[0][1] * key[1][0] * key[2][2];
				
			//next step

			const int NROW = 3;
			const int NCOL = 3;

			float newone[NROW][NCOL];

			newone[0][0] = (key[1][1] * key[2][2] - key[2][1] * key[1][2]) * 1;
			newone[0][1] = (key[1][0] * key[2][2] - key[1][2] * key[2][0]) * -1;
			newone[0][2] = (key[1][0] * key[2][1] - key[1][1] * key[2][0]) * 1;

			newone[1][0] = (key[0][1] * key[2][2] - key[0][2] * key[2][1]) * -1;
			newone[1][1] = (key[0][0] * key[2][2] - key[0][2] * key[2][0]) * 1;
			newone[1][2] = (key[0][0] * key[2][1] - key[0][1] * key[2][0]) * -1;

			newone[2][0] = (key[0][1] * key[1][2] - key[0][2] * key[1][1]) * 1;
			newone[2][1] = (key[0][0] * key[1][2] - key[0][2] * key[1][0]) * -1;
			newone[2][2] = (key[0][0] * key[1][1] - key[0][1] * key[1][0]) * 1;



			//last step

			double newerone[NROW][NCOL];

			for (int i = 0; i < 3; i++){

				for (int j = 0; j < 3; j++){

					newerone[i][j] = newone[j][i] / det;

				}
			}






			//taking the numbers

			const int NUM_CHAR = 1000;

			int waitnirmal[NUM_CHAR];

			for (int i = 0; i < numchars; i++)
			{
				decryptfile >> waitnirmal[i];

			}

			cout << endl; 
			kolor = 11;

			SetConsoleTextAttribute(hConsole, kolor);



			long float sumrow = 0;
			int j = 0;

			int forchar;


			for (int i = 0; i < numchars; i = i + 3)
			{

				for (int j = 0; j < 3; j++){
					sumrow = waitnirmal[i] * newerone[0][j] + waitnirmal[i + 1] * newerone[1][j] + waitnirmal[i + 2] * newerone[2][j];

					forchar = static_cast<int>(sumrow);
					if (forchar < sumrow && sumrow - forchar >= 0.5){
						forchar++;
					}

					cout << static_cast<char>(forchar);

				}
			}
			cout << endl;
			cout << endl;



			decryptfile.close();
		}

		else if (((choice[0] == 'E') && (choice.size() == 1)) || ((choice[0] == 'e') && (choice.size() == 1))){

			PlaySound(TEXT("master_yes.WAV"), NULL, SND_FILENAME | SND_ASYNC);
			HANDLE  hConsole;
			int kolor;

			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

			kolor = 11;

			SetConsoleTextAttribute(hConsole, kolor);

			const int NUM_CHAR = 10000;

			int waitnirmal[NUM_CHAR];

			cout << "Please enter the text that you wish to have encrypted: ";

			kolor = 13;

			SetConsoleTextAttribute(hConsole, kolor);

			cin.ignore(1000, '\n');

			getline(cin, test);

			string thefile;

			cout << endl;

			kolor = 11;

			SetConsoleTextAttribute(hConsole, kolor);
			cout << "Please enter the name of the file to contain the encrypted message: ";
			kolor = 13;

			SetConsoleTextAttribute(hConsole, kolor);
			getline(cin, thefile);

			if (test.size() % 3 == 2){
				test += ' ';
			}

			else if (test.size() % 3 == 1){
				test += ' ';
				test += ' ';
			}

			int xyz = test.size();



			for (int i = 0; i < test.size(); i++)
			{
				waitnirmal[i] = test[i];
				static_cast<int>(waitnirmal[i]);
			}



			const int COLS = 3;
			const int ROWS = 3;
			const int ARR = 3;

			int input[ARR];
			int key[ROWS][COLS];

			ofstream filename;
			filename.open(thefile);

			filename << xyz << " ";

			int tiempo = time(0);
			srand(tiempo);

			

			//kolor = 10;

			//SetConsoleTextAttribute(hConsole, kolor);

			/*

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./" << endl;
			cout << "   _   \   ||.---.||  _" << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);

			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./d" << endl;
			cout << "   _   \   ||.---.||  _." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ed" << endl;
			cout << "   _   \   ||.---.||  _d." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ted" << endl;
			cout << "   _   \   ||.---.||  _ed." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ated" << endl;
			cout << "   _   \   ||.---.||  _ted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./rated" << endl;
			cout << "   _   \   ||.---.||  _pted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./erated" << endl;
			cout << "   _   \   ||.---.||  _ypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./nerated" << endl;
			cout << "   _   \   ||.---.||  _rypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./enerated" << endl;
			cout << "   _   \   ||.---.||  _crypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./generated" << endl;
			cout << "   _   \   ||.---.||  _ncrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ generated" << endl;
			cout << "   _   \   ||.---.||  _encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./s generated" << endl;
			cout << "   _   \   ||.---.||  _ encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./is generated" << endl;
			cout << "   _   \   ||.---.||  _s encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ is generated" << endl;
			cout << "   _   \   ||.---.||  _is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./y is generated" << endl;
			cout << "   _   \   ||.---.||  _ is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ey is generated" << endl;
			cout << "   _   \   ||.---.||  _t is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./key is generated" << endl;
			cout << "   _   \   ||.---.||  _xt is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ key is generated" << endl;
			cout << "   _   \   ||.---.||  _ext is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./a key is generated" << endl;
			cout << "   _   \   ||.---.||  _text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ a key is generated" << endl;
			cout << "   _   \   ||.---.||  _  text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./e a key is generated" << endl;
			cout << "   _   \   ||.---.||  _r text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./le a key is generated" << endl;
			cout << "   _   \   ||.---.||  _ur text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ile a key is generated" << endl;
			cout << "   _   \   ||.---.||  _our text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./hile a key is generated" << endl;
			cout << "   _   \   ||.---.||  _your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _ your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _d your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./t while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _nd your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./it while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _ and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _   and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./  wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _   and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./e wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _     and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./se wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _        and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ase wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _         and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ease wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _          and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./lease wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _           and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _            and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./ Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _             and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./  Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _              and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./   Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _               and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./    Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./     Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                 and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./      Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                  and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./       Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                   and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./        Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                    and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./         Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                    and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./          Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                    and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./           Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                    and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./            Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                    and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;

			Sleep(100);
			system("cls");

			cout << "   ________________" << endl;
			cout << " | -.--._ _________|" << endl;
			cout << " |  /    |  __    __\"" << endl;
			cout << "  | |  _  | [\_\= [\_\"" << endl;
			cout << " | |.| |. \.........|" << endl;
			cout << " | ( <)  ||:       :|" << endl;
			cout << "  \ |._.| | :.....: |_(o" << endl;
			cout << "   |-\_   \ .------./            Please wait while a key is generated" << endl;
			cout << "   _   \   ||.---.||  _                    and your text is encrypted." << endl;
			cout << "  / \  |-._|/|n~~|n| | \"" << endl;
			cout << " (| []=.--[===[()]===[)" << endl;
			cout << " <\_/  \_______/ _.| /_/" << endl;
			cout << " ///            (_/_/" << endl;
			cout << " |\\            [\\" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " |::|           | I|" << endl;
			cout << " ||:|           | I|" << endl;
			cout << " ||:|           : \:" << endl;
			cout << " |\:|            \I|" << endl;
			cout << " :/\:            ([])" << endl;
			cout << " ([])             [|" << endl;
			cout << "  ||              |\_" << endl;
			cout << " _/_\_            [ -'-.__" << endl;
			cout << "<]   \>            \_____.>" << endl;
			cout << "  \__/" << endl;
			*/

			key[0][0] = rand();
			Sleep(1);

			key[0][1] = rand() % 26 + 1;
			Sleep(1);

			key[0][2] = rand() % 26 + 1;
			Sleep(1);

			key[1][0] = rand() % 26 + 1;
			Sleep(1);

			key[1][1] = rand() % 26 + 1;
			Sleep(1);

			key[1][2] = rand() % 26 + 1;
			Sleep(1);

			key[2][0] = rand() % 26 + 1;
			Sleep(1);

			key[2][1] = rand() % 26 + 1;
			Sleep(1);

			key[2][2] = rand() % 26 + 1;



			for (int i = 0; i < 3; i++){

				for (int j = 0; j < 3; j++){

					filename << key[i][j] << " ";

				}
			}

			int sumrow = 0;

			int j = 0;




			for (int i = 0; i < test.size(); i = i + 3)
			{

				for (int j = 0; j < 3; j++){

					sumrow = waitnirmal[i] * key[0][j] + waitnirmal[i + 1] * key[1][j] + waitnirmal[i + 2] * key[2][j];
					filename << sumrow << " ";


				}
			}

			filename.close();

			cout << endl;
			cout << "Your text has been successfully encrypted." << endl;
			cout << endl;
			Sleep(3000);
			system("cls");
		}

		else
		{
			system("cls");
			cout << "You did not enter a valid choice. Enter one of the following choices." << endl;
			
		}
	}
	return 0;
}