#include <iostream>
#include "src/lib/solution.h"


int main()
{
    Solution solution ;
    int sum = 10;
    vector<int> ret = {3, 7, 11, 15};


    solution.sum(ret, sum);
    return EXIT_SUCCESS;
}