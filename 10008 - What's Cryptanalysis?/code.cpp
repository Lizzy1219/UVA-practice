/*********************************
 * 10008 - What's Cryptanalysis? *
*********************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<char,int> a, pair<char,int> b){
    if(a.second == b.second) return a.first < b.first; // 若字母序較前應排在前面
    return a.second > b.second; // 若次數較多應排在前面
}

int main(){
    int n,cha[26]={0};
    string s;
    cin>>n>>ws;

    while(n--){
        getline(cin,s);
        for(auto i:s){
            if(isalpha(i)){
                i=toupper(i); // 確保轉成大寫再計數
                cha[i-'A']++;
            }
        }
    }

    vector<pair<char,int>> ans;
    for(int i=0;i<25;i++){
        if(cha[i]) ans.push_back({char(i+'A'),cha[i]});
    }

    sort(ans.begin(),ans.end(),comp);

    for(auto i:ans) cout<<i.first<<" "<<i.second<<endl;
    
    return 0;
}