#ifndef PATIENT_H
#define PATIENT_H
#include"Human.h"
#include<iostream>
#include<string>

class Patient: public Human {
	public:
		Patient();
		~Patient();
		virtual void functionality();
		virtual void programInfo();
		virtual void signUp();
		virtual void logIn();
		virtual void bloodDonated();
		virtual void exit();
		virtual void loggedInOptions();
		virtual void availbilityOfBlood();
		virtual void listOfDonors();
		
	private:
		std::string firstName;
		std::string lastName;
		int age;
		int n;
		std::string email;
		std::string bloodGroup;
		std::string contact;
		char ch;
};
#endif