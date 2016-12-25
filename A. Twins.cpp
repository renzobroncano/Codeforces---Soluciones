#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int>v(n);
        int ac =0;
        for(int i=0;i<n;i++){
            cin>>v[i];ac+=v[i];
        }
        int m = (ac/2);
        sort(v.begin(),v.end());
        vector<int> vc;
        for(int i=0;i<v.size();i++){
           //cout<<"Inicio"<<endl;
           vector<int> aux;
           int j=i;
           int bf =0;
           while(j<v.size()){
                bf =bf+v[j];
                //cout<<"bf :"<<bf<<endl;
                aux.push_back(bf);
                j++;
           }            
           //cout<<"fin"<<endl;
           for(int k=0;k<aux.size();k++){
                   if(aux[k]>m) vc.push_back((k+1));
           }   
        }
        sort(vc.begin(),vc.end());
        cout<<vc[0]<<endl;
        
    }
}
