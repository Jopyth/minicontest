#include <iostream>
#include <unistd.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <assert.h>

int main(void) { 
    int cases; 
    std::cin >> cases; 

    for (int c = 0; c < cases; c++)
    {
        int n;
        std::cin >> n;

        std::vector<int> input(n);

        for (int i = 0; i < n; i++)
        {
            std::cin >> input[i];
        }

        std::cout << std::accumulate(input.begin(), input.end(), 0) << std::endl;
    }
}
