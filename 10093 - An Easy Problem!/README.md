## 10093 - An Easy Problem!

#### Question Meaning
輸入一N進制的數，N範圍為2～62，找到最小的 N，且此 N 進制數需被 N-1 整除，若找不到則輸出‘such number is impossible!’。

#### Notice
1. 輸入的數有可能為0，要注意。
2. 可能輸入其他符號，例如+、-。
3. 前面可能有空格，需要用getline。

若輸入一個N進制的數abc可表示成 axN^2 + BxN + c。  
>axN^2 + BxN + c  
>= axNx(N-1+1) + bx(N-1+1) + c  
>= axNx(N-1) + axN + bx(N-1) + b + c  
>= axNx(N-1) + ax(N-1) + a + bx(N-1) + b + c  
>= (axN + a + b)x(N-1) + (a + b + c)  
所以能確定 axN+a+b 一定是N-1的倍數，只需要確認 a+b+c 是不是N-1的倍數就好。  

#### Note
- similarity：相似。
- invalid：無效的。