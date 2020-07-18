#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k)
{
   if ( k == nums.size()) return nums;
   
   //Map to count freq
   unordered_map<int,int> map;
   vector<int> result;
   
   for(int num : nums){
       map[num]++;
   }
   
   // pair<first, second>: first is frequency,  second is number
   priority_queue<pair<int,int>> pq;         
   
   for(auto it = map.begin(); it != map.end(); it++)
   {
       pq.push(make_pair(it->second, it->first));
       /*
       if(pq.size() > (int)map.size() - k)
       {
           result.push_back(pq.top().second);
           pq.pop();
       } */
   }
   for (auto i = 0; i < k; i++)
   {
           result.push_back(pq.top().second);
           pq.pop();
   }
    return result;
 }

int main ()
{
	vector<int> ip = {1,1,1,2,2,3,3,3,3};
	vector<int> res =  topKFrequent(ip, 2);
	for(auto i = 0; i < res.size(); i++)
		cout<<res[i]<<"\t"<<endl;

	return 0;
}
