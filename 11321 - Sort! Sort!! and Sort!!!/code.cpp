#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int mod;

bool mySort(int x,int y){
    if(x%mod!=y%mod) return x%mod<y%mod; //數字小在前
    if(abs(x%2)!=abs(y%2)) return abs(x%2); //奇數在前
    if(abs(x%2)) return x>y; //奇數數字大在前
    return x<y; //偶數數字小在前
}

int main(){
    int n,temp;
    vector<int> num;
    
    while(scanf("%d%d",&n,&mod)){
        printf("%d %d\n",n,mod);
        if(n==0&&mod==0) break;
        
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            num.push_back(temp);
        }
        sort(num.begin(),num.end(),mySort);
        for(int i=0;i<n;i++) printf("%d\n",num[i]);
        
        num.clear();
    }
    
    return 0;
}