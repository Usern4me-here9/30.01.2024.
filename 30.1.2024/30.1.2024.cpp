#include <iostream>

using namespace std;

int main () {
    
    int matrica_susednosti [5][5] {
        {0,37,0,64,45},
        {37,0,19,73,0},
        {0,19,0,0,0},
        {64,73,0,0,52},
        {45,0,0,52,0}
    };

    int max,min,maxi,mini,maxj,minj;

    max = -2147483647;
    min = 2147483647;
    maxi = 0;
    mini = 0;
    maxj = 0;
    minj = 0;

    for (int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            if(matrica_susednosti[i][j] > max){
                max = matrica_susednosti[i][j];
                maxi = i;
                maxj = j;
            }
            if((matrica_susednosti[i][j] > 0) && (matrica_susednosti[i][j] < min)){
                min = matrica_susednosti[i][j];
                mini = i;
                minj = j;
            }
        }
    }

    cout << "Najveca udealjenost je izmedju cvorova: " << maxi << " i " << maxj << " i ona iznosi: " << max << endl;
    cout << "Najmanja udealjenost je izmedju cvorova: " << mini << " i " << minj << " i ona iznosi: " << min << endl;

    return 0xFC;
}