#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*threeSum function: takes array of integer as input and return set of triplets as output*/
vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        if(size < 3)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < size -2; i++){
            if(i == 0 || nums[i] != nums[i-1]){
                /*solve two sum problem of given sorted array*/
                int j = i+1, k = size-1;
                while(j < k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum == 0){
                        result.push_back({nums[i], nums[j], nums[k]});
                        while(j < k && nums[j] == nums[j+1]) j++;
                        while(j < k && nums[k] == nums[k-1]) k--;
                        j++;
                        k--;
                        
                    }else if(sum >0) k--;
                    else  j++;
                       
                }
            }
        }
      return result;  
} //threeSum

int main () {
	vector<int>data =  {-1,0,1,2,-1,-4};
	vector<vector<int>> vec = threeSum(data);
	//Displaying the 2D vector 
    	for (int i = 0; i < vec.size(); i++) { 
        	for (int j = 0; j < vec[i].size(); j++) 
            		cout << vec[i][j] << " "; 
        		cout << endl; 
		}
	return 0;

}
