/*
 * Write a class StockSpanner which collects daily price quotes for some stock, and returns the span of that stock's price for the current day.

The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backwards) for which the price of the stock was less than or equal to today's price.

For example, if the price of a stock over the next 7 days were [100, 80, 60, 70, 60, 75, 85], then the stock spans would be [1, 1, 1, 2, 1, 4, 6].
 * */

#include<stdio.h>
#include<string.h>
#include<vector>
#include<stack>
#include <iostream>

using namespace std;

class StockSpanner 
{
    //stack data structure to hold prices in decreasing order
    stack<pair<int, int>> stack_ds;
    //index to traverse current day prices
    int index;
    
public:
    StockSpanner()
    {
        index = -1;        
    }
    
    int next(int price)
    {
        index +=1;
        
		//check if stack not empty and top price is not less thet that current price
        //if so pop those prices
        while(!stack_ds.empty() && stack_ds.top().second <= price)
        {
            stack_ds.pop();
        }
        
		//if stack is empty, means no greater prices are available
        //push on stack and return index +1 as stock span
        if(stack_ds.empty())
        {
            stack_ds.push({index, price});
                return index  + 1;
        }
        
        //if top price is less than current price, get the index of top price
        //push current price and return current_index - top_index >>> as stock spanner 
        int prev_index = stack_ds.top().first;
        stack_ds.push({index, price});
        return index - prev_index;
             
    }
};

//driver function
int main ()
{
	StockSpanner* S = new StockSpanner();
	//if the price of a stock over the next 7 days were [100, 80, 60, 70, 60, 75, 85],
	//then the stock spans would be [1, 1, 1, 2, 1, 4, 6].
	cout<<S->next(100)<<endl;
	cout<<S->next(80)<<endl ;
	cout<<S->next(60)<<endl ;
	cout<<S->next(70)<<endl ;
	cout<<S->next(60)<<endl ;
	cout<<S->next(75)<<endl ;
	cout<<S->next(85)<<endl;
}
