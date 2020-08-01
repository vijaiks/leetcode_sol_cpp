
/*------------------------------------
Given a word, you need to judge whether the usage of capitals in it is right or not.
We define the usage of capitals in a word to be right when one of the following cases holds:
	All letters in this word are capitals, like "USA".
	All letters in this word are not capitals, like "leetcode".
	Only the first letter in this word is capital, like "Google".
	Otherwise, we define that this word doesn't use capitals in a right way.
------------------------------------*/
#include<iostream>

using namespace std;

bool detectCapitalUse(string word)
{
	if(word.length() < 2)
		return true;

    if(isupper(word[0]) and isupper(word[1]))
    {
		for(int i = 2; i < word.length(); i++)
		{
			if(islower(word[i])) return false;
		}
    }else
	{
		for(int i = 1; i < word.length(); i++)
		{
			if(isupper(word[i])) return false;

		}
    }    
	return true;
        
}


int main()
{
	
	string w1 = "Flag"; //True
	string w2 = "FlaG"; //False
	string w3 = "USA";  //True
	string w4 = "Google"; //True
	string w5 = "mL"; //False
	string w6 = "googlE"; //False

	cout << "Flag(0/1):" <<detectCapitalUse(w1) <<endl;
	cout << "FlaG(0/1):" <<detectCapitalUse(w2) <<endl;
	cout << "USA(0/1):" <<detectCapitalUse(w3) <<endl;
	cout << "Google(0/1):" <<detectCapitalUse(w4) <<endl;
	cout << "mL(0/1):" <<detectCapitalUse(w5) <<endl;
	cout << "googlE(0/1):" <<detectCapitalUse(w6) <<endl;
	
	return 0;

}
