/*
Даны две строки, состоящие из строчных латинских букв. Требуется определить,
являются ли эти строки анаграммами, т. е. отличаются ли они только порядком
следования символов.
*/

#include <vector>
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;

int main(){

  string firstStr, secondStr;

  cin >> firstStr >> secondStr;

  std::sort(firstStr.begin(), firstStr.end());
  std::sort(secondStr.begin(), secondStr.end());

  cout << "\nfirstStr:" << firstStr << " secondStr " << secondStr << '\n';

  if(firstStr == secondStr) cout << "1";
  else cout << "0";

  return 0;

}
