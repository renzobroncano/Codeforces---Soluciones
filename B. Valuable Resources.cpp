#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long distancia(long long x1,long long x2){
	if(x1>=0 && x2>=0) return abs(x2)-abs(x1);
	if(x1<0 && x2<0) return abs(x2-x1); 
	if(x1<0 && x2>=0) return abs(x1)+abs(x2);
}

int main(){
	int n;
	while(cin>>n){
		long long x,y;
		long long minX=1000000005,maxX=-1000000005,minY=1000000005,maxY=-1000000005;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			if(x<minX)minX = x;
			if(x>maxX)maxX = x;
			if(y<minY)minY = y;
			if(y>maxY)maxY = y;
		}
		long long dx = distancia(minX,maxX);
		long long dy = distancia(minY,maxY);
		cout<<max(dx,dy)*max(dx,dy)<<endl;
	}
}
