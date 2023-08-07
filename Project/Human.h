#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
#include<conio.h>

class Human {
	public:
		Human();
		~Human();
		virtual void functionality()=0;
		virtual void logIn()=0;
		virtual void signUp()=0;
		virtual void programInfo()=0;
		virtual void loggedInOptions()=0;
		virtual void bloodDonated()=0;
		virtual void listOfDonors()=0;
		virtual void availbilityOfBlood()=0;
		virtual void exit()=0;

	protected:
		std::string userName;
		std::string userName1;
		std::string password;
		std::string password1;
	    static int Apositive;
		static int Anegative;
		static int Bpositive;
		static int Bnegative;
		static int ABpositive;
		static int ABnegative;
		static int Opositive;
		static int Onegative;		

};
#endif
