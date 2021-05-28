# Bracket-Matching
## Problem Statement
Have the function BracketMatcher(str) take the str parameter being passed and return 1 if the brackets are correctly matched and each one is accounted for. Otherwise return 0. For example: if str is "(hello (world))", then the output should be 1, but if str is "((hello (world))" the the output should be 0 because the brackets do not correctly match up. Only "(" and ")" will be used as brackets. If str contains no brackets return 1.
## Solution
For the problem statement, it is clear that we just have to deal with parenthesis and we can ignore the rest of characters. So I iterated over the given string and checked for the parenthesis. If I found the open parenthesis then I am adding that to the stack and if there's a close parenthesis, it means that there must be a open parenthesis before to match this parenthesis. That's why I pop a value (open parenthesis) from the stack. 
After iterating throught the entire string if stack got empty means all closing parenthesis matched with open parenthesis so function retures 1, otherwise 0.
