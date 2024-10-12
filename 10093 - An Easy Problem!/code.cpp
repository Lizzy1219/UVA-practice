#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    int sum,maxNum,temp;
    
    while(getline(cin,s)){
        sum=0;
        maxNum=1; //輸入有可能是0，最小進制就會是2，所以預設maxNum為1
        
        for(int i=0;i<s.size();i++){
            //字元轉換
            if(isdigit(s[i])) temp=s[i]-'0';
            else if(s[i]>='A'&&s[i]<='Z') temp=s[i]-'A'+10;
            else if(s[i]>='a'&&s[i]<='z') temp=s[i]-'a'+36;
            else continue; //有可能有其他符號（例如：+-）
            
            sum+=temp; //係數加總
            maxNum=max(temp,maxNum); //判斷可能的最小進制（還沒+1）
        }
        
        while(maxNum<62){ //最多就是62進制，所以小於62才能輸出
            if(sum%maxNum==0){
                cout<<maxNum+1<<endl;
                break;
            }
            maxNum++;
        }
        
        //沒有小於62就會等於62，代表已超過62進制，需輸出不可能
        if(maxNum==62) cout<<"such number is impossible!"<<endl;
    }
    
    return 0;
}
