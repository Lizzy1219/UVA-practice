#include<iostream>
#include<string>
#include<set>

using namespace std;

int now[2];
set <pair<int,int>> lostFlag;

char movTo(char mov,char ori){
    if(ori=='N'){
        if(mov=='F'){
            now[1]++;
            return 'N';
        }
        if(mov=='R') return 'E';
        if(mov=='L') return 'W';
    }
    if(ori=='S'){
        if(mov=='F'){
            now[1]--;
            return 'S';
        }
        if(mov=='R') return 'W';
        if(mov=='L') return 'E';
    }
    if(ori=='E'){
        if(mov=='F'){
            now[0]++;
            return 'E';
        }
        if(mov=='R') return 'S';
        if(mov=='L') return 'N';
    }
    if(ori=='W'){
        if(mov=='F'){
            now[0]--;
            return 'W';
        }
        if(mov=='R') return 'N';
        if(mov=='L') return 'S';
    }

    return ori;
}

int main(){
    int sizeX,sizeY,tempX,tempY;
    bool lost=false;
    char dir,tempD;
    string s;

    cin>>sizeX>>sizeY;
    while(cin>>now[0]>>now[1]>>dir){
        cin>>s;
        for(int i=0;i<s.size();i++){
            tempX=now[0];
            tempY=now[1];
            tempD=dir;

            if(lostFlag.count({now[0],now[1]})!=0 && s[i]=='F'){
                if((dir=='N'&&now[1]+1>sizeY)||(dir=='S'&&now[1]-1<0)||(dir=='E'&&now[0]+1>sizeX)||(dir=='W'&&now[0]-1<0)){
                    continue;
                }
                else{
                    dir=movTo(s[i],dir);
                }
            }
            else{
                dir=movTo(s[i],dir);
            }

            if(now[0] > sizeX || now[1] > sizeY || now[0] < 0 || now[1] < 0){
                lostFlag.insert({tempX, tempY});
                lost=true;
                break;
            }
        }

        if(lost){
            printf("%d %d %c LOST\n",tempX,tempY,tempD);
        }
        else{
            printf("%d %d %c\n",now[0],now[1],dir);
        }

        lost=false;
    }

    return 0;
}