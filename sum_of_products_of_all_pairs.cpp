/*
Given an array A[] of integers find sum of product of all pairs of array elements.

Input:
First line consists of T test cases. First line of every test case consists of N, denoting number of elements of array. Second line consists of elements of array.

Output:
Single line output, print the sum of products.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
1
3
1 3 4
Output:
19
*/
#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n = 0, sum = 0;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        
        int mult = 0;
        for(int j = 0; j < n; j++)
        {
            mult += arr[j] * (sum - arr[j]);
        }
        cout << (mult/2) << "\n";
    }
	return 0;
}
