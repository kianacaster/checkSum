#include <iostream>
#include <vector>

using namespace std;
bool checkSum(int* array, int desiredSum)
{
    vector<int> differences;
    for(int i = 0; i < sizeof(array) - 1; i++){
        if(i == 0) differences.push_back(desiredSum - array[i]);
        for(int j = 0; j < sizeof(differences) - 1; j++){
            if((desiredSum - array[i]) == differences[j]){
                return true;
            }
        }
    }
    return false;
}

int main()
{
  int testArray[8] = {0,2,3,6,8,2,4,1}; 
  checkSum(testArray, 9); // Returns true because 6 + 3 = 9
}
