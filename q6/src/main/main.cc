#include <iostream>
#include "src/lib/solution.h"



int main(){
    Solution solution;
	int array[] = {1, 4, 5, 23, 100, 12, 18, 175};
	vector<int> vct(array, array + sizeof(array)/sizeof(int));
	solution.function(vct);
	
	return EXIT_SUCCESS;
}
