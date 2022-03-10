#include <iostream>
#include <vector>
#include "package.h"
#include "state.h"
#include <map>
#include <cmath>

using namespace std;

//Struct to hold error type
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
	string word;
	bool error = false;
	
	cout << "Please enter the current state format(MM/DD/YYYY): ";
	getline(cin,word);
	cout << endl;
	
	cout << "Please enter your city name: ";
	getline(cin,word);
	cout << endl;
	
	cout << "Please enter your states abbreviation: ";
	getline(cin,word);
	cout << endl;
	
	cout << "Please enter your locatoin zip code: ";
	getline(cin,word);
	cout << endl;
	
	
	
	return ;
}

void FAQMenu(){
	string option;
	int num = 0;
	
	cout << "FAQ Menu" << endl;
	cout << "(1) Find a state abbreviation" << endl;
	cout << "(2) Exit " << endl;

	return ;
}

