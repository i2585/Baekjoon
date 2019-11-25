#include <iostream>
using namespace std;
int count = 0;
void sequence(int i){
	int buf[4];
	int j=-1;
	while(i!=0){
		buf[j+1]=i%10;
		i=i/10;
		j++;
	}
	if(j==3){
		if(buf[3]-buf[2]==buf[2]-buf[1]&&buf[2]-buf[1]==buf[1]-buf[0])
			count++;
	}
	else if(j==2){
		if(buf[2]-buf[1]==buf[1]-buf[0])
			count++;
	}
	else
		count++;
}
int main(){
	int N;
	cin >> N;
	for(int i=1;i<=N;i++){
		sequence(i);
	}
	cout << count;
}
