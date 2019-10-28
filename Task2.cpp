/*

Требуется найти в бинарном векторе самую длинную последовательность
единиц и вывести её длину.

Желательно получить решение, работающее за линейное время и при этом
проходящее по входному массиву только один раз.

*/

#include <vector>
#include <iostream>


using std::string;
using std::cout;
using std::cin;

int main(){

    std::vector<bool> binaryVec;
    unsigned int longestRow = 0;
    unsigned int temp = 0;
    unsigned int size;
    bool var;

    //cout << "Input the vector`s size: ";
    cin >> size;

    for(int i=0; i < size; ++i){
      cin >> var;
      binaryVec.push_back(var);
    }

    for(int i = 0; i < binaryVec.size(); i++){
      while(binaryVec[i]) {
        temp++;
        i++;
      }
      if(longestRow < temp) {
        longestRow = temp;
      }
      temp = 0;

    }

    cout << longestRow << '\n';


    return 0;
}
