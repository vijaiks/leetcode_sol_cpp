/*
 * Given an array of strings, group anagrams together.
Example:
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
 */

#include<stdio.h>
#include<string.h>
#include<vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
        vector<vector<string>> result;
        unordered_map <string, vector<string>> hash_set;
        for (auto i = 0; i <strs.size(); i++)
        {           
            string key = strs[i];
            sort(key.begin(), key.end());
            hash_set[key].push_back(strs[i]);          
        }
        
        for (auto item: hash_set)
        {
            result.push_back(item.second);           
        }        
        return result;
        
}//groupAnagrams()


//driver function
int main ()
{
        vector<string> str;
        str.push_back("eat");
        str.push_back("tea");
        str.push_back("tan");
        str.push_back("ate");
        str.push_back("nat");
        str.push_back("bat");
	vector<vector<string>> result;

	result = groupAnagrams (str);
	// Displaying vector<vector<string>> 
 for (int i = 0; i < result.size(); i++)
 { 
     for (auto it = result[i].begin();   it != result[i].end(); it++)
	   {
		    	cout << *it << " ";
		}
  cout <<endl<<"--------"<< endl; 
 } 
} //main()
