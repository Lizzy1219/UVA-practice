#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    int cas,n,temp,center,sum;
    vector<int> num;
    
    scanf("%d",&cas);
    while(cas--){
        sum=0;
        
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            num.push_back(temp);
        }
        sort(num.begin(),num.end()); //讓元素由小到大排列
        
        if(num.size()%2==0) center = (num[n/2-1]+num[n/2])/2;
        else center = num[n/2];
        
        for(int i=0;i<n;i++) sum+=abs(num[i]-center);
        printf("%d\n",sum);
        
        num.clear();
    }
    
    return 0;
}