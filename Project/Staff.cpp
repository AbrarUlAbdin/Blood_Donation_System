#include"Staff.h"

Staff::Staff()
{
	
}
Staff::~Staff()
{
	
}

void Staff::functionality() {
	std::cout<<std::endl;
	std::cout<<"****WELCOME TO OUR BLOOD DONATION PROGRAM**** "<<std::endl;
	std::cout<<std::endl;
	Sleep(800);
	std::cout<<"              Press [1] for log in. "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [2] for Exit. "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"        ************************************** "<<std::endl;
	Sleep(800);
	do {
	std::cout<<std::endl;
	std::cout<<"              Your Response: ";
	std::cin>>n;
	std::cout<<std::endl;
	} while (n>2 || n<1);
	Sleep(800);
	if (n==1)
	{
		logIn ();
	}
	else if (n==2)
	{
		exit ();
	}  
}
void Staff::programInfo() {}
void Staff::signUp() {}
void Staff::logIn() {
	Sleep(800);
	std::cout<<"Username : ";
	std::cin>>userName;
	userName += "Staff.txt";
	std::cout<<std::endl;
	std::cout<<"Password : ";	
	
	password ="";
   	ch = _getch();
   	while(ch != 13) {
    password.push_back(ch); //printing * while entering password so that no one can see password
    std::cout << '*';
    ch = _getch();
   	
   	}

	std::cout<<std::endl;

	std::ifstream myfile(userName.c_str());
	myfile>>userName1>>password1;
	userName1 +="Staff.txt";
	myfile.close();

	if(userName.compare(userName1)==0) {             
		if(password.compare(password1)==0) {
			Sleep(1200);
			std::cout<<std::endl;
			std::cout<<"***Succesfull log in***"<<std::endl;
			loggedInOptions();		
		}
		else {
			std::cout<<"Wrong log in details"<<std::endl;
			std::cout<<std::endl;
			logIn();		
		}
	}
	else {
		std::cout<<"Wrong log in details"<<std::endl;
		std::cout<<std::endl;
		logIn();
	}
}
void Staff::exit(){
		std::cout<<std::endl;
		std::cout<<" Thank You For Your Time, Have a Good Day."<<std::endl;
		std::cout<<std::endl;
}
void Staff::loggedInOptions() {
	std::cout<<std::endl;
	std::cout<<"************WELCOME "<<userName<<" ************"<<std::endl;
	std::cout<<std::endl;
	Sleep(800);
	std::cout<<"              Press [1] for Availble Blood Bolltes "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [2] for List of Donors  "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [3] for Log Out & Exit "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"        ************************************** "<<std::endl;
	Sleep(800);
	do {
	std::cout<<std::endl;
	std::cout<<"              Your Response: ";
	std::cin>>n;
	std::cout<<std::endl;
	} while (n>3 || n<1);
	Sleep(800);
	if (n==1)
	{
		availbilityOfBlood();
		loggedInOptions();
	}
	else if (n==2)
	{
		listOfDonors();
		loggedInOptions();
	}
	else if(n==3)
	{
		exit();
	}
}
void Staff::bloodDonated() {
	
}
void Staff::availbilityOfBlood() {
	std::ifstream myfile("availbilityOfBlood.txt");
	myfile>>Apositive>>Anegative>>Bpositive>>Bnegative>>ABpositive>>ABnegative>>Opositive>>Onegative;
	std::cout<<"******AVAILBLE BLOOD BOLLTES******"<<std::endl;
	std::cout<<std::endl;
	Sleep(800);	
	std::cout<<"A+  : "<<Apositive<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"A-  : "<<Anegative<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"B+  : "<<Bpositive<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"B-  : "<<Bnegative<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"AB+ : "<<ABpositive<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"AB- : "<<ABnegative<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"O+  : "<<Opositive<<std::endl;
	std::cout<<std::endl;
	Sleep(350);
	std::cout<<"O-  : "<<Onegative<<std::endl;
	std::cout<<std::endl;
	myfile.close();
}
void Staff::listOfDonors() {
	std::cout<<"********LIST OF DONORS********"<<std::endl<<std::endl;
	std::ifstream myfile("listOfDonors.txt");
	if (myfile.is_open()) {
        std::cout << myfile.rdbuf()<<std::endl;
	}
	myfile.close();
}
