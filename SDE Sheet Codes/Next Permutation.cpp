#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &per, int n)
{
    //  Write your code here.
    int idx = -1;
    for(int i=n-1;i>=1;i--){
        if(per[i]>per[i-1]){
            idx = i-1;
            break;
        }
    }

    if(idx==-1){
        reverse(per.begin(),per.end());
        return per;
    }

    for(int i=n-1;i>idx;i--){
        if(per[i]>per[idx]){
            swap(per[i],per[idx]);
            break;
        }
    }

    reverse(per.begin()+idx+1,per.end());
    return per;
}
