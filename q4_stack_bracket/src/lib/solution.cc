#include "solution.h"
bool Solution::mystack(string str){
	stack<char> s;
	for(int i = 0; i < str.length(); i++){
  		if (str[i] != '('
   			&& str[i] != ')'
   			&& str[i] != '['
   			&& str[i] != ']'
   			&& str[i] != '{'
   			&& str[i] != '}')
   			continue;
  		char ch = str[i];
  		if(s.size() > 0 && (
  			(s.top()=='(' && ch == ')')
   			||
   			(s.top()=='[' && ch == ']')
     		||
    		(s.top()=='{' && ch == '}')
   			 )
   		){
   			s.pop();
 		}else
  		s.push(ch);
 }
 return s.empty();
}
