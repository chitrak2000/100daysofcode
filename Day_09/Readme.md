
π πππ 9 #100daysofcodechallenge

Question: Complement of Base 10 Integer
Link:
https://lnkd.in/eZ6eFTJQ

π ππ©π©π«π¨πππ‘:
π First addressed the notable edge case of input as 0 whose complement would be 1.
π Now for finding the complement of the number the logic was to make a mask variable such that when I perform the "and" operation
with the "~" value of n the result should be the complement of the input number.
πSo, to find the mask I realized,I only needed consecutive 1's to make the mask work here.
πSo, I made a mask variable and started left shifting it and "OR" and set the last bit as 1's.
πTo determine the number of 1's I needed I also started right-shifting the input value till it became 0. The while loop handled the same.
πThe job was 90% done here now the simple operation of (~n) & mask provided the desired answer.
