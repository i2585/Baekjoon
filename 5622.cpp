#include <iostream>
#include <string>
using namespace std;

int get_number(string Alp){
	int sum=0;
	int count,count1;
	for(int i=0;i<Alp.length();i++){
		count=2;
		count1=0;
		for(char j='A';j<='Z';j++){
			if(Alp[i]==j){
				sum+=count+1;
				break; 
			}
			count1++;
			if(j=='P'||j=='W')
				count1--;
			if(count1>2){
				count1=0;
				count++;
			}
		}
	}
	return sum;
}

int main(){
	string Alp;
	cin >> Alp;
	cout << get_number(Alp);
}
