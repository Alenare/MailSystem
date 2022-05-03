#ifndef PACKAGE_INFO
#define PACKAGE_INFO

#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

class Package{
public:
    enum PackageType{FRAGILE,LIQUIDS,NORMAL,BULKY}; // Type of Package being shipped

	const string groupOne = "Normals";
	const string groupTwo = "Fragiles";
	const string groupThree = "Heavy";
	const string shipping = "SHIPPING";
	const string shipped = "SHIPPED";
	const string delivering = "DELIVERING";
	const string delivered = "DELIVERED";
 
	//Constructor
    Package();
	Package(string shipID, string packID,string cLocation,string oState,string zip,string finalDest,string currDate,string ptype);
	
	//Destructor
	~Package();
	
	void UpdatePackage(string location,string nxtDestination);
	
	void SetShipID(string value);
	void SetPackID(string value);
	void SetCurrLocation(string value);
	void SetOriginState(string value);
	void SetZipCode(string value);
	void SetFinalDestination(string value);
	void SetRecieveDate(string value);
	void SetPackageType(PackageType value);
	
	string GetShipID();
	string GetPackID();
	string GetCurrLocation();
	string GetOriginState();
	string GetZipCode();
	string GetFinalDestination();
	string GetReceiveDate();
	string GetPackageType();
 
    
private:
	string shippingID;
	string packageID;
	string currentLocation;
	string nextDestination;
	string originState;
	string zipCode;
	string fdestination;
	string receiveDate;
	PackageType packType;
	string shippingGroup;
};

#endif
