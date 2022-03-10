#ifndef PACKAGE_INFO
#define PACKAGE_INFO

#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std

vector<int> PackageLibrary; // A library of actice package numbers in rotation
vector<int> ShippingLibrary; // A library of active shpping numbers in rotation

enum class PackageType{FRAGILE,LIQUIDS,NORMAL,BULKY}; // Type of Package being shipped

class Package{
public:
	const string shipping = "SHIPPING";
	const string shipped = "SHIPPED";
	const string delivering = "DELIVERING";
	const string delivered = "DELIVERED";
 
	Package();
 
    
private:
	string shippingID;
	string packageID;
	string currentLocation;
	string originState;
	string zipCode;
	string currentDate;
	PackageType type;
	
};

#endif
