#include<bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v{9, 6, 4, 2};
    vector<int> res;
    int target,f,i=1;
    cin>>target;
    unordered_set<int> database;
    //unordered_set<string> :: iterator itr;
    database.insert(v[0]);
    while(i<v.size()){
        if(database.find(target-v[i])!=database.end()){
            auto itr=database.find(target-v[i]);
            cout<<(*itr)<<" "<<v[i];
        }
        ++i;
    }
}
