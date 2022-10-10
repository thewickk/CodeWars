#include "../inc/positive_sum.h"

int positive_sum(const std::vector<int> arr)
{
    // try std::accumulate: https://cplusplus.com/reference/numeric/accumulate/
    int sum = 0;

    if (arr.empty()) return 0;

    for(auto n : arr)
    {
        if (n > 0) sum += n;
    }

    return sum;
}