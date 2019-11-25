#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int T,R;
	cin >> T;
	string Alp;
	string P;
	for(int i=0;i<T;i++){
		cin >> R >> Alp;
		for(int j=0;j<Alp.length();j++){
			for(int k=0;k<R;k++)
				P+=Alp[j];
		}
		cout << P << endl;
		P="";
	}
}

