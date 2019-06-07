

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
	    
	    string s[N];
	    
	    for(int i=0; i<N; i++)
	    {
	        cin>>s[i];
	    }
	    //declare the map 
	    map<string,int> um;
	    
	    for(int i=0; i<N; i++)
	    {
	        um[s[i]]++;
	    }
	    
	    //init the pait string and integer
	    pair<string,int> p;
	    
	    int m=0;
	    //iterate the map i.e BST
	    for(auto i=um.begin(); i!=um.end(); i++)
	    {
	    	//if second element greater than m ie.max
	        if(i->second > m)
	        {
	        	//pair the first and second int map
	            p = {i->first,i->second};
	            //store the second element in m i.e max
	            m= i->second;
	        }
	    }
	    //print the elements
	    cout<<p.first<<" "<<p.second<<" "<<endl;
	}
	return 0;
}