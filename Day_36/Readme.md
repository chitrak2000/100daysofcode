๐ฑ๐๐ฆ๐ฌ ๐๐ซ๐ ๐๐๐ซ๐!!
๐๐๐ฎ๐๐ฌ๐ญ๐ข๐จ๐ง: ๐๐๐ ๐ญ๐จ ๐๐ซ๐ซ๐๐ฒ-๐๐จ๐ซ๐ฆ ๐จ๐ ๐๐ง๐ญ๐๐ ๐๐ซ
Link: https://lnkd.in/d2ni7anc

๐ ๐๐ฉ๐ฉ๐ซ๐จ๐๐๐ก: Two approaches:  
โ Initialize an empty vector "ans" to store the final result  
โInitialize "carry" to 0 and "i" to the index of the last digit of "num"  
โLoop while there is a digit left in k, or there are digits left in num, or there is a carry value.  
โCompute the sum by adding the carry, the last digit of k (if k has digits left) and the i-th digit of num (if num has digits left).  
โCompute the carry by taking the sum divided by 10.  
โAdd the digit to the front of the "ans" vector by taking the sum modulo 10.  
โDecrement i and divide k by 10 (if applicable).  
โReverse the "ans" vector and return it.  
