// helping.cpp : Defines the entry point for the application.
//

#include <iostream>

#include "helping.h"

using namespace std;

bool isSupportedFormat(std::string sentence)
{

	//Trim the string, starting position 3 and then count on 3 charactors (not position 3 and position 5 substr doesn't work like that)
	std::string sentencetrim = sentence.substr(3, 3);
	//Your it statement then return
	if (sentencetrim == "GLL")
	{
		return true;
	}
	else return false;

}

int main()
{
	
	//declare results
		bool outPutBool;
	// Set input String into function isSupportedFormat
		string	inputString = "$GPGGG,100146.000,A,3723.1727,N,00559.5754,W,0.000,0.00,150914,,A*66";
	// Pass String into isSupportedFormat and pass the result into output varible.
		outPutBool = isSupportedFormat(inputString);
	// return the result, hook it into a new program
		return outPutBool;
}


