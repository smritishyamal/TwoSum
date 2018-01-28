#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
  vector<int> twoSum(vector<int>& nums, int& target)
  {
    vector<int> g1;
    unsigned count = 0;
    for (unsigned i = 0; i < nums.size(); i++) {
      count = count + 1;
        for (unsigned j = i + 1; j < nums.size(); j++) {
            if (nums.at(j) == target - nums.at(i)) {
                g1.push_back(i);
                g1.push_back(j);
                return g1;
            }
        }
    }
    if (count == nums.size()){
      cout << "No sum found " << endl;
      return nums;
    }
  }
} sol;

int main() 
{
  vector<int> a1 = {2, 7, 11, 15};
  int b1 = 18;
  int out;
  
  // Call the function 
  vector<int> p = sol.twoSum(a1,b1);
  
  //Check the returned vector
  a1 == p ? out = 0 : out = 1;
  
  //If orginial is returned then no sum found
  if (out == 0){
    cout << "no sum found" <<endl ;
  }
  
  // Else print the indices
  else {
    for (unsigned i = 0; i<p.size(); i++){
      cout << p.at(i) << endl;
    }
  }
  
  return 0;
}
