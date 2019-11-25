#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	char *cps = new char[1000000];
	strcpy(cps,s.c_str());
	char *cp;
	int count = 0;
	for(cp = strtok(cps, " \t\n"); cp!=NULL; ){
		count++;
		cp = strtok(NULL, " \t\n");
	}
	cout << count;
}
