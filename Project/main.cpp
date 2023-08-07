#include"Patient.h"
#include"Staff.h"
#include"Donor.h"

int main() {

	int n;
	//asking about the user 
	std::cout<<std::endl;
	std::cout<<"****WELCOME TO OUR BLOOD DONATION PROGRAM**** "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [1] for Staff "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [2] for Patient "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [3] for Donor "<<std::endl;
	std::cout<<std::endl;
	std::cout<<"              Press [4] for Exit "<<std::endl;
	
	do {
	std::cout<<std::endl;
	std::cout<<"              Your Response: ";
	std::cin>>n;
	} while (n>4 || n<1);  //using validation so that user don't input wrong number

	
	if(n==1) { //if user is staff 

		Human* h = new Staff(); //staff object is being created

		h->functionality(); //calling option fucton of staff for showing more option to user


		delete h; //deleting b
	}
	else if(n==2) { //if user is patient 

		Human* h = new Patient();	//patient object is being created

		h->functionality();	//calling option function of patient for showing more option to user

		delete h;	//deleting b
 	}
 	else if(n==3) { //if user is donor

 		Human* h = new Donor(); //donor object is being created

 		h->functionality();	//calling option function of donor for showing more option to user

 		delete h;	//deleting b
 	}
 	else if(n==4) { //for exit
 		
 		Human* h = new Staff(); //creating staff object so that i can access exit function of staff 

 		h->exit();

 		delete h;	//deleting b
 	}


	return 0;
}
