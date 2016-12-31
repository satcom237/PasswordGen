/******************************************************************************************
 * Program:	Password Generator
 * Author: 	Sathya Ramanathan
 * Date:	12/26/2015
 * Description:	Takes user input for desired password information such as length and
  		variables and generates randomized password
******************************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int calc(int b, int l, int u, int z, int n, int spc, int u1, int z1, int n1, int s1, float up, float zp, float np, float spcp){
	char ascii;
	srand(time(NULL));
	float de = 0.01;
	for (int i=0; i < (up*de)*(b); i++) {
		u1 = rand() % 26+65;
		cout << char(u1);
	}
	for (int i=0; i < (zp*de)*(b); i++) {
		z1 = rand() % 26+97;
		cout << char(z1);
	}
	for (int i=0; i < (np*de)*(b); i++) { 	
		n1 = rand() % 9+48;
		cout << char(n1);
	}
	for (int i=0; i < (spcp*de)*(b); i++) { 	
		s1 = rand() % 14+33;
		cout << char(s1);
	}	
	cout << endl;
}

bool info(bool run){
	int b, l, u, z, n, spc, u1, z1, n1, s1;  
	float up, zp, np,spcp;	
		cout << "Welcome to Password Creator" << endl;
		cout << "Enter desired password length: ";
		cin >> b;
		cout << "Do you want letters?(1/2): ";
		cin >> l;
		if (l==1) {
			cout << "Do you want uppercase letters?(1/2): ";
			cin >> u;
			if (u==1) {
				cout << "What percent of the password should be uppercase?: ";
				cin >> up;
			}
			else {
				up=0; 
			}
			cout << "Do you want lowercase letters?(1/2): ";
			cin >> z;
			if (z==1) {
				cout << "What percent of the password should be lower case?: ";
				cin >> zp;
			}
			else {
				zp=0;
			}
		} 
		else {
			up=0;
			zp=0;
		}
		cout << "Do you want numbers?(1/2): ";
		cin >> n;
		if (n==1) {
			cout << "What percent of the password should be numbers?: ";
			cin >> np;
		}
		else {
			np=0;
		}
		cout << "Do you want special characters?(1/2): ";
		cin >> spc; 
		if (spc==1) {
			cout << "What percent of the password should be characters?: "; 		
			cin >> spcp;
		}
		else {
			spcp=0;
		}

	calc(b, l, u, z, n, spc, u1, z1, n1, s1, up, zp, np, spcp);
	char k;
	cout << "Do you want to try again?(y/n): ";
	cin >> k;
	if(k == 'y'){
		return false;
	}	
	else{
		cout << "Bye!" << endl;
		return true;
	}
}

int main(){
	bool run;
	system("clear");
	while(info(run) == false){
	}
	return 0;
}

