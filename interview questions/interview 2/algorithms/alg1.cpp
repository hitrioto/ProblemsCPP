/*  C++ Algorithms 1

    Consider the following sequence – 0,1,1,2,3,5,8,13,21,34,55,89,144...

    1. Write an iterative function to return the nth element of the sequence.
    2. Write a recursive function to return the nth element of the sequence.
*/

#include <iostream>


int sequence1(unsigned n)
{
    // iterative function
    int a,b,c;
    a = 0;
    b = 1;
    for(int i=0;i<n;i++){
      c = b+a;
      a = b;
      b = c;
    }
    return a;
}


int sequence2(unsigned n)
{
    // recursive function
    if(n==0){
      return 0;
    }
    if(n==1){
      return 1;
    }
    else{
      return sequence2(n-1)+sequence2(n-2);
    };

}



int main(int argc, char* argv[])
{
    std::cout << sequence1(25) << std::endl;
    std::cout << sequence2(25) << std::endl;
}
