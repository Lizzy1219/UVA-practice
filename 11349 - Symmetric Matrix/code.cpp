#include <iostream>
#include <string> //用到string就一定要記得加這個標頭檔！！

using namespace std;

int main() {
    int num,siz,flag,cas;
    bool suc;
    string s;
    
    cin>>cas;
    for(int x=1;x<=cas;x++){
        cin>>s>>s>>siz;
        suc=true;
        flag=1;
        long long int box[siz][siz]={0}; //數值可能會到2^32，因此使用long long int
        
        for(int i=0;i<siz;i++){
            for(int j=0;j<siz;j++){
                cin>>box[i][j];
            }
        }
        
         for(int i=0;i<siz;i++){
            for(int j=0;j<siz;j++){
                if(box[i][j]<0||(box[i][j]!=box[siz-1-i][siz-1-j])){ //確認數值是否為負以及是否有對稱
                    flag=0;
                    suc=false;
                    break;
                }
                if(i>=siz/2&&j>=siz/2){ //若確認到中心點就停止判斷，避免重複判斷對稱的部分
                    flag=0;
                    break;
                }
            }
            if(!flag) break;
        }
        
        cout<<"Test #"<<x<<": ";
        if(suc) cout<<"Symmetric."<<endl;
        else cout<<"Non-symmetric."<<endl;
    }

    return 0;
}