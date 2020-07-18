# leetcode_sol_cpp
leetcode solution in c++
1. checkInclusionOfPermutationOfStr

/------------------------------------

Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.
Input: s1 = "ab" s2 = "eidbaooo"
Output: True

------------------------------------/

2. findAnagrams

/------------------------------------

Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.
Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.
The order of output does not matter 
Input:
s: "cbaebabacd" p: "abc"
Output: [0, 6]  
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".


------------------------------------/

3. groupAnagrams

/------------------------------------

Given an array of strings, group anagrams together.
Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],

Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

------------------------------------/

------------------------------------/

4. stockSpanner

/------------------------------------

Write a class StockSpanner which collects daily price quotes for some stock, and returns the span of that stock's price for the current day.

The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backwards) for which the price of the stock was less than or equal to today's price.

For example, if the price of a stock over the next 7 days were [100, 80, 60, 70, 60, 75, 85], then the stock spans would be [1, 1, 1, 2, 1, 4, 6].


------------------------------------/

5. threeSum

/------------------------------------
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero. 
Note: The solution set must not contain duplicate triplets.
Example: 
Given array nums = [-1, 0, 1, 2, -1, -4], 
A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]


------------------------------------/

5. topKFrequentElements

/------------------------------------
Given a non-empty array of integers, return the k most frequent elements.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]



------------------------------------/

