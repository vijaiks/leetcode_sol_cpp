/*
Given two strings str1 and str2 of the same length, determine whether you can transform str1 into str2 by doing zero or more conversions.
In one conversion you can convert all occurrences of one character in str1 to any other lowercase English character.
Return true if and only if you can transform str1 into str2.
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<set>

using namespace std;


bool canConvert(string str1, string str2)
{
    //if both string are same
    if(str1 == str2) return true;
    
    //map to store char to be converted
    unordered_map<char, char> charMap;
    for(int i = 0; i< str1.length(); i++)
    {
        if(charMap.count(str1[i]) and charMap[str1[i]] != str2[i])
        {
            return false;
        }
        
        charMap[str1[i]] = str2[i];            
    }        
    //create unique number set of values and return if size < 26
    set<char> charSet;
    charSet = set(str2.begin(), str2.end()); //c++17 set 
    return charSet.size() < 26; 

}
int main()
{
	string str1 = "aabcc", str2 = "ccdee";
	cout << canConvert(str1, str2) <<endl;
	str1 = "leetcode", str2 = "codeleet";
	cout << canConvert(str1, str2) <<endl;
	return 0;
}
