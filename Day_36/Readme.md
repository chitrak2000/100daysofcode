𝐱𝐚𝐦𝐬 𝐚𝐫𝐞 𝐇𝐞𝐫𝐞!!
📌𝐐𝐮𝐞𝐬𝐭𝐢𝐨𝐧: 𝐀𝐝𝐝 𝐭𝐨 𝐀𝐫𝐫𝐚𝐲-𝐅𝐨𝐫𝐦 𝐨𝐟 𝐈𝐧𝐭𝐞𝐠𝐞𝐫
Link: https://lnkd.in/d2ni7anc

📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡: Two approaches:  
✅ Initialize an empty vector "ans" to store the final result  
✅Initialize "carry" to 0 and "i" to the index of the last digit of "num"  
✅Loop while there is a digit left in k, or there are digits left in num, or there is a carry value.  
✅Compute the sum by adding the carry, the last digit of k (if k has digits left) and the i-th digit of num (if num has digits left).  
✅Compute the carry by taking the sum divided by 10.  
✅Add the digit to the front of the "ans" vector by taking the sum modulo 10.  
✅Decrement i and divide k by 10 (if applicable).  
✅Reverse the "ans" vector and return it.  
