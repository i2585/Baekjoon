#include <iostream>
#include <cstring>
using namespace std;

int main(){
		int case_number;
		cin >> case_number;
		char array[80];
		int *sum=new int[case_number];
		for(int i=0;i<case_number;i++){
			int count=0;
			int s=0;
			cin >> array;
			for(int j=0;j<strlen(array);j++){
				if(array[j]=='O'){
					count++;
					s+=count;
					sum[i]=s;
				}
				else
					count=0;
			}
		}
		for(int i=0;i<case_number;i++){
			cout << sum[i] << endl;
		}
}
