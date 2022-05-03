#include "package.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;


vector<string> OutstandingPackages; // A library of actice package numbers in rotation
vector<string> OutstandingShippings; // A library of active shpping numbers in rotation

bool IsExistingCode(string check){
	bool exists = false;
	vector<string>::iterator itOne = OutstandingPackages.begin();
	vector<string>::iterator itTwo = OutstandingShippings.begin();
	cout << check << endl;
	
	while(itOne != OutstandingPackages.end()){
		if(check == *itOne){
			exists = true;
		}
		itOne++;
	}
	while(itOne != OutstandingPackages.end()){
		if(check == *itTwo){
			exists = true;
		}
		itTwo++;
	}
	
	return exists;
}

string GenerateBarCode(){
	string rv = "";
	int tmp = 0;
	char num = ' ';
	int i = 0;
	bool once = false;
	
	srand (time(NULL));
	
	while(i < 10){
		tmp = rand() % 9 + 1;
		num = '0' + tmp;
		rv = rv + num;
		i++;
		
		if(i == 10){
		    if(IsExistingCode(rv)){
		        rv = "";
		        i = 0;
		    }
		}
	}
	
	return rv;
}

//Constructor
Package::Package(){}

Package::Package(string shipID, string packID,string cLocation,string oState,string zip,string finalDest,string currDate,string ptype){

	shippingID = shipID;
	packageID = packID;
	currentLocation = cLocation;
	originState = oState;
	zipCode = zip;
	fdestination = finalDest;
	receiveDate = currDate;

	if(ptype == "0"){
		packType = FRAGILE;
		shippingGroup = groupTwo;
	}else if(ptype == "1"){
		packType = LIQUIDS;
		shippingGroup = groupOne;
	}else if(ptype == "2"){
		packType = NORMAL;
		shippingGroup = groupOne;
	}else if(ptype == "3"){
		packType = BULKY;
		shippingGroup = groupThree;
	}else{
		packType = NORMAL;
		shippingGroup = groupOne;
	}
	
}
	
//Destructor
Package::~Package(){
    
}
	
//Sets	
void Package::SetShipID(string value){
	shippingID = value;
}

void Package::SetPackID(string value){
	packageID = value;
}

void Package::SetCurrLocation(string value){
	currentLocation = value;
}

void Package::SetOriginState(string value){
	originState = value;
}
void Package::SetZipCode(string value){
	zipCode = value;
}
void Package::SetFinalDestination(string value){
	fdestination = value;
}

void Package::SetRecieveDate(string value){
	receiveDate = value;
}
void Package::SetPackageType(PackageType value){
	if(value == 0){
		packType = FRAGILE;
	}else if(value == 1){
		packType = LIQUIDS;
	}else if(value == 2){
		packType = NORMAL;
	}else if(value == 3){
		packType = BULKY;
	}else{
		packType = NORMAL;
		
	}
}

//Gets	
string Package::GetShipID(){
	return shippingID;
}
string Package::GetPackID(){
	return	packageID;
}
string Package::GetCurrLocation(){
	return currentLocation;
}
string Package::GetOriginState(){
	return	originState;
}
string Package::GetZipCode(){
	return zipCode;
}
string Package::GetFinalDestination(){
	return	fdestination;
}
string Package::GetReceiveDate(){
	return	receiveDate;
}
string Package::GetPackageType(){
    string rv;
    if(packType == FRAGILE){
		rv = "FRAGILE";
	}else if(packType == LIQUIDS){
		rv = "LIQUIDS";
	}else if(packType == NORMAL){
		rv = "NORMAL";
	}else if(packType == BULKY){
		rv = "BULKY";
	}else{
		rv = "NORMAL";
		
	}
	return	rv;
}

 