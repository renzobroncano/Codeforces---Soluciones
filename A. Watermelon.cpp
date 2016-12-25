 #include<iostream>
using namespace std;
int main(){
    int w;
    while(cin>>w){
        cout<<((w&1 || w==2)?"NO":"YES")<<endl;
    }   
}
