# Remove_element
Given an array and a value, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

#C++
The way is put two flag i and j.i is the new array's flag,j is next of i.If i==val,we change i and j.If j==val,j++ until j!=val.
There are more details in the algorithm.

1.If j is bigger than the size of the array,we test i+1 equals val or not,if they are equal,we change i+1 and the back of the array.
2.If j has been While because of j==val many times,and i is not equals to val,i++.Unless the j will j++ again then we skip a value
is not equals to val.

And I spend 2 hours solving this problem.I am sad.And my way is too stupid.
