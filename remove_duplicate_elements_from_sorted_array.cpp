#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		int remove_duplicate(int a[],int n)
		{
		    int cnt = 1, temp = a[0];
		    for(int i = 1; i < n; i++)
		    {
		        if(temp != a[i])
		        {
		            a[cnt] = a[i];
		            temp = a[cnt];
		            cnt++;
		        }
		    }
		    return cnt;
		}
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
