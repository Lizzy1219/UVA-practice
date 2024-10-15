#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double x1,y1,x2,y2,x3,y3,x4,y4,x,y,ansX,ansY;
    
    while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)){
        if(x1==x3&&y1==y3||x1==x4&&y1==y4){
            x=x1;
            y=y1;
        }
        else if(x2==x3&&y2==y3||x2==x4&&y2==y4){
            x=x2;
            y=y2;
        }
        
        ansX=x1+x2+x3+x4-3*x;
        ansY=y1+y2+y3+y4-3*y;
        printf("%.3lf %.3lf\n",ansX,ansY);
    }
    
    return 0;
}