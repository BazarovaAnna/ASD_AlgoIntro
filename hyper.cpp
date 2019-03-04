#include <iostream>
#include <cstdlib> // для system
using namespace std;


int main() 
{ 
	int n, su, ma, p;
    cin >> n;
    su=0;
    ma=0;
    for (int i=0; i<n; i++){
		cin >> p;
		
		su=su+p;
		if(su>ma){
			ma=su;
		}
		if(su<0){
			su=0;
		}
	}
    cout << ma <<endl;
    return 0; 
}

