#include <iostream>
using namespace std;

int main(){
	 int N,M,big=0;
	 cin >> N >> M;
	 int *number = new int[N];
	 int sum;
	 for(int i=0;i<N;i++){
	 	cin >> number[i];
	 }
	 for(int i=0;i<N-2;i++){
	 	for(int j=i+1;j<N-1;j++){
	 		for(int k=j+1;k<N;k++){
	 			sum=0;
	 			sum=number[i]+number[j]+number[k];
	 			if(sum<=M&&big<sum)
	 				big = sum;
			}
		 }
	 }
	 cout << big;
}
