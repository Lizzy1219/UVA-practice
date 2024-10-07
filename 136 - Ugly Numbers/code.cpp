#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int nextUgly,ugly[1500]={0};
    int ugly2=0,ugly3=0,ugly5=0;//標記，因為後面的Ugly Number一定是前面乘上2、3或5
    int next2=2,next3=3,next5=5;
    ugly[0]=1;
    
    for(int i=1;i<1500;i++){
        nextUgly=min({next2,next3,next5});//比較目前找出的三個Ugly Number哪個最小

        ugly[i]=nextUgly;//將找到的最小Ugly Number置入ugly陣列
        if(nextUgly==next2){
            ugly2++;//要賦值給next2下一個可能的Ugly Number，因此要最新的數乘上2
            next2=ugly[ugly2]*2;
        }
        if(nextUgly==next3){
            ugly3++;
            next3=ugly[ugly3]*3;
        }
        if(nextUgly==next5){
            ugly5++;
            next5=ugly[ugly5]*5;
        }
    }

    printf("The 1500'th ugly number is %d.\n",ugly[1499]);
    return 0;
}