#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
	//test case
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    
	    cin>>N;
	    
	    int arr[N];
	    
	    for(int i=0; i<N; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    unordered_map<int ,int> um;
	    
	    for(auto &it:arr)
	    {
	        um[it]++;
	    }
	    
	   for(auto &it:arr)
	    {
	        if(um[it] == 1)
	        {
	            cout<<it<<" ";
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}