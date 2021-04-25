//
//  main.cpp
//  count_lines_using_accumulate
//
//  Created by huangwei on 2021/4/25.
//

#include <iostream>
#include <numeric>

int counter(int previous_count, char c) {
    return (c != '\n') ? previous_count : previous_count + 1;
}

int count_lines(const std::string &s) {
    return std::accumulate(s.cbegin(), s.cend(), 0, counter);
}

int main(int argc, const char * argv[]) {
    std::cout << count_lines("an ancient pond \n"
                                 "a frog jumps in \n"
                                 "the splash of water\n")
                  << '\n';
    return 0;
}
