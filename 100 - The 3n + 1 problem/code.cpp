#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n1,n2,temp,sum,maxSum;

    while(~scanf("%d%d",&n1,&n2)){
        printf("%d %d ",n1,n2);

        maxSum=0;
        if(n1>n2){
            swap(n1,n2);
        }

        for(int i=n1;i<=n2;i++){
            sum=1;
            temp=i;
            while(temp>1){
                if(temp%2==0){
                    temp/=2;
                }
                else{
                    temp=temp*3+1;
                }
                sum++;
            }
            maxSum=max(maxSum,sum);
        }

        printf("%d\n",maxSum);
    }

    return 0;
}