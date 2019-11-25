#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int d(int i){
	int n=0,n1=0;
	while(i!=0){
		n1=i%10;
		i=i/10;
		n+=n1;
	}
	return n;
}
int main(){
	int number;
	int count=0,count1;
	int num[10000];
	for(int i=1;i<=10000;i++){
		number=0;
		number=i+d(i);
		num[i]=number;
		count++;
	}
	for(int i=1;i<=10000;i++){
		count1=0;
		for(int j=1;j<=count;j++){
			if(num[j]!=i){
				count1++;
			}
		}	
		if(count1==count)
			cout << i << endl;
	}
}
