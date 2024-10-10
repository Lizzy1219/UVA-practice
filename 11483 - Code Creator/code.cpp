#include<iostream>
#include<string>

using namespace std;

int main(){
    int cas=1,n;
    string s;
    
    while(cin>>n&&n!=0){
        cin.ignore();
        
        cout<<"Case "<<cas<<":"<<endl;
        cout<<"#include<string.h>"<<endl;
        cout<<"#include<stdio.h>"<<endl;
        cout<<"int main()"<<endl<<"{"<<endl;
        
        for(int i=0;i<n;i++){
            getline(cin,s); //有可能有空格，需使用getline
            cout<<"printf(\"";
            for(auto j:s){
                if(j==34||j==92){ //也可以j=='\"'||j=='\\'
                    cout<<"\\"<<j;
                }
                else{
                    cout<<j;
                }
            }
            cout<<"\\n\");"<<endl;
        }
        
        cout<<"printf(\"\\n\");"<<endl;
        cout<<"return 0;"<<endl<<"}"<<endl;
        
        cas++;
    }
    
    return 0;
}