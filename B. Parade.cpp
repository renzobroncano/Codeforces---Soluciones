#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		 int VR[n+1],VL[n+1];
		 int maxk =0;
		 int L,R;
		 for(int i=1;i<=n;i++){
		 	 cin>>VL[i]>>VR[i];
			 L+=VL[i];R+=VR[i];
		 }
		 maxk+=abs(L-R);
		 int pos = -1;
		 for(int i=1;i<=n;i++){
		 	int k = abs((L-VL[i]+VR[i])-(R-VR[i]+VL[i]));
		 	if(k>maxk) maxk=k,pos=i;
		 }
		 if(pos==-1)cout<<"0"<<endl;
		 else cout<<pos<<endl;
		
	}
}
