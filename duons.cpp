#include <iostream>
#include <cstdlib> // для system
using namespace std;

int main() 
{ 
	int a,b,c,d,e,f,g,h;
	std::cin >> a >> b >> c >> d >> e >> f >> g >> h;

	if((a+h+f+c)!=(b+g+e+d)){
		cout << "IMPOSSIBLE" <<endl;
	} else {
		for(int i=0; i<100;i++){
		if( a>0 && b>0){
			cout << "AB-" <<endl;
            a--;
            b--;
		}
        if( a>0 && d>0){
			cout << "AD-" <<endl;
            a--;
            d--;
		}
        if( a>0 && e>0){
			cout << "AE-" <<endl;
            a--;
            e--;
		}
        if( a>0 && g>0){
			cout << "FB+" <<endl;
			cout << "FG-" <<endl;
			cout << "AB-" <<endl;
            a--;
            g--;
		}

        if( h>0 && e>0){
            cout << "HE-" <<endl;
            h--;
            e--;
		}
        if ( h>0 && d>0){
            cout << "HD-" <<endl;
            h--;
            d--;
		}
        if ( h>0 && g>0){
            cout << "HG-" <<endl;
            h--;
            g--;
		}
        if ( h>0 && b>0){
            cout << "FG+" <<endl;
            cout << "HG-" <<endl;
            cout << "FB-" <<endl;
            h--;
            b--;
		}

        if ( f>0 && b>0){
            cout << "FB-" <<endl;
            f--;
            b--;
		}
        if ( f>0 && g>0){
            cout << "FG-" <<endl;
            f--;
            g--;
		}
        if ( f>0 && e>0){
            cout << "FE-" <<endl;
            f--;
            e--;
		}
        if ( f>0 && d>0){
            cout << "HG+" <<endl;
            cout << "HD-" <<endl;
            cout << "FG-" <<endl;
            f--;
            d--;
		}

        if ( c>0 && b>0){
            cout << "CB-" <<endl;
            c--;
            b--;
		}
        if ( c>0 && d>0){
            cout << "CD-" <<endl;
            c--;
            d--;
		}
        if ( c>0 && g>0){
            cout << "CG-" <<endl;
            c--;
            g--;
		}
        if ( c>0 && e>0){
            cout << "HG+" <<endl;
            cout << "EH-" <<endl;
            cout << "CG-" <<endl;
            c--;
            e--;
        }}
	}
    return 0; 
}
