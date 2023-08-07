#ifndef STAFF_H
#define STAFF_H
#include"Human.h"
#include<iostream>
#include<string>

class Staff: public Human {
	public:
		Staff();
		~Staff();
		virtual void functionality();
		virtual void programInfo();
		virtual void signUp();
		virtual void logIn();
		virtual void loggedInOptions();
		virtual void bloodDonated();
		virtual void availbilityOfBlood();
		virtual void exit();
		virtual void listOfDonors();
	
	private:
		std::string donors;
		int n;
		char ch;
};
#endif