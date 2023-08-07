#ifndef DONOR_H
#define DONOR_H
#include"Human.h"
#include<iostream>
#include<string>

class Donor: public Human {
	public:
		Donor();
		~Donor();
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
		std::string firstName;
		std::string lastName;
		int age;
		std::string email;
		std::string bloodGroup;
		std::string contact;
		int n;
		char ch;
		
};
#endif
