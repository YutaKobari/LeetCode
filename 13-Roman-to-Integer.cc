#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
  int romanToInt(string s)
  {
    int total = 0;
    map<char, int> roman_to_int = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

    for (int i = 0; i < s.size(); i++)
      if (i != int(s.size()) - 1 && roman_to_int[s[i]] < roman_to_int[s[i + 1]])
        total -= roman_to_int[s[i]];
      else
        total += roman_to_int[s[i]];
    return total;
  }
};

int main()
{
  Solution solution;
  string s;
  cin >> s;
  cout << solution.romanToInt(s) << endl;
}