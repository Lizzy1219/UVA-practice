## 118 - Mutant Flatworld Explorers
#### Question Meaning:
input的第一排是機器人行走的範圍，接下來直到EOF，都能輸入機器人的起始位置、起始方向以及移動或轉動的步驟。我們需要輸出最終機器人到達的位置以及最後朝向哪個方位，若超出行走範圍，會輸出LOST，而前面的座標為消失前的座標與朝向的方位。
#### Notice:
1. 要注意若機器人已在某個座標消失過，那個座標會紀錄，而下次機器人不會再在那個座標執行會超出範圍的動作。
2. 紀錄的是消失前的座標！
3. R和L只有轉向，沒有轉向加移動。
4. 除了超出原本的size，也要注意若小於0也是超過範圍。
5. 這裡我使用`set`，若要同時判斷兩個元素是否同時出現過，可以用`set<pair<int,int>>`，若需插入則是`setName.insert({x,y});`。
#### Note:
- motion：動作。
- boundary：界線。
- comprise：構成。
- dimension：空間、尺寸。
- grid：網格。
- prohibit：禁止、阻止。