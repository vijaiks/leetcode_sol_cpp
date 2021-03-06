/*
 * Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.
Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.
The order of output does not matter 
Input:
s: "cbaebabacd" p: "abc" Output: [0, 6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
*/

#include<stdio.h>
#include<string.h>
#include<vector>
#include <iostream>

using namespace std;

vector<int> findAnagrams(string s, string p)
{
    //anagram window size
    int window = p.size();        
    int string_length = s.size();
    vector <int> result;
    
    //hash to store p char frequency
    vector<int> p_hash(26, 0);
    
    //hash to store char freq of first window of S 
    vector <int> s_hash_window (26, 0);
    int index = 0;
    int start = 0;
    
    if (window > string_length)
	{
        return result;
    }
    
    //Initialize the p_hash and s_hash_window
    while (index < p.size())
    {
        p_hash[p[index] -'a'] += 1;
        s_hash_window[s[index] - 'a'] += 1;
        index ++;
    } 
    index -= 1;
    
    //Sliding window for each window check if it is anagram or not
    while (index < string_length)
    {
        //if anagram, store start address in result
        if (p_hash == s_hash_window)
            result.push_back(start);
        
        //add next char in s_hash_window and remove from back of window
        index += 1;
        if (index != string_length)
        {
            s_hash_window[s[index] -'a'] += 1;
        }
        //remove from back of window
        s_hash_window[s[start]- 'a'] -= 1;
        start += 1;                
            
    }//while
return result;
        
} //findAnagrams()


//driver function
int main ()
{
	string s1 = "cbaebabacd";
	string	s2 = "abc";  //0, 6
	vector<int> result;

	result = findAnagrams (s1, s2);
	for (auto i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	s1= "abab";
	s2 = "ab"; // 0, 1, 2

	result = findAnagrams (s1, s2);
	for (auto i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;

}
