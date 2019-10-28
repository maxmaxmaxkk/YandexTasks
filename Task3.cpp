/*


Дан упорядоченный по неубыванию массив целых 32-разрядных чисел.
Требуется удалить из него все повторения.

Желательно получить решение, которое не считывает входной файл целиком в память,
т.е., использует лишь константный объем памяти в процессе работы.

*/

#include <vector>
#include <iostream>


using std::string;
using std::cout;
using std::cin;

int main(){

  std::vector<int32_t> intVector;
  int vecSize;
  int32_t temp;

  cin >> vecSize;

  cin >> temp;
  intVector.push_back(temp);

  for( int i = 0, j = 0; i < vecSize -1; i++){
      cin >> temp;
      if(intVector[j] != temp){
        intVector.push_back(temp);
        j++;
      }
  }

  for(int i = 0; i< intVector.size(); i++) cout << intVector[i];
  return 0;
}
