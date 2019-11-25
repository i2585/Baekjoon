#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string Alp;
	cin >> Alp;
	int buf[26];
	int count,count1=0,index=0;
	for(int i=0;i<26;i++){
		buf[i]=0;
	}
	for(int i=0;i<Alp.length();i++){
		count = 0;
		for(char j='A';j<='Z';j++){
			if(j==toupper(Alp[i])){
				buf[count]+=1;
				break;
			}
			count++;		
		}
	}
	int max=buf[0];
	for(int i=1;i<26;i++){
		if(max<buf[i]){
			max=buf[i];
			index=i;
		}
	}
	for(int i=0;i<26;i++){
		if(max==buf[i])
			count1++;
		if(count1==2){
			cout << "?";
			break;
		}
	}
	if(count1!=2)
		cout << (char) (index+'A');
}
