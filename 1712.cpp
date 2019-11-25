#include <iostream>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;
	int x;
	if(B>=C)
		x=-1;
	else
		x=A/(C-B)+1;
	cout << x;
}
