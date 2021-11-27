#include <bits/stdc++.h>
using namespace std;

int findLowBound(vector<int> &nums, int target){
  int lo = 0, hi = nums.size() - 1, mid = 0;
  
  while (lo <= hi){
    mid = lo + (hi - lo)/2;
    if (nums[mid] < target){
      lo = mid + 1;
    }else{
      hi = mid - 1;
    }
  }
  return mid;
}

int findHighBound(vector<int> &nums, int target){
  int lo = 0, hi = nums.size() - 1, mid = 0;
  while (lo <= hi){
    mid = lo + (hi - lo) / 2;
    if (nums[mid] > target){
      hi = mid - 1;
    }else{
      lo = mid + 1;
    }
  }
  return mid;
}

int main(){
  vector<int> v = {1,2,2,3,3,3,3,4,5,6,6,7};
  cout << findLowBound(v, 3) << '\n';
  cout << findHighBound(v, 3) << '\n';
  return 0;
}