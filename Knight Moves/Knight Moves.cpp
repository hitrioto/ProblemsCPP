
#include <iostream>
#include <vector>

// better add this, too much writing
using namespace std;

void printChessTable(vector<vector<int> > a){
  int N = a[0].size();
  for ( int i = 0; i < N; i++){
     for ( int j = 0; j < N; j++ ) {
        cout << a[i][j];
        cout << " ";
     }
     cout << std::endl;
     }

} // end of function

int main(){
int N;
std::cout << "Hi" << std::endl;
std::cout << "Size of chess table" << std::endl;
std::cin >> N;

// actual reasonable code
vector<vector<int> > a;
std::vector<int> v1(N, 0);
// initialize vector with zeros
for(int i=0; i<N;i++){
  a.push_back(v1);
}
// print the chess table
printChessTable(a);

// main for loop
//for (int i=0;)

// printig phase
cout << endl;
cout << "The size of the chess table is: " << N;





return 0;
}
