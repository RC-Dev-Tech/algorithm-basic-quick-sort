# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Basic Quick Sort 基本快速排序
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [示意圖](#示意圖)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
快速排序（Quick Sort）是一種高效的排序算法，它基於分治法(Divide and Conquer)的概念。<br>
該算法的基本思想是選擇一個基準元素（pivot），將數列分為比基準元素小的部分和比基準元素大的部分，<br>
然後對這兩部分進行遞迴排序。最終，所有的子部分排序完成後，整個數列就會有序。<br>
<br>
以下是快速排序的一般步驟：<br>
- 選擇一個基準元素（pivot），可以是數列中的任意一個元素。
- 將數列劃分為兩部分，比基準元素小的放在左邊，比基準元素大的放在右邊。<br>
  這一步稱為分區（partition）。
- 遞迴地對左半部分和右半部分進行快速排序，直到子部分的大小為1或0，即已經有序。
- 將排序後的子部分合併，得到最終排序結果。

<br>

快速排序的平均時間複雜度是O(n log n)，其中n是數列的大小。<br>
在最壞情況下，快速排序的時間複雜度是O(n^2)，當數列已經有序或接近有序時會發生最壞情況。<br>
<br>
快速排序的效率高於氣泡排序和插入排序，尤其在處理大型數列時表現優異。<br>
它通常被廣泛應用於各種排序需求中，包括標準函式庫的排序算法實現。<br>
然而，快速排序是一種原地排序算法，即它不需要額外的存儲空間，但它的遞迴實現可能導致堆疊溢出的問題。<br>
為了解決這個問題，通常會使用尾遞迴優化或迭代實現來改進快速排序的效能和穩定性。<br>
<br>
快速排序也具有不穩定性，即相等元素的相對順序在排序過程中可能被改變。<br>
如果需要保持相等元素的相對順序，則可以考慮使用其他穩定的排序算法。<br>
<br>
最後，儘管快速排序在最壞情況下的時間複雜度較高，<br>
但在平均情況下，它是一種高效的排序算法，並且在實踐中廣泛應用。<br>

---

## 示意圖:
<img src="https://drive.google.com/uc?id=13U92TtpZl_x1GFvh-QNMNjW1sujSNHb5" height="60%" width="60%"/>

> 圖片來源：[iThome鐵人賽(Frank) - 演算法 快速排序法 Quick Sort](https://ithelp.ithome.com.tw/articles/10278644)

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-basic-quick-sort/blob/main/C%2B%2B/main.cpp) - Basic Quick Sort (C++)

---

## 參考資料
* [Wiki - Quick Sort](https://zh.wikipedia.org/wiki/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F) <br>
* [iThome鐵人賽(Frank) - 演算法 快速排序法 Quick Sort](https://ithelp.ithome.com.tw/articles/10278644) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
