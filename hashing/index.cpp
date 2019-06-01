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
	    
	    unordered_map<int,int> um;
	  for(int i=0; i<N;i++)
	  {
	      um[arr[i]]++;
	  }
	  bool flag=0;
	    
	  for(int i=0; i<N;i++)
	  {
	     
	        if(um[arr[i]] > 1)
	        {
	            flag =1;
	            cout<<i+1<<" ";
	            break;
	        }
	        
	  }
	  
	  if(flag == 0)
	  {
	      cout<<-1<<" ";
	  }
	    cout<<endl;
	}
	return 0;
}