/*
* CountPencil.cpp
* Author: Sergio Can
* Description:
*   Read a N number, Read a K number
*   Read N lines of numbers and print the times that K appeared in the N lines.
* Example case: 5 1
* 1 3 4 2 1 -> 2
*/
#include<iostream>

int main(){
  int N,k,aux;
  std::cin>>N;
  std::cin>>k;

  int count = 0;
  for(int i = 0;i < N;i++){
    std::cin>> aux;
    if(aux == k)
      count++;
  }
  std::cout << count << std::endl;
  return 0;
}
