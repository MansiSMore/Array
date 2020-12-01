/*
Pairs and vectors can be used together to achieve some amazing results. Here we will learn to use a vector that holds pairs.
You are given a vector V of size n. The vector hold pair of integers. Example V={(1,2),(3,4)...}. Now, you need to sum the second elements.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains n denoting the size of the array. The second line contains 2*n elements.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided function sum().

Constraints:
1 <= T <= 100
1 <= n <= 107
0 <= Vi <= 107

Examples:
Input:
1
5
1 2 3 4 5 6 7 8 9 10
Output:
30

Explanation:
Testcase1:
v[0]= 1,2
v[1]= 3,4
v[2]= 5,6
v[3]= 7,8
v[4]= 9,10
Now we sum all the second elements of a pair. So 2+4+6+8+10=30

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sum(vector<pair<int,int>>v);


 // } Driver Code Ends


//User function Template for C++

/*the function contains vector of pairs*/
//Complete this function to print the sum
void sum(vector<pair<int,int>>v)
{
    long long sum=0;
    //Your code here
    for(int i = 0; i < v.size(); i++)
    {
        sum += v[i].second;
    }
    cout<<sum;
    cout<<endl;
}

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int>>v; //Making a vector that holds pairs
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        v.push_back(make_pair(x,y)); //Pushing a pair in the vector
	    } 
	    
	   sum(v); //The sum function
	   
	}
	return 0;
}
  // } Driver Code Ends
