## 10242 - Fourth Point !!

#### Question Meaning
給平行四邊形四個端點的座標，這四個端點是相鄰兩邊的端點座標，請找出第四點座標為何。（意為假設四角分別為A、B、C、D，會知道其中三個角的座標，其中一個角會重複，但你不確定是哪個）

#### Notice
1. 只能確定八個輸入中的前四個為同一條邊的兩端點，後四個是另一條邊的兩端點。
2. 要用double，用float會WA...
3. 小數點精度為3要注意。
因為平行四邊形的特性為，兩對角的點座標相加/2中心點座標都相同，所以這題可以簡單寫出算式：
> (c+a)/2 = (b+d)/2  
> c+a = b+d  
> c = b+d-a
> c = b+d+2a-3a //*因為不確定哪個點重複，因此直接全部相加會是b+d+2a  

最後我們需要再-3a來得到c點座標，因此必須確認哪點為重複的點。

#### Note
- coordinates：座標。
- adjacent：鄰近的。
- parallelogram：平行四邊形。
- separated：分開。