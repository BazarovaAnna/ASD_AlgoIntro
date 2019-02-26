#include <iostream>
#include <cstdlib> // для system
using namespace std;


int main() 
{ 
	int t,n,k,m,ost,sum;
    cin >> t;
    for (int i=0; i<t; i++){
		std::cin >> n >> k;
		m = n/k;
		ost = n%k;
		sum = 0;
		for (int j=0; j<ost; j++){
			n =n-(m+1);
			sum= sum+(n*(m+1));
		}
		for (int j=0; j<(k-ost); j++){
			n =n-m;
			sum= sum+(n*m);
		}
		cout << sum <<endl;
	}
    
    return 0; 
}
