#include <iostream>

using namespace std;

int main() {
    long long int n1,n2;
    int carry,sum;
    
    while(cin>>n1>>n2&&(n1!=0||n2!=0)){
        carry=0;
        sum=0;
        
        while(n1>0||n2>0){
            if(n1%10+n2%10+carry>9){
                carry=1;
                sum++;
            }
            else carry=0;
            
            n1/=10;
            n2/=10;
        }
        
        if(sum==0) cout<<"No carry operation."<<endl;
        else if(sum==1) cout<<"1 carry operation."<<endl;
        else cout<<sum<<" carry operations."<<endl;
    }
    
    return 0;
}