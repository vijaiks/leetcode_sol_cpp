
/*------------------------------------
Design a HashSet without using any built-in hash table libraries.
To be specific, your design should include these functions:
add(value): Insert a value into the HashSet. 
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.
------------------------------------*/
#include<iostream>
#include<vector>

using namespace std;

#define MAX_LEN 100
class MyHashSet
{

     vector<int> hash_set[MAX_LEN];   /* Used array to implement Hash Set */
    
    /* Returns the corresponding bucket index. */
    int allocIndex(int key)
    {
        return key % MAX_LEN;
    }   
    

     /* Search the key in a specific bucket. Returns -1 if the key does not existed. */
    int getPos(int key, int index)
    {
        // Each bucket contains a list. Iterate all the elements in the bucket to find the target key.
        for (int i = 0; i < hash_set[index].size(); ++i)
        {
            if (hash_set[index][i] == key)
            {
                return i;
            }
        }
        return -1;
    }
    
    
    public:
      /**Constructor*/
    MyHashSet()
    { 
    }   
        
    void add(int key)
    {
        int index = allocIndex(key);
        int pos = getPos(key, index);
        if (pos < 0)
        {
            // Add new key if key does not exist.
            hash_set[index].push_back(key);
        }
        cout<<"index = "<<index<<" key = "<<key<<" bucket size = "<<hash_set[index].size()<<endl;
    }
    
    
    void remove(int key)
    {
        int index = allocIndex(key);
        int pos = getPos(key, index);
        
        if (pos >= 0)
        {
            // Remove the key if key exists.
            hash_set[index].erase(hash_set[index].begin() + pos);
        }
        cout<<"index = "<<index<<" key = "<<key<<" bucket size = "<<hash_set[index].size()<<endl;
    }
    
    /** Returns true if this set contain the specified key  */
    bool contains(int key) {
        int index = allocIndex(key);
        int pos = getPos(key, index);
        return pos >= 0;
    }
};


int main()
{
	/**
	 * Your MyHashSet object will be instantiated and called as such:
	 */
	  MyHashSet* obj = new MyHashSet();
	  int key= 10;
	  obj->add(key);
	  cout <<obj->contains(key) <<endl;
	  obj->add(key);
	  obj->remove(key);
	  obj->remove(key);
	  obj->add(key);


	
	return 0;

}
