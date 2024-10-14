## 10056 - What is the Probability ?

#### Question Meaning
一開始先給一個數表示有幾個 case，接下來每個 case 會有三個數，分別是此遊戲的人數、勝率以及我們需要判斷的第某人，我們需要輸出此人在這場遊戲的勝率。

#### Notice
1. 勝率可能為 0 要注意。
2. 小數點精度為 4 。
3. 使用 pow() 要加上標頭檔 cmath。
此題需要使用數學計算勝率。
假設我們的目標人為第二位，總人數為3人，假設勝率為p，則失敗率為q=(1-p)。
<table>
  <tr>
    <td>第一位</td>
    <td>第二位</td>
    <td>第三位</td>
    <td>第一位</td>
    <td>第二位</td>
    <td>第三位</td>
    <td>第一位</td>
    <td>第二位</td>
    <td>第三位</td>
  </tr>
  <tr>
    <td>q</td>
    <td>p</td>
    <td></td>
    <td></td>
    <td></td>
    <td></td>
    <td></td>
    <td></td>
    <td></td>
  </tr>
  <tr>
    <td>q</td>
    <td>p</td>
    <td>q</td>
    <td>q</td>
    <td>p</td>
    <td></td>
    <td></td>
    <td></td>
    <td></td>
  </tr>
  <tr>
    <td>q</td>
    <td>p</td>
    <td>q</td>
    <td>q</td>
    <td>p</td>
    <td>q</td>
    <td>q</td>
    <td>p</td>
    <td>q</td>
  </tr>
</table>

由上表可得一公式：（假設人數為m，目標人為k）
> q^(k-1) * p + q^(k-1+m) * p + q^(k-1+2m) * p ++ q^(k-1+3m) * p......  
> = q^(k-1) * p * (q + q^m + q^(2m) + q^(3m).....)  
> = (q^(k-1) * p) / ( 1 - q^m )  

**無窮等比級數公式：首項 / (1-公比)**

#### Note
- integrated：融合的。
- deterministic：確定性的。
- ordinary：普通的。
- desired：期望的。
- serial：順序。
- invalid：無效的。


