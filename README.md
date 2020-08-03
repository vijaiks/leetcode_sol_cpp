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


------------------------------------/



6. loggerRateLimiter

/------------------------------------


Design a logger system that receive stream of messages along with its timestamps, 
each message should be printed if and only if it is not printed in the last 10 seconds.
Given a message and a timestamp (in seconds granularity), return true if the message should be
printed in the given timestamp, otherwise returns false.
It is possible that several messages arrive roughly at the same time.



------------------------------------/

7. detectCapital

/------------------------------------

Given a word, you need to judge whether the usage of capitals in it is right or not.
We define the usage of capitals in a word to be right when one of the following cases holds:
	All letters in this word are capitals, like "USA".
	All letters in this word are not capitals, like "leetcode".
	Only the first letter in this word is capital, like "Google".
	Otherwise, we define that this word doesn't use capitals in a right way.


------------------------------------/



------------------------------------/


8. designHashSet

/------------------------------------
Design a HashSet without using any built-in hash table libraries.
To be specific, your design should include these functions:
add(value): Insert a value into the HashSet. 
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.

Example:
MyHashSet hashSet = new MyHashSet();
hashSet.add(1);         
hashSet.add(2);         
hashSet.contains(1);    // returns true
hashSet.contains(3);    // returns false (not found)
hashSet.add(2);          
hashSet.contains(2);    // returns true
hashSet.remove(2);          
hashSet.contains(2);    // returns false (already removed)



------------------------------------/


9. canConvertString

/------------------------------------


Given two strings str1 and str2 of the same length, determine whether you can transform str1 into str2 by doing zero or more conversions.
In one conversion you can convert all occurrences of one character in str1 to any other lowercase English character.
Return true if and only if you can transform str1 into str2.

Example 1:
Input: str1 = "aabcc", str2 = "ccdee"
Output: true
Explanation: Convert 'c' to 'e' then 'b' to 'd' then 'a' to 'c'. Note that the order of conversions matter.

Example 2:
Input: str1 = "leetcode", str2 = "codeleet"
Output: false
Explanation: There is no way to transform str1 to str2.

------------------------------------/




