#include <iostream>
#include <vector>
#include "package.h"
#include "state.h"
#include <map>
#include <cmath>

using namespace std;

//Struct to hold error type
//Error numbers are defined as 1: input errors 
struct errors{
	int errorNum; 
	string errorInfo;
};

//Menu related limits to minimize reused code for specific menus may be expanded later
const int AuthMenuStart = 1;
const int FAQMenuStart = 1;
const int AuthMenuEnd = 7;
const int FAQMenuEnd = 2;
const string PackMenu = "Package ";
const string FAQuMenu = "FAQ ";
//End the Menu related section



void PrintMenu();
void FAQList();
int AuthenticateOption(vector<errors> errorStorage,string menu, int menuStart, int menuFinish);
void AddPackage(vector<package>vectOne,vector<errors> vectTwo);
void FAQMenu();
void PrintError();
string AuthenticateDate(state inputDate,vector<errors> vectTwo);
string AuthenticateZip(string zipCode,vector<errors> vectTwo);
string AuthenticateAbbreviation(string state,vector<errors> vectTwo);


int main(){
	vector<errors> errorStorage; //Storage for errors to make possible improvements
	vector<Package> packageSystem; //Holds packages that are active
	
	PrintMenu();
	
    int num = AuthenticateOption(errorStorage,PackMenu,AuthMenuStart,AuthMenuEnd);
    
	while(num != 7){
		if(num == 1){
			AddPackage(packageSystem,errorStorage)
		}else if(num == 2){
			
		}else if(num == 3){
			
		}else if(num == 4){
			
		}else if(num == 5){
		    
		}else if(num == 6){
			FAQMenu();
			num = AuthenticateOption(errorStorage,FAQuMenu,FAQMenuStart,FAQMenuEnd);
			while(num != 2){
			    if(num == 1){
				    PrintAbreviations();
			    }
			    num = AuthenticateOption(errorStorage,FAQuMenu,FAQMenuStart,FAQMenuEnd);
			}
		}
		num = AuthenticateOption(errorStorage,PackMenu,AuthMenuStart,AuthMenuEnd);
		
	}

return 0;
}

void PrintMenu(){
	cout << "Package System Menu" << endl;
	cout << "(1) Add Package" << endl;
	cout << "(2) Remove Package" << endl;
	cout << "(3) Update Package" << endl;
	cout << "(4) Track Package" << endl;
	cout << "(5) Error Listings" << endl;
	cout << "(6) FAQ's Menu" << endl;
	cout << "(7) Exit" << endl;
	
	return ;
}

int AuthenticateOption(vector<errors> errorStorage,string menu, int menuStart, int menuFinish){
    string option;
    int num = 0;
    errors tmp;
    bool isGood = false;
	int start = menuStart;
	int finish = menuFinish;
	
	while(isGood == false){
	    cout << "Enter a " << menu << "menu option number (" <<  menuStart << " - " << menuFinish << "): ";
	    getline(cin,option);
	    cout << endl;
	    
	    try{
	       num = stoi(option);
	       if(num <= menuFinish and num >= menuStart){
	            isGood = true;
	       }else{
	           cout << "The value inserted was not a menu option try again." << endl;
	       }
	    }catch(exception &err){
	        cout << "The value inserted was not a number valid option try again." << endl;
	        tmp.errorNum = 1;
	        tmp.errorInfo = "The input for the menu was incorrect.";
	        errorStorage.push_back(tmp);
	    }
	    
	}
	return num;
}

void AddPackage(vector<package> vectOne,vector<errors> vectTwo){
	package tmp;
	string value;
	bool error = false;
	
	cout << "Please enter the current date format(MM/DD/YYYY): ";
	getline(cin,value);
	word = AuthenticateDate(value,vectTwo);
	cout << endl;
	
	cout << "Please enter your city name (Georgetown, Fort Hags): ";
	getline(cin,value);
	cout << endl;
	
	cout << "Please enter your states abbreviation (AL,AK,AZ): ";
	getline(cin,value);
	word = AuthenticateAbbreviation(value,vectTwo);
	cout << endl;
	
	cout << "Please enter your locatoin zip code (000111): ";
	getline(cin,value);
	word = AuthenticateZip(value,vectTwo);
	cout << endl;
	
	vectOne.push_back(tmp);
	
	
	return ;
}

string AuthenticateZip(string zipCode,vector<errors> vectTwo){
	string zip = zipCode;
	int length = zipCode.length();
	int i = 0;
	error log;
	bool logged = false;

	while(i < length){
		if(isdigit(zip.at(i)) == false){
			cout << "There was a format input error detected re-enter the zipcode (000111): ";
			getline(cin,zip);
			cout << endl;
			i = 0;
			if(logged == false){
				log.errorNum = 1;
				log.errorInfo = "Input for the zipcode was incorrect.";
				vectTwo.push_back(log);
			}
		}else{
			i++;
		}
	}
			
	return date;
}

string AuthenticateAbbreviation(string state,vector<errors> vectTwo){
	string abbreviation = state;
	int length = inputDate.length();
	int i = 0;
	error log;
	bool logged = false;

	while(!RealAbbreviation(state)){
		cout << "There was a format error or incorrect abbreviation detected re-enter the state abbreviation (AL,AK,AZ): ";
		getline(cin,date);
		cout << endl;
		i = 0;
		if(logged == false){
			log.errorNum = 1;
			log.errorInfo = "Input for the abbreviations was incorrect.";
			vectTwo.push_back(log);
		}
	}

}

string AuthenticateDate(state inputDate,vector<errors> vectTwo){
	string date = inputDate;
	int length = inputDate.length();
	int i = 0;
	error log;
	bool logged = false;

	while(i < length){
		if(isdigit(date.at(i)) == false or (date.at(2) == '/' and date.at(5) == '/'){
			cout << "There was a format error or incorrect date detected re-enter the date (MM/DD/YYYY): ";
			getline(cin,date);
			cout << endl;
			i = 0;
			if(logged == false){
				log.errorNum = 1;
				log.errorInfo = "Input for the date was incorrect.";
				vectTwo.push_back(log);
			}
		}else{
			i++;
		}
	}
			
	return date;
	
}


void FAQMenu(){
	string option;
	int num = 0;
	
	cout << "FAQ Menu" << endl;
	cout << "(1) Find a state abbreviation" << endl;
	cout << "(2) Exit " << endl;

	return ;
}

