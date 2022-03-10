#ifndef STATE_INFO
#define STATE_INFO

#include <string>
#include <iostream>

using namespace std;

void PrintAbreviations();

void PrintAbreviations(){
    string option;
    bool canExit = false;
	cout << "Be sure to capitalize the first letter and second letter of states when needed." << endl;
    
	while(!canExit){    
    	cout << "Enter the state name, to return to main menu enter Q: ";
	    getline(cin,option);
	    cout << endl;
	    
	    if(option == "Alabama"){
	        cout << option << "'s abbreivation is: " << "AL" << endl;
	    }else if(option == "Alaska"){
	        cout << option << "'s abbreivation is: " << "AK" << endl;
	    }else if(option == "Arizona"){
	        cout << option << "'s abbreivation is: " << "AZ" << endl;
	    }else if(option == "Arkansas"){
	        cout << option << "'s abbreivation is: " << "AK" << endl;
	    }else if(option == "Californa"){
	        cout << option << "'s abbreivation is: " << "CA" << endl;
	    }else if(option == "Colorado"){
	        cout << option << "'s abbreivation is: " << "CO" << endl;
	    }else if(option == "Conneticut"){
	        cout << option << "'s abbreivation is: " << "CT" << endl;
	    }else if(option == "Delware"){
	        cout << option << "'s abbreivation is: " << "DE" << endl;
	    }else if(option == "Florida"){
	        cout << option << "'s abbreivation is: " << "FL" << endl;
	    }else if(option == "Georgia"){
	        cout << option << "'s abbreivation is: " << "GA" << endl;
	    }else if(option == "Hawaii"){
	        cout << option << "'s abbreivation is: " << "HI" << endl;
	    }else if(option == "Idaho"){
	        cout << option << "'s abbreivation is: " << "ID" << endl;
	    }else if(option == "Illinois"){
	        cout << option << "'s abbreivation is: " << "IL" << endl;
	    }else if(option == "Indiana"){
	        cout << option << "'s abbreivation is: " << "IN" << endl;
	    }else if(option == "Iowa"){
	        cout << option << "'s abbreivation is: " << "IA" << endl;
	    }else if(option == "Kansas"){
	        cout << option << "'s abbreivation is: " <<"KS" << endl;
	    }else if(option == "Kentucky"){
	        cout << option << "'s abbreivation is: " << "KT" << endl;
	    }else if(option == "Louisiana"){
	        cout << option << "'s abbreivation is: " << "LA" << endl;
	    }else if(option == "Maine"){
	        cout << option << "'s abbreivation is: " << "ME" << endl;
	    }else if(option == "Maryland"){
	        cout << option << "'s abbreivation is: " << "MD" << endl;
	    }else if(option == "Massachusetts"){
	        cout << option << "'s abbreivation is: " << "MA" << endl;
	    }else if(option == "Michigan"){
	        cout << option << "'s abbreivation is: " << "MI" << endl;
	    }else if(option == "Minnesota"){
	        cout << option << "'s abbreivation is: " << "MN" << endl;
	    }else if(option == "Mississippi"){
	        cout << option << "'s abbreivation is: " << "MS" << endl;
	    }else if(option == "Missouri"){
	        cout << option << "'s abbreivation is: " << "MO" << endl;
	    }else if(option == "Montana"){
	        cout << option << "'s abbreivation is: " << "MT" << endl;
	    }else if(option == "Nebraska"){
	        cout << option << "'s abbreivation is: " << "NE" << endl;
	    }else if(option == "Nevada"){
	        cout << option << "'s abbreivation is: " << "NV" << endl;
	    }else if(option == "New Hampshire"){
	        cout << option << "'s abbreivation is: " << "NH" << endl;
	    }else if(option == "New Jersey"){
	        cout << option << "'s abbreivation is: " << "NJ" << endl;
	    }else if(option == "New Mexico"){
	        cout << option << "'s abbreivation is: " << "NM" << endl;
	    }else if(option == "New York"){
	        cout << option << "'s abbreivation is: " << "NY" << endl;
	    }else if(option == "North Carolina"){
	        cout << option << "'s abbreivation is: " << "NC" << endl;
	    }else if(option == "North Dakota"){
	        cout << option << "'s abbreivation is: " << "ND" << endl;
	    }else if(option == "Ohio"){
	        cout << option << "'s abbreivation is: " << "OH" << endl;
	    }else if(option == "Oklahoma"){
	        cout << option << "'s abbreivation is: " << "OK" << endl;
	    }else if(option == "Oregon"){
	        cout << option << "'s abbreivation is: " << "OR" << endl;
	    }else if(option == "Pennsylvania"){
	        cout << option << "'s abbreivation is: " << "PA" << endl;
	    }else if(option == "Rhode Island"){
	        cout << option << "'s abbreivation is: " << "RI" << endl;
	    }else if(option == "South Carolina"){
	        cout << option << "'s abbreivation is: " << "SC" << endl;
	    }else if(option == "South Dakota"){
	        cout << option << "'s abbreivation is: " << "SD" << endl;
	    }else if(option == "Tennessee"){
	        cout << option << "'s abbreivation is: " << "TN" << endl;
	    }else if(option == "Texas"){
	        cout << option << "'s abbreivation is: " << "TX" << endl;
	    }else if(option == "Utah"){
	        cout << option << "'s abbreivation is: " << "UT" << endl;
	    }else if(option == "Vermont"){
	        cout << option << "'s abbreivation is: " << "VT" << endl;
	    }else if(option == "Virginia"){
	        cout << option << "'s abbreivation is: " << "VA" << endl;
	    }else if(option == "Washington"){
	        cout << option << "'s abbreivation is: " << "WA" << endl;
	    }else if(option == "West Virginia"){
	        cout << option << "'s abbreivation is: " << "WV" << endl;
	    }else if(option == "Wisconsin"){
	        cout << option << "'s abbreivation is: " << "WI" << endl;
	    }else if(option == "Wyoming"){
	        cout << option << "'s abbreivation is: " << "WY" << endl;
	    }else if(option == "Q"){
	        canExit = true;
	    }else{
	        cout << "Not a valid state try again" << endl;
	    }
    }
}

#endif 