#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int lef,hei,rig,end=0,temp=-1;
    int sk[10001]={0};

    while(~scanf("%d%d%d",&lef,&hei,&rig)){
        end=max(end,rig);

        for(int i=lef;i<rig;i++){
            sk[i]=max(hei,sk[i]);
        }
    }

    for(int i=1;i<end;i++){
        if(sk[i]!=temp){
            printf("%d %d ",i,sk[i]);
            temp=sk[i];
        }
    }

    printf("%d 0\n",end);

    return 0;
}