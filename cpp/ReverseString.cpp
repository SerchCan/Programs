/*
* ReverseString.cpp
* Author: Sergio Can
* Description: Read a string and print the reverse
* Example case: Pedro -> ordeP
*/
#include<iostream>
#include<string>

int main(){
  std::string st;
  std::getline(std::cin,st);
  for(int i=st.size()-1;i>=0;i--){
    std::cout<< st[i];
  }
  return 0;
}
