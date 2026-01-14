#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int>& arr,int M,int N,int maxallowedpages){
    int student = 1,pages = 0;
    for(int i=0;i<N;i++){
        if(pages+arr[i]<=maxallowedpages){
            pages+=arr[i];
        }
        else {
            student++;
            pages = arr[i];
        }

    }
    if(student>M){
    return false;
    }
    
    return true;

}
int bookallocation(vector<int>& arr,int M,int N){
    
    if(M>N){
        return -1;
    } 

    int st = 0,end = 0;
    int ans = -1;

    for(int i=0;i<N;i++){
        end += arr[i];            // Range of possible answers 
    }

    while(st<=end){
        int mid = st + (end - st)/2;
        if(isvalid(arr,M,N,mid)){               // Valid mid value
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;                       // Not valid value of mid 
        }
    }

    return ans;
    
}

int main(){
    vector<int> arr = {10,20,30,40};
    int M = 2,N = 4;

    cout<<bookallocation(arr,M,N)<<endl;

    return 0;

}