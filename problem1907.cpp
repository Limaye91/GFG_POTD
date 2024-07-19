class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &a) {
        // code here
        //  int n = arr.size();
        // vector<int> temp(n);
        
        // int count;
        
        // for(int i=0;i<n;i++)
        // {
        //     count=0;
        //     if(i==n-1)
        //     {
        //         temp[i]=0;
        //     }
        //     else
        //     {
        //         for(int j=i+1;j<n;j++)
        //         {
        //           if(arr[i]>arr[j])
        //           {
        //               count++;
        //           }
        //         }
        //         temp[i]=count;
        //     }
        // }
        // return temp;
        int n=a.size();
        vector<int>ans(n);
        int k=n-2;
        vector<int>arr;
        arr.push_back(a[n-1]);
        
        for(int i=n-2;i>=0;i--)
        {
            int index=binarys(arr,a[i],0,arr.size()-1);
            ans[k--]=index;
            arr.insert(arr.begin()+index,a[i]);
        }
        
        return ans;
     
        
    }
    
    int binarys(vector<int> &arr,int key,int l,int h)
    {
        if(l<=h)
        {
            int mid=(l+h)/2;
            
            if(arr[mid]>=key)
            {
               return binarys(arr,key,l,mid-1);  
            }
            return binarys(arr,key,mid+1,h);  
            
        }
        return l;
    }
    
    
};
