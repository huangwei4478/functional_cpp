//
//  main.cpp
//  average_score
//
//  Created by huangwei on 2021/4/25.
//

#include <iostream>
#include <vector>
#include <numeric>

#if 0

double average_score(const std::vector<int>& scores) {
    
    if (scores.size() == 0) return 0.0;
    int sum = 0;
    
    for (int score: scores) {
        sum += score;
    }
    
    return sum / (double)scores.size();
}

#endif

// std::accumulate
double average_scores(const std::vector<int> &scores) {
    if (scores.size() == 0) return 0.0;
    return std::accumulate(scores.cbegin(), scores.cend(), 0) / (double)scores.size();
}

double average_product(const std::vector<int> &scores) {
    if (scores.size() == 0) return 0.0;
    return std::accumulate(scores.cbegin(), scores.cend(), 1, std::multiplies<int>()) / scores.size();
}

int main(int argc, const char * argv[]) {
    std::cout << average_scores({ 1, 2, 3, 4 }) << '\n';
    std::cout << average_product({ 1, 2, 3, 4 }) << '\n';
    return 0;
}
