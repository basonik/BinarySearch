# BinarySearch

# 1. Binary Search

## Condition:

You are given an array of **distinct** integers `nums`, sorted in ascending order, and an integer `target`.

Implement a function to search for `target` within `nums`. If it exists, then return its index, otherwise, return `-1`.

Your solution must run in O(logn)O(logn) time.

**Example 1:**

```java
Input: nums = [-1,0,2,4,6,8], target = 4

Output: 3
```

**Example 2:**

```java
Input: nums = [-1,0,2,4,6,8], target = 3

Output: -1
```


## Intuition & Explanation:

This problem is basic for understanding binary search. We just keep splitting the string in half until we come across the desired element.

## Listing of my code:

```c++
class Solution {

public:

    int search(vector<int>& nums, int target) {

        int low = 0;

        int high = nums.size() - 1;

  

        while(low<= high){

            int mid = (low+high)/2;

            int guess = nums[mid];

            if(guess == target){

                return mid;

            }

            else if(guess>target){

                high = mid-1;

            }

            else{

                low = mid+1;

            }

        }

        return -1;

    }

};
```


# 2. Search a 2D Matrix

## Condition:

You are given an `m x n` 2-D integer array `matrix` and an integer `target`.

- Each row in `matrix` is sorted in _non-decreasing_ order.
- The first integer of every row is greater than the last integer of the previous row.

Return `true` if `target` exists within `matrix` or `false` otherwise.

Can you write a solution that runs in `O(log(m * n))` time?

**Example 1:**

```java
Input: matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]], target = 10

Output: true
```

**Example 2:**

```java
Input: matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]], target = 15

Output: false
```


## Intuition & Explanation:

The difference from the previous task is that you need to be able to work with two-dimensional arrays. The number of rows corresponds to the number of vectors in the matrix, and the number of columns corresponds to the number of elements in each vector, since it's a matrix, the number of elements is equal in each row. The principle of searching for the number is the same as in the previous task.

## Listing of my code:

```c++
class Solution {

public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty()){

            return false;

        }

        int rows = matrix.size();

        int cols = matrix[0].size();

        int row = 0;

        int col = cols-1;

  

        while( row < rows && col>=0 ){

            if(matrix[row][col] == target){

                return true;

            }

            else if(matrix[row][col]>target){

                col-=1;

            }

            else{

                row+=1;

            }

        }

        return false;

    }

};
```
