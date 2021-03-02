#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    // напишите код здесь ...
        if(lhs != nullptr && rhs != nullptr){
            int ptr_lhs = *lhs;
            *lhs = *rhs;
            *rhs = ptr_lhs;
        }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    // напишите код здесь ...
    if(num_rows<=0 || num_cols<=0){
        return nullptr;
    }
    int **ptr_array = new int *[num_rows];
    int init2 = init_value;

    for(int i = 0; i< num_rows; i++){
        ptr_array[i] = new int [num_cols];
    }

    for (int i = 0; i < num_rows; ++i) {
        for( int j = 0; j < num_cols; ++j){
            ptr_array[i][j] = init2;
        }
    }

    return ptr_array;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    // напишите код здесь ...
    if (arr_2d_target == nullptr || arr_2d_source== nullptr) {
        return false;
    }
    if ( num_rows <= 0 && num_cols<= 0){
        return false;
    }

        for (int i = 0; i < num_rows; ++i) {
            for (int j = 0; j < num_cols; ++j) {
                arr_2d_source[i][j] = arr_2d_target[i][j];

            }

        }

    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    // напишите код здесь ...
    int tmp;
    for (int j = 0; j < arr.size()/ 2; j++)
    {
        tmp = arr[j];
        arr[j] = arr[arr.size() - j - 1];
        arr[arr.size()- j -1] = tmp;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    // напишите код здесь ...
    if( arr_begin != nullptr && arr_end != nullptr){
        while (arr_begin < arr_end){
          swap_args(arr_begin,arr_end);
          arr_begin++;
          arr_end--;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    if( arr == nullptr || size<=0) {
        return nullptr;
    }
    int max_value = -999999999;
    int *max_element;
    for (int i = 0; i < size; ++i) {
        if(arr[i] > max_value){
            max_value = arr[i];
            max_element = &arr[i];
        }
    }

    return max_element;


}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...

    vector<int> odd;

    for (int i = 0; i < arr.size(); ++i) {
        if( arr[i]%2 != 0){
            odd.push_back(arr[i]);
        }

    }
    return odd;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    vector<int> arr_c;

    for (int i = 0; i < arr_a.size(); ++i) {
        for (int j = 0; j < arr_b.size(); ++j) {
            if (arr_a[i] == arr_b[j]){
                arr_c.push_back(arr_a[i]);
            }

        }

    }

    return arr_c;
}
