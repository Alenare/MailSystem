#ifndef STATE_INFO
#define STATE_INFO

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

void PrintAbreviations();

bool RealAbbreviation(string abbreviation);

void PrintAbreviations(){
    string option;
    bool canExit = false;
    
	while(!canExit){    
    	cout << "Enter the state name to get the corresponding abbreivation, to return to main menu enter Q: ";
	    getline(cin,option);
	    cout << endl;
		
		
	    
	    if(option == "alabama"){
	        cout << option << "'s abbreivation is: " << "AL" << endl;
	    }else if(option == "alaska"){
	        cout << option << "'s abbreivation is: " << "AK" << endl;
	    }else if(option == "arizona"){
	        cout << option << "'s abbreivation is: " << "AZ" << endl;
	    }else if(option == "arkansas"){
	        cout << option << "'s abbreivation is: " << "AK" << endl;
	    }else if(option == "californa"){
	        cout << option << "'s abbreivation is: " << "CA" << endl;
	    }else if(option == "colorado"){
	        cout << option << "'s abbreivation is: " << "CO" << endl;
	    }else if(option == "conneticut"){
	        cout << option << "'s abbreivation is: " << "CT" << endl;
	    }else if(option == "delware"){
	        cout << option << "'s abbreivation is: " << "DE" << endl;
	    }else if(option == "florida"){
	        cout << option << "'s abbreivation is: " << "FL" << endl;
	    }else if(option == "georgia"){
	        cout << option << "'s abbreivation is: " << "GA" << endl;
	    }else if(option == "hawaii"){
	        cout << option << "'s abbreivation is: " << "HI" << endl;
	    }else if(option == "idaho"){
	        cout << option << "'s abbreivation is: " << "ID" << endl;
	    }else if(option == "illinois"){
	        cout << option << "'s abbreivation is: " << "IL" << endl;
	    }else if(option == "indiana"){
	        cout << option << "'s abbreivation is: " << "IN" << endl;
	    }else if(option == "iowa"){
	        cout << option << "'s abbreivation is: " << "IA" << endl;
	    }else if(option == "kansas"){
	        cout << option << "'s abbreivation is: " <<"KS" << endl;
	    }else if(option == "kentucky"){
	        cout << option << "'s abbreivation is: " << "KT" << endl;
	    }else if(option == "louisiana"){
	        cout << option << "'s abbreivation is: " << "LA" << endl;
	    }else if(option == "maine"){
	        cout << option << "'s abbreivation is: " << "ME" << endl;
	    }else if(option == "maryland"){
	        cout << option << "'s abbreivation is: " << "MD" << endl;
	    }else if(option == "massachusetts"){
	        cout << option << "'s abbreivation is: " << "MA" << endl;
	    }else if(option == "michigan"){
	        cout << option << "'s abbreivation is: " << "MI" << endl;
	    }else if(option == "minnesota"){
	        cout << option << "'s abbreivation is: " << "MN" << endl;
	    }else if(option == "mississippi"){
	        cout << option << "'s abbreivation is: " << "MS" << endl;
	    }else if(option == "missouri"){
	        cout << option << "'s abbreivation is: " << "MO" << endl;
	    }else if(option == "montana"){
	        cout << option << "'s abbreivation is: " << "MT" << endl;
	    }else if(option == "nebraska"){
	        cout << option << "'s abbreivation is: " << "NE" << endl;
	    }else if(option == "nevada"){
	        cout << option << "'s abbreivation is: " << "NV" << endl;
	    }else if(option == "new hampshire"){
	        cout << option << "'s abbreivation is: " << "NH" << endl;
	    }else if(option == "new jersey"){
	        cout << option << "'s abbreivation is: " << "NJ" << endl;
	    }else if(option == "new mexico"){
	        cout << option << "'s abbreivation is: " << "NM" << endl;
	    }else if(option == "new york"){
	        cout << option << "'s abbreivation is: " << "NY" << endl;
	    }else if(option == "north carolina"){
	        cout << option << "'s abbreivation is: " << "NC" << endl;
	    }else if(option == "north dakota"){
	        cout << option << "'s abbreivation is: " << "ND" << endl;
	    }else if(option == "ohio"){
	        cout << option << "'s abbreivation is: " << "OH" << endl;
	    }else if(option == "oklahoma"){
	        cout << option << "'s abbreivation is: " << "OK" << endl;
	    }else if(option == "oregon"){
	        cout << option << "'s abbreivation is: " << "OR" << endl;
	    }else if(option == "pennsylvania"){
	        cout << option << "'s abbreivation is: " << "PA" << endl;
	    }else if(option == "rhode island"){
	        cout << option << "'s abbreivation is: " << "RI" << endl;
	    }else if(option == "south carolina"){
	        cout << option << "'s abbreivation is: " << "SC" << endl;
	    }else if(option == "south dakota"){
	        cout << option << "'s abbreivation is: " << "SD" << endl;
	    }else if(option == "tennessee"){
	        cout << option << "'s abbreivation is: " << "TN" << endl;
	    }else if(option == "texas"){
	        cout << option << "'s abbreivation is: " << "TX" << endl;
	    }else if(option == "utah"){
	        cout << option << "'s abbreivation is: " << "UT" << endl;
	    }else if(option == "vermont"){
	        cout << option << "'s abbreivation is: " << "VT" << endl;
	    }else if(option == "virginia"){
	        cout << option << "'s abbreivation is: " << "VA" << endl;
	    }else if(option == "washington"){
	        cout << option << "'s abbreivation is: " << "WA" << endl;
	    }else if(option == "west virginia"){
	        cout << option << "'s abbreivation is: " << "WV" << endl;
	    }else if(option == "wisconsin"){
	        cout << option << "'s abbreivation is: " << "WI" << endl;
	    }else if(option == "wyoming"){
	        cout << option << "'s abbreivation is: " << "WY" << endl;
	    }else if(option == "q"){
	        canExit = true;
	    }else{
	        cout << "Not a valid option try again" << endl;
	    }
    }
    	    
	return ;
}
bool RealAbbreviation(string abbreviation){
		string option;
		bool isGood = true;
    
	    if(option == "AL"){
			//Do Nothing
	    }else if(option == "AK"){
	    }else if(option == "AZ"){
	    }else if(option == "AK"){
	    }else if(option == "CA"){
	    }else if(option == "CO"){
	    }else if(option == "CT"){
	    }else if(option == "DE"){
	    }else if(option == "FL"){
	    }else if(option == "GA"){
	    }else if(option == "HI"){
	    }else if(option == "ID"){
	    }else if(option == "IL"){
	    }else if(option == "IN"){
	    }else if(option == "IA"){
	    }else if(option == "KS"){
	    }else if(option == "KT"){
	    }else if(option == "LA"){
	    }else if(option == "ME"){
	    }else if(option == "MD"){
	    }else if(option == "MA"){
	    }else if(option == "MI"){
	    }else if(option == "MN"){
	    }else if(option == "MS"){
	    }else if(option == "MO"){
	    }else if(option == "MT"){
	    }else if(option == "NE"){
	    }else if(option == "NV"){
	    }else if(option == "NH"){
	    }else if(option == "NJ"){
	    }else if(option == "NM"){
	    }else if(option == "NY"){
	    }else if(option == "NC"){
	    }else if(option == "ND"){
	    }else if(option == "OH"){
	    }else if(option == "OK"){
	    }else if(option == "OR"){
	    }else if(option == "PA"){
	    }else if(option == "RI"){
	    }else if(option == "SC"){
	    }else if(option == "SD"){
	    }else if(option == "TN"){
	    }else if(option == "TX"){
	    }else if(option == "UT"){
	    }else if(option == "VT"){
	    }else if(option == "VA"){
	    }else if(option == "WA"){
	    }else if(option == "WV"){
	    }else if(option == "WI"){
	    }else if(option == "WY"){
	    }else{
	        isGood = false;
	    }
		
	return isGood;
}

 string ToLowerCase(string value){
    int length = value.length();
	int i = 0;
	string rv;

	while(i <length){
		if(value.at(i) != ' '){
			rv = rv + char(tolower(value.at(i)));
		}else{
			rv = rv + ' ';
		}
		i++;
	}
	
	return rv;
}
		

#endif 
