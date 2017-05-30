/*
This is the  A.S.K. organization's first cooperative coding project 2/13/17
The purpose of this project will be to encrypt and decrypt messages sent between
two parties. Input will be recorded, checked, and encoded; ciphers will be created/deployed;
information read from and written to .txt files.
Proto_1 - in progress
-echo
-
-
*/

//Start with header files
#include<iostream>			//Allows us to get user input.
#include<fstream>			//Allows us to read/write to files.
#include<string>			//We may possibly need strings...  Haven't decided yet.
#include<cmath>				//In case we want to make complex ciphers based on math.
#include <sstream>

// Global ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int x = 0;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Functions ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  _instructions();		//This will include instructions for user. You guys can type this out in the actual function body at the bottom.
void _read();
void _write();
void _opSelect();
void _encrypt();
void _decrypt();
void _encode();
void _decode();
void _flushbuffer();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;

int main() {
	_instructions();

	system("pause");

	return(0);
}

void  _opSelect() {
	switch (x) {

		case 1:
		_encrypt();
		break;


		case 2:
		_decrypt();
		break;

		case 3:
		_encode();
		break;

		case 4:
		_decode();
		break;

		default:
		cout << "Invalid entry. Returning to Main.\n" << endl;
		x = 0;

	}
}

void _instructions() {
	//Insert your instructional code here.  How is the user suposed to use this program?
	//Should this concept be menu driven? Give simple, clear, and concise instructions.
	cout << "Welcome to the enigma.\n"
		<< "Please select your operation with an integer:\n\n"
		<< "[ 1 ] - encrypt typed message, [ 2 ] - decrypt typed message,\n"
		<< "[ 3 ] - load encoded message from .txt file, [ 4 ] - submit encoded message to .txt file.\n" << endl;		//I've decided to go ahead and make this a menu driven system.
	cin >> x;
	_opSelect();
}

//void _replace() {
//
//	shell of a function we may or may not decide to use in the future
//
//	}

void _read() {
	system("CLS");
	string line;
	ifstream myfile("0.txt");
	cout << "File Read Initiated.\n\n" << endl;

	if (myfile.is_open()) {						//Perform the actions inside of this if block if the file is open
		while (getline(myfile, line)) {				//Action in "if" block - while there is another line in "myfile"
			cout << line << '\n';						//Print it to the screen
		}
		myfile.close();								//After you reach the last line in the .txt file (a.k.a.  "myfile") - close file.

	} else { cout << "Unable to open file."; }			//If file doesn't exist or can't be opened, print to screen.

	return;
}

void  _write() {
	system("CLS");
	ofstream myfile;
	myfile.open("0.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();
	cout << "File Write Completed." << endl;

	return;
}

void _encrypt() {
	system("CLS");
	string message;
	int userin = 0;
	char messageArray[100];
	double messageOut[100];

	_flushbuffer();

	cout << "Please type the message you would like to be encrypted on the next line and press [enter] when you're done.\n"
		<< ">  ";

	cin >> message;

	_flushbuffer();

	cout << "Message recorded:  " << message << "\n" << endl;
	cout << "Is this correct?\n1 - yes\n2 - no\n>";
	cin >> userin;

	system("CLS");

	if (userin == 1) {
		userin = 0;
		cout << "-- Encrypting --" << endl;
		cout.precision(2);
		
		for (int i = 0; i < message.length(); i++) {
			messageArray[i] = message[i];
			//_replace(); <-- This part below could be put into another function called replace but that's an optimization that's not necessary at this point. 
				// Tried bypassing issue by using decimals. Formatting looks gross. 
			if (messageArray[i] == 'a' || messageArray[i] == 'A') {
				messageOut[i] = .01;
			}
			else if (messageArray[i] == 'b' || messageArray[i] == 'B') {
				messageOut[i] = .02;
			}
			else if (messageArray[i] == 'c' || messageArray[i] == 'C') {
				messageOut[i] = .03;
			}
			else if (messageArray[i] == 'd' || messageArray[i] == 'D') {
				messageOut[i] = .04;
			}
			else if (messageArray[i] == 'e' || messageArray[i] == 'E') {
				messageOut[i] = .05;
			}
			else if (messageArray[i] == 'f' || messageArray[i] == 'F') {
				messageOut[i] = .06;
			}
			else if (messageArray[i] == 'g' || messageArray[i] == 'G') {
				messageOut[i] = .07;
			}
			else if (messageArray[i] == 'h' || messageArray[i] == 'H') {
				messageOut[i] = .27;
			}
			else if (messageArray[i] == 'i' || messageArray[i] == 'I') {
				messageOut[i] = .28;
			}
			else if (messageArray[i] == 'j' || messageArray[i] == 'J') {
				messageOut[i] = .10;
			}
			else if (messageArray[i] == 'k' || messageArray[i] == 'K') {
				messageOut[i] = .11;
			}
			else if (messageArray[i] == 'l' || messageArray[i] == 'L') {
				messageOut[i] = .12;
			}
			else if (messageArray[i] == 'm' || messageArray[i] == 'M') {
				messageOut[i] = .13;
			}
			else if (messageArray[i] == 'n' || messageArray[i] == 'N') {
				messageOut[i] = .14;
			}
			else if (messageArray[i] == 'o' || messageArray[i] == 'O') {
				messageOut[i] = .15;
			}
			else if (messageArray[i] == 'p' || messageArray[i] == 'P') {
				messageOut[i] = .16;
			}
			else if (messageArray[i] == 'q' || messageArray[i] == 'Q') {
				messageOut[i] = .17;
			}
			else if (messageArray[i] == 'r' || messageArray[i] == 'R') {
				messageOut[i] = .18;
			}
			else if (messageArray[i] == 's' || messageArray[i] == 'S') {
				messageOut[i] = .19;
			}
			else if (messageArray[i] == 't' || messageArray[i] == 'T') {
				messageOut[i] = .20;
			}
			else if (messageArray[i] == 'u' || messageArray[i] == 'U') {
				messageOut[i] = .21;
			}
			else if (messageArray[i] == 'v' || messageArray[i] == 'V') {
				messageOut[i] = .22;
			}
			else if (messageArray[i] == 'w' || messageArray[i] == 'W') {
				messageOut[i] = .23;
			}
			else if (messageArray[i] == 'x' || messageArray[i] == 'X') {
				messageOut[i] = .24;
			}
			else if (messageArray[i] == 'y' || messageArray[i] == 'Y') {
				messageOut[i] = .25;
			}
			else if (messageArray[i] == 'z' || messageArray[i] == 'Z') {
				messageOut[i] = .26;
			}
			else if (messageArray[i] == ' ') {
				messageOut[i] = .00;
			}
			else {
				cout << "character unrecognized" << endl;
			}
		}

		//RSA encryption routine

		double p = 42379, q = 19477, r = 6875, s = 319096835;											//p and q  are two prime numbers of 5 digits.  In real practice they're 100 digit or 300 digit long 

		double alpha = p * q, phi = (p - 1) * (q - 1);

		cout << "alpha is.. " << alpha << endl;
		cout << "phi is.." << phi << endl;
		cout << "r is.." << r << endl;										//r and s are picked since multiplied together and divided by phi give a remainder of '1'
		cout << "s is.." << s << endl;
		cout << "\n----------------------------" << endl;

	//	std::stringstream ss;
	//	int result;
		cout << "encrypted message is:" << endl;
		for (int i = 0; i < message.length(); i++) {
					cout << messageArray[i];
			//cout << endl;
			//ss << messageOut[i];
			//int result;
			//ss >> result;					// I've gotten everything to work without using this string stream object - we should steer clear of 
									//code we don't totally understand. I think ss is a C remnant - easier to use characters as we have.
			//_flushbuffer();
			//cout << result;				//more work to do here.  we need the array into a variable so that we can exponentiate it - not working
		}

		
		cout << endl;

		for (int i = 0; i < message.length(); i++) {
			cout << messageOut[i] * 100;
					if (i != message.length() - 1) {

						cout << " - ";
					}
		}
		cout << endl;

	}
	
	else if (userin == 0) {
		system("CLS");
		cout << "Apologies, dear sir, returning to message capture.\n\n" << endl;
			_encrypt();				//This is technically recursive... Since we're in the encrypt function while it's calling another version of the encrypt function.
								//Once one terminates properly they will all recursively terminate. This can be a vulnerability though - infinite loop if someone keeps selecting 0.
								// can be solved by ending program as below - no option to retry. Draconian programming? Perhaps. Necessary? Possibly.
	}
	else {
		cout << "Invalid entry" << endl;
		cout << "Returning to main menu\n";

		_opSelect();
	}
}

void _decrypt() {
	string message;

	_flushbuffer();

	cout << "Please type the message you would like to be decrypted on the next line and press [enter] when you're done.\n"
		<< ">  ";

	if (getline(cin, message)) {
		cout << "\nmessage accepted - Decrypting\n" << endl;
		cout << "Your message was : " << message << endl;
	} else {
		cout << "\nApologies, something went wrong.\n" << endl;
	};
}

void _encode() {
	int ret = 0;

	_flushbuffer;
	cout << "Someday I'll be encoding stuff!\n" << endl;
	_write();

	cout << "Return to menu [1] or exit[any]" << endl;
	if (cin >> ret ) {				//Have to do work here  - all values seem to simply return with the sys('pause')
		_instructions;
		
	}
	else {
		cout << "Goodbye.\n" << endl;
	}
}

void _decode() {
	cout << "Someday I'll be decoding stuff!\n" << endl;
}

void _flushbuffer() {
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	//cout << "Presto - Buffer Cleared\n" << endl;
}
