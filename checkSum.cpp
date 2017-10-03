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
