#include <iostream>
#include <string>
#include <stack>
using namespace std;

string BracketMatcher(string str) {
  
  // code goes here    
  stack<char> s;
  for(int i=0;i < str.length(); i++){
    if(str[i] == '(')
      s.push(str[i]);
    else if(str[i] == ')'){
      if(s.empty()){
        return "0";
      }
      else{
        s.pop();
      }
    }
  }
  if(s.empty()){
    return "1";
  }
  else{
    return "0";
  }

}

int main(void) { 
   
  // keep this function call here
  cout << BracketMatcher(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
