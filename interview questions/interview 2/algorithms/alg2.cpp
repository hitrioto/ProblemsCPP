/*  C++ Algorithms 2

    Write a function that removes K random elements from a std::vector.
    The function should work in place, but does not need to preserve the order of elements.
*/

#include <iostream>
#include <vector>

void removeK(std::vector<int>& v, unsigned k)
{
    int numb;
    std::vector<int>::iterator it;

    // This vector has it coming...
    for(int i=0;i<k;i++){
      numb = rand() % v.size();
      it = v.begin() + numb;
      v.erase(it);
    }

}

int main(int argc, char* argv[])
{
    std::vector<int> arr;
    for (int i = 0; i < 50; ++i)
        arr.push_back(i);

    removeK(arr, 5);

    for (auto i: arr)
        std::cout << i << std::endl;
}
