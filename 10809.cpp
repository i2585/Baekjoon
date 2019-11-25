#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string Alp;
	cin >> Alp;
	int count;
	int number[26];
	for(int i=0;i<26;i++){
		number[i]=-1;
	}
	for(int i=0;i<Alp.length();i++){
		count = 0;
		for(char j='a';j<='z';j++){
			if(Alp[i]==j&&number[count]==-1)
				number[count]=i;
			count++;
		}
	}
	for(int i=0;i<26;i++)
		cout << number[i] << " ";
}
