#include <iostream>
#include <cmath>
using namespace std;
int num;
int **matr1;
void wide(int size, int zerox, int zeroy, int startx, int starty){
    if (size==2){
        num++;
        if (zerox==startx && zeroy==starty){
            matr1[startx+1][starty]=num;
            matr1[startx+1][starty+1]=num;
            matr1[startx][starty+1]=num;
		}
        if (zerox==startx+1 && zeroy==starty){
            matr1[startx][starty]=num;
            matr1[startx+1][starty+1]=num;
            matr1[startx][starty+1]=num;
		}
        if (zerox==startx && zeroy==starty+1){
            matr1[startx][starty]=num;
            matr1[startx+1][starty+1]=num;
            matr1[startx+1][starty]=num;
		}
        if (zerox==startx+1 && zeroy==starty+1){
            matr1[startx][starty]=num;
            matr1[startx+1][starty]=num;
            matr1[startx][starty+1]=num;
		}

        return;
    }else{

        
        int leng=size/2;

        if (zerox<startx+leng && zeroy<starty+leng){
            num++;
            matr1[startx+leng][starty+leng-1]=num;
            matr1[startx+leng-1][starty+leng]=num;
            matr1[startx+leng][starty+leng]=num;
            wide(leng,zerox,zeroy, startx, starty);
            wide(leng,startx+leng,starty+leng-1, startx+leng,starty);
            wide(leng,startx+leng-1,starty+leng,startx,starty+leng);
            wide(leng,startx+leng,starty+leng,startx+leng,starty+leng);
        }else{ 
			if( zerox<startx+leng && zeroy>=starty+leng){
				num++;
				matr1[startx+leng][starty+leng-1]=num;
				matr1[startx+leng-1][starty+leng-1]=num;
				matr1[startx+leng][starty+leng]=num;
				wide(leng,zerox,zeroy,startx,starty+leng);
				wide(leng,startx+leng,starty+leng-1,startx+leng,starty);
				wide(leng,startx+leng-1,starty+leng-1, startx,starty);
				wide(leng,startx+leng,starty+leng,startx+leng,starty+leng);
			}else{ 
				if( zerox>=startx+leng && zeroy<starty+leng){
					num++;
					matr1[startx+leng-1][starty+leng-1]=num;
					matr1[startx+leng-1][starty+leng]=num;
					matr1[startx+leng][starty+leng]=num;
					wide(leng,zerox,zeroy, startx+leng,starty);
					wide(leng,startx+leng-1,starty+leng-1, startx,starty);
					wide(leng,startx+leng-1,starty+leng,startx,starty+leng);
					wide(leng,startx+leng,starty+leng,startx+leng,starty+leng);
				}else{ 
					if( zerox>=startx+leng && zeroy>=starty+leng){
						num++;
						matr1[startx+leng][starty+leng-1]=num;
						matr1[startx+leng-1][starty+leng-1]=num;
						matr1[startx+leng-1][starty+leng]=num;
						wide(leng,zerox,zeroy,startx+leng,starty+leng);
						wide(leng,startx+leng,starty+leng-1,startx+leng,starty);
						wide(leng,startx+leng-1,starty+leng-1, startx,starty);
						wide(leng,startx+leng-1,starty+leng,startx,starty+leng);
					}
				}
			}
		}
	}
}
int main() 
{ 
	int n,x,y,size;
    cin >> n;
    std::cin >> x >> y ;
    x=x-1;
    y=y-1;
    size=pow(2,n);
    matr1=new int* [size];
    for(int i=0; i<size;i++){
		matr1[i]= new int[size];
	}
    wide(size,x,y,0,0);
    for(int i=0; i<size;i++){
		for(int j=0; i<size;j++){
			cout<<matr[i][j]<<" ";
		}
		cout<< endl;
	}
    
    return 0; 
}
