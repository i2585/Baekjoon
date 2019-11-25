#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
	int N,sum=0;
	char *n = new char;
	cin >> N;
	char *number = new char[N];
	cin >> number;
	for(int i=0;i<N;i++){
		*n=number[i];
		sum+=atoi(n);
	}
	cout << sum;
}
