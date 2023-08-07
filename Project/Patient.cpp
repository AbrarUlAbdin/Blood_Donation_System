#include"Patient.h"

Patient::Patient()
{
	
}
Patient::~Patient()
{

}
void Patient::functionality() {
	
	std::cout<<std::endl;
	std::cout<<"****WELCOME TO OUR BLOOD DONATION PROGRAM**** "<<std::endl;
	std::cout<<std::endl;
	Sleep(800);
	std::cout<<"              Press [1] for log in. "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [2] for sign up. "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [3] for program info. "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [4] to exit. "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"        ************************************** "<<std::endl;
	Sleep(800);
	do {
	std::cout<<std::endl;
	std::cout<<"              Your Response: ";
	std::cin>>n;
	std::cout<<std::endl;
	} while (n>4 || n<1);
	Sleep(800);
	if (n==1)
	{
		logIn ();
	}
	else if (n==2)
	{
		signUp ();
	}
	else if (n==3)
	{
		programInfo();
	}
	else if (n==4)
	{
		std::cout<<" Thank You For Your Time, Have a Good Day."<<std::endl;
		std::cout<<std::endl;
	}
}
void Patient::programInfo() {
	std::cout<<"********BLOOD DONATION PORTAL********"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"This Portal helps you to donate blood or get blood easily"<<std::endl;
	std::cout<<std::endl;
	Sleep(800);
	std::cout<<"Your blood can save someone's life"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"BOOK YOUR APPOINMENT RIGHT NOW FOR DONATION"<<std::endl;
	std::cout<<std::endl;
	Sleep(800);
	std::cout<<"PROUD TO BE SOMEONE'S LIFELINE"<<std::endl;
	std::cout<<std::endl;
	Sleep(800);
	std::cout<<"Program created and developed By :"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Abrar Ul Abdin         (cs191007)"<<std::endl;
	std::cout<<std::endl;
}
void Patient::exit(){
		std::cout<<" Thank You For Your Time, Have a Good Day."<<std::endl;
		std::cout<<std::endl;
}
void Patient::signUp() {
 //defination of sign up function which will help the user to sign up and this function will take whole info of user and will save it to a file

	std::cout<<"******Thank you for deciding to Join us******"<<std::endl;
	std::cout<<std::endl;
	Sleep(500);
	std::cout<<"First Name : ";
	std::cin>>firstName;
	std::cout<<std::endl;

	Sleep(500);
	std::cout<<"Last Name  : ";
	std::cin>>lastName;
	std::cout<<std::endl;

	Sleep(500);
	std::cout<<"Age        : ";
	std::cin>>age;
	std::cout<<std::endl;

	Sleep(500);
	std::cout<<"Contact    : ";
	std::cin>>contact;
	std::cout<<std::endl;

	Sleep(500);	
	std::cout<<"Blood Group : ";
	std::cin>>bloodGroup;
	std::cout<<std::endl;

	Sleep(500);	
	std::cout<<"Email       : ";
	std::cin>>email;
	std::cout<<std::endl;

	Sleep(500);
	std::cout<<"User Name (WITHOUT SPACES)  : ";
	std::cin>>userName;
	std::cout<<std::endl;

	Sleep(500);
	std::cout<<"Password    : ";
	password ="";
   	ch = _getch();
   	while(ch != 13) {//character 13 is enter
    
    password.push_back(ch);
    std::cout << '*';
    ch = _getch();
   	
   	}

	std::cout<<std::endl;

	Sleep(500);
	std::cout<<std::endl;
	std::cout<<"***Thank you for Joining Us***";
	std::cout<<std::endl;
	Sleep(500);


	if(age<17) { //condition for age restriction so that below 17 could not sign up
		std::cout<<"**Sorry! You're not eligible for blood donation**"<<std::endl;
		std::cout<<std::endl;
		exit(); //after showing ineligibilty message exit will be called to exit program
	}
	else {
		userName += "Patient.txt"; //after successful sign up adding .txt extension to user name so a .txt which username will be created and whole user data will be stored there 
		
		std::ofstream myfile(userName.c_str()); //filing the data of user
  		myfile<<firstName<<" "<<lastName<<" "<<age<<" "<<contact<<" "<<bloodGroup<<" "<<email<<" "<<userName<<" "<<password;
  		myfile.close();
		functionality(); //again calling options function after sign up to move forward 
	}

}
void Patient::logIn() {
	std::cout<<std::endl;
	std::cout<<"Username : ";
	std::cin>>userName1;
	userName1 += "Patient.txt"; //adding extension of txt file so that it can read while logging in
	std::cout<<std::endl;

	std::cout<<"Password : ";
	password1 ="";
   	ch = _getch();
   	while(ch != 13) {//character 13 is enter
    
    password1.push_back(ch); //printing * while entering password so that no one can see password
    std::cout << '*';
    ch = _getch();
   	
   	}

	std::cout<<std::endl;

	std::ifstream myfile(userName1.c_str());
	myfile>>firstName>>lastName>>age>>contact>>bloodGroup>>email>>userName>>password; //taking username and password from file 

	if(userName.compare(userName1)==0) {           //comparing entered username and username taken from file 
		if(password.compare(password1)==0) { 		//comparing entered passpord and password taken from file
			std::cout<<std::endl;
			std::cout<<"***Succesfull log in***"<<std::endl;
			loggedInOptions();		//if username and password matches then loggedInOptions will be called
		}
	}
	else {
		std::cout<<std::endl;
		std::cout<<"Wrong log in details"; 
		std::cout<<std::endl;
		logIn(); //if password or username is wrong then it will again call logIn function
	}
}
void Patient::loggedInOptions() {

		std::cout<<std::endl;
		std::cout<<"              Press [1] for Your Profile "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"              Press [2] for Blood Required "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"              Press [3] to Log out & Exit . "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"        ************************************** "<<std::endl;
		Sleep(800);

		do {
			std::cout<<std::endl;
			std::cout<<"              Your Response: ";
			std::cin>>n;
			std::cout<<std::endl;
		} while (n>4 || n<1);
			
		if (n==1)
		{
			std::ifstream myfile(userName1.c_str());
			myfile>>firstName>>lastName>>age>>contact>>bloodGroup>>email>>userName>>password;
			std::cout<<std::endl;
			Sleep(500);

			std::cout<<"First Name : ";
			std::cout<<firstName;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);
			std::cout<<"Last Name  : ";
			std::cout<<lastName;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);
			std::cout<<"Age        : ";
			std::cout<<age;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);
			std::cout<<"Contact    : ";
			std::cout<<contact;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);	
			std::cout<<"Blood Group : ";
			std::cout<<bloodGroup;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);	
			std::cout<<"Email       : ";
			std::cout<<email;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);
			std::cout<<"User Name   : ";
			std::cout<<userName;
			std::cout<<std::endl;
			std::cout<<std::endl;

			Sleep(500);

			loggedInOptions();
		}
		else if (n==2)
		{

			std::cout<<"**Your Blood request is forwarded and approved please visit us to get Blood Bollte of Required Group**"<<std::endl<<std::endl;
			bloodDonated();
		}
		else if (n==3)
		{
			exit();
		}
}
void Patient::bloodDonated() {
	std::ifstream myfile("availbilityOfBlood.txt");
	myfile>>Apositive>>Anegative>>Bpositive>>Bnegative>>ABpositive>>ABnegative>>Opositive>>Onegative;
	myfile.close();
	if(bloodGroup == "A+" || bloodGroup == "a+")
	{
		Apositive--;
	}
	else if(bloodGroup== "A-" || bloodGroup == "a-")
	{
		Anegative--;
	}
		else if(bloodGroup== "B+" || bloodGroup == "b+")
	{
		Bpositive--;
	}
	else if(bloodGroup== "B-" || bloodGroup == "b-")
	{
		Bnegative--;
	}
	else if(bloodGroup== "AB+" || bloodGroup == "ab+")
	{
		ABpositive--;
	}
	else if(bloodGroup== "AB-" || bloodGroup == "ab-")
	{
		ABnegative--;
	}
	else if(bloodGroup== "O+" || bloodGroup == "o+")
	{
		Opositive--;
	}
	else if(bloodGroup== "O-" || bloodGroup == "o-")
	{
		Onegative--;
	}

	std::ofstream myfile1("availbilityOfBlood.txt");
	myfile1<<Apositive<<" "<<Anegative<<" "<<Bpositive<<" "<<Bnegative<<" "<<ABpositive<<" "<<ABnegative<<" "<<Opositive<<" "<<Onegative;
	myfile1.close();
	
}
void Patient::availbilityOfBlood() {
	
}
void Patient::listOfDonors() {
	
}

