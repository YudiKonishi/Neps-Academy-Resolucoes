#include <iostream>

using namespace std;

int main(){
	int n, max, tmp, l, c;
	cin >> n;
	int mat[n][n], check[2][1000] = {0};
	max = 0;
	for(int i = 0; i<n; i++){
        l = 0;
        c = 0;
		for(int j = 0; j<n; j++){
			cin >>tmp;
			mat[i][j] = tmp;
            check[0][i] += mat[i][j];
            check[1][j] += mat[i][j];
        }
        
    }
    max = 0;
	for(int a = 0; a<n; a++){
		for(int b = 0; b<n; b++){
            tmp = (check[0][a] + check[1][b]) - (2*mat[a][b]);
            if(tmp>max){
                max = tmp;
            }
		}
    }
	cout << max;
	return 0;
}

