#include<iostream>
#include <cmath>
using namespace std;
int sgn(int x) {
        if (x > 0) return 1;
        if (x == 0) return 0;
        return -1;
}
int main(){
	int x,y;
	while(cin>>x>>y){
		int x1 = (abs(x)+abs(y))*sgn(x);
		int y2 = (abs(x)+abs(y))*sgn(y);
		if(x1>0){
			cout<<0<<" "<<y2<<" "<<x1<<" "<<0<<endl;
		}else{
			cout<<x1<<" "<<0<<" "<<0<<" "<<y2<<endl;
		}
	}
}
