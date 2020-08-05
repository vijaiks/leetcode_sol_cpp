/*
 * Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, 
 * one of the first string's permutations is the substring of the second string.
 */

#include<stdio.h>
#include<string.h>
#include<vector>
#include <iostream>
using namespace std;

bool checkInclusion(string s1, string s2)
{
        
        int window_s1 = s1.size();        
        
        //Hash for both string to store frequency of char
        vector<int> s1Hash(26, 0);
        vector<int> s2Hash(26, 0);       
                
        //Boundry condition
        if (s1.size() > s2.size())
            return false;
        
        //initilize s1Hash and s2Hash with window size of s1
        int index = 0;
        int start = 0;
        while(index < window_s1)
        {
            s1Hash[s1[index] -'a'] += 1;
            s2Hash[s2[index] -'a'] += 1;
            index ++;
        }
        
        //Sliding window technique
        while (index <= s2.size())
        {
            if (s1Hash == s2Hash)
            {
                return true;
            }
            //move sliding window forward
            if (index != s2.size())
            {
                s2Hash[s2[index] -'a'] += 1;
            }                
            s2Hash[s2[start] -'a'] -= 1;
            start++;            
            index++;
               
        }//while      
      return false;
        
}

//driver function
int main ()
{
	string s1 = "ab";
  string	s2 = "eidbaooo";
	cout<<checkInclusion (s1, s2)<<endl;
	s1= "ab";
  s2 = "eidboaoo";
	cout<<checkInclusion (s1, s2)<<endl;

}
