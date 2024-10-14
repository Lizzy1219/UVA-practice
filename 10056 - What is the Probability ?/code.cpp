#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int cas,allPeo,aimNum;
    float pro,ans;
    
    scanf("%d",&cas);
    while(cas--){
        scanf("%d%f%d",&allPeo,&pro,&aimNum);
        if(pro==0){
            printf("%.4f\n",pro);
            continue;
        }
        ans=(pow((1-pro),aimNum-1)*pro)/(1-pow((1-pro),allPeo));
        printf("%.4f\n",ans);
    }
    
    return 0;
}