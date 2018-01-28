#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
  vector<int> twoSum(vector<int>& nums, int& target)
  {
    vector<int> g1;
    for (unsigned i = 0; i < nums.size(); i++) {
        for (unsigned j = i + 1; j < nums.size(); j++) {
            if (nums.at(j) == target - nums.at(i)) {
                g1.push_back(i);
                g1.push_back(j);
                return g1;
            }
        }
    }
}
} sol;

int main() 
{
  vector<int> a1 = {2, 7, 11, 15};
  int b1 = 18;
  // Call the function 
  vector<int> p = sol.twoSum(a1,b1);
  for (unsigned i = 0; i<p.size(); i++){
     cout << p.at(i) << endl;
  }  
  return 0;
}
