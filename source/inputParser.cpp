#include <stdio.h>

using namespace std;

/*
Takes in a string input and a vector of strings of keywords.
Tokenizes the input and then checks each token against the vector. If a match is
found, the keyword is returned. Otherwise "noMatch" is returned.
*/
string inputParser(string input, vector<string> vKeywords)
{
  vector<string>::iterator searchKeywords; //iterate through to find vKeywords
  string keyword;

//Need to find some way to tokenize string input;

  while ((searchKeywords != vKeywords.end()) && /*Not at the end of string tokens */)
  {
      //Iterate through checking each token against the vector of keywords.
      searchKeywords = find(vKeywords.begin(), vkeywords.end(), /*inputToken*/);
  }
if (searchKeywords != vKeywords.end()) //Check if it found the value
{
  keyword = **searchKeywords; //SHOULD assign the value at the iterator.
}
else
{
  keyword = noMatch;
}
return keyword;
}
