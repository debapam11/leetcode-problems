#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>& num, int target){
    vector<int> result;          //vector to store the result indices
    vector<int> failed {-1,-1};    //just a vector to return in case sum cannot be attained

    unordered_map<int,int> hold;    //unordered_map to hold the value, index pair
    int i=0;
    while(i<num.size()){
        int diff = target - num[i];
        if(hold.find(diff)!=hold.end()){        //if target diff is found in hashmap, append the 
            result.push_back(hold[diff]);       //index to the result vector and return
            result.push_back(i);
            return result;
        }
        else
        {                                       //if target difference not found, add the current value to  
            hold[num[i]]=i;                     // the hash map and keep going :)
            ++i;
        }
        
    }
    return failed;
}


int main(){
    vector<int> v{9, 6, 4, 2};
    vector<int> res;
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    res=twosum(v,target);
    for(int i=0;i<2;i++){
        cout<<res[i]<<"\t";
    }
    return 0;
}