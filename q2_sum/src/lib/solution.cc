#include "solution.h"
#include<iostream>
#include<string>
#include<vector>

vector<int> Solution::sum(const vector<int>& vct, int sum){
  vector<int> ret;
  vector<pair<int, int>>index;
  for(int i = 0; i < vct.size();i++){
    index.push_back(pair<int, int>(vct[i],i));
  }
  sort(index.begin(), index.end());
  int x = 0;
  int y = vct.size()-1;

  while(x < y){
    while(x < y && index[x].first + index[y].first > sum){
      y--;
    }
    if(index[x].first + index[y].first == sum){
      ret.push_back(index[x].second);
      ret.push_back(index[y].second);
      cout<< ret[0]<< "  " << ret[1] <<endl;
    }
    x++;
  }
  return ret;
}


