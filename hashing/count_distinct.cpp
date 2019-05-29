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
	    
	    int arr[N];
	    
	    for(int i=0; i<N; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    unordered_map<int,int> um(N);
	    
	    for(int i=0; i<N;i++)
	    {
	       um[arr[i]]++;
	        
	    }
	  
	    for(auto &it:um)
	        cout<<it.first;
	}
	return 0;
}