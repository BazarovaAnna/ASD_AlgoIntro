#include <iostream>
#include <cmath>
int ans=200000;
using namespace std;

void f(int mas[], int left, int right, int depth, int size){
	if(depth==size){
		ans=min(ans,abs(left-right));
	}else{
		f(mas,left+mas[depth],right,depth+1,size);
		f(mas, left, right+mas[depth],depth+1,size);
	}
}
int main() 
{ 
	int n;
    cin >> n;
    int mas [n];
    for (int i  = 0; i<n; i++){
        cin>>mas[i];
    }
    f(mas,0,0,0, n);
    cout<< ans<<endl;
    return 0; 
}
