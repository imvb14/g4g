//User function Template for C++
//You need to complete this function, Geeks
int sumExists(int arr[], int sizeOfArray, int sum)
{
   //Your code here.
   
  // int pre_sum =0;
   
   unordered_set<int> us;
   
   for(int i=0; i<sizeOfArray; i++)
   {
       //pre_sum +=arr[i];
       
       if(us.find(sum - arr[i]) != us.end())
       {
           return 1;
       }
       
       us.insert(arr[i]);
   }
   
   return 0;
}