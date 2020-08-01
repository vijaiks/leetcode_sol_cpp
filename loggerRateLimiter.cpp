/*
Design a logger system that receive stream of messages along with its timestamps, each message should be printed 
if and only if it is not printed in the last 10 seconds.
Given a message and a timestamp (in seconds granularity), return true if the message should be printed in the given timestamp, otherwise returns false.
*/

#include<iostream>
#include<unordered_map>

using namespace std;

class Logger
{
    
    unordered_map<string, int> hashMap;
    
public:
    /** Initialize your data structure here. */
    Logger()
	{
        
    }
    
	/** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */

    bool shouldPrintMessage(int timestamp, string message)
	{
        if(hashMap.find(message) == hashMap.end())
        {
            hashMap[message] = timestamp;
            cout<< message <<endl;
            return true;
            
        } else if (abs(hashMap[message] - timestamp) >= 10)
        {
            hashMap[message] = timestamp;
            cout<< message <<endl;
            return true;
        }
        return false;         
            
    }
};



/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */

int main()
{
	Logger* logger  = new Logger();
	
	// logging string "foo" at timestamp 1
	cout <<logger->shouldPrintMessage(1, "foo") <<endl; //returns true; 

	// logging string "bar" at timestamp 2
	cout <<logger->shouldPrintMessage(2,"bar") <<endl; //returns true;

	// logging string "foo" at timestamp 3
	cout <<logger->shouldPrintMessage(3,"foo") <<endl; // returns false;

	// logging string "bar" at timestamp 8
	cout <<logger->shouldPrintMessage(8,"bar") <<endl; //returns false;

	// logging string "foo" at timestamp 10
	cout<<logger->shouldPrintMessage(10,"foo") <<endl; //returns false;

	// logging string "foo" at timestamp 11
	cout <<logger->shouldPrintMessage(11,"foo") <<endl; //returns true;

	return 0;

}
