#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int a,b,c,d,L;
    int sum;
    
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&L)&&(a!=0||b!=0||c!=0||d!=0||L!=0)){
        sum=0;
        
        for(int i=0;i<=L;i++){
            if((a*i*i+b*i+c)%d==0){
                sum++;
            }
        }
        
        printf("%d\n",sum);
    }
    
    return 0;
}