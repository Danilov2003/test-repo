
#include <iostream>
#include <vector>
#include <algorithm>

void print_vec(std::vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    unsigned size1;
    std::cin >> size1;

    std::vector<int> vec_size(size1);
    std::vector<int> vec_seq(size1);
    std::vector<int> all_elements;

    for (int i = 0; i < size1; i++) {
        int Ni, Ki;
        std::cin >> Ni >> Ki;
        vec_size[i] = Ni;
        vec_seq[i] = Ki;
        for (int j = 0; j < Ni; j++) {
            int element;
            std::cin >> element;
            all_elements.push_back(element);
        }
    }

    //print_vec(vec_size);
    //print_vec(vec_seq);
    //print_vec(all_elements);

    for (int i = 0; i < size1; i++) {

        std::vector<int> sequence(vec_size[i]);

        for (int j = 0; j < sequence.size(); j++) {
            sequence[j] = all_elements[j];
        }

        std::vector<int> max_elements;

        for (int k = 0; k < (vec_size[i] - vec_seq[i] + 1); k++) {
            std::vector<int> subsequence;
            for (int j = 0; j < vec_seq[i]; j++) {
                subsequence.push_back(sequence[j]);
            }

            std::sort(subsequence.begin(), subsequence.end());
            auto it = subsequence.end() - 2;
            max_elements.push_back((*it));

            sequence.erase(sequence.begin());
        }
        
        print_vec(max_elements);

        auto it = all_elements.begin();
        all_elements.erase(it, it + vec_size[i]);

    }

    return 0;
}
