#include <iostream>
#include <cstring>
using namespace std;

void change(char *num,char *num1){
	int temp;
	for(int i=0;i<2;i++){
		temp=0;
		if(i==1){
			temp=num[2];
			num[2]=num[0];
			num[0]=temp;
		}
		else{
			temp=num1[2];
			num1[2]=num1[0];
			num1[0]=temp;
		}
	}
}
int main(){
	char *num = new char[3];
	char *num1 = new char[3];
	cin >> num >> num1;
	change(num,num1);
	if(atoi(num)>atoi(num1))
		cout << num;
	else
		cout << num1;
}
