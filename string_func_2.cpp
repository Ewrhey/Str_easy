#include "str_easy.h"
string itc_three_str(string str1, string str2, string str3){
string str, str_sup;
long long index = itc_find_str(str1, str2), sup;
while(index != -1){
    str_sup = itc_slice_str(str1, 0, index - 1);
    if (index == 0)
        str_sup = "";
    sup = itc_len(str_sup);
    str_sup += str3;//str_sup = evv
    str1 = str_sup + itc_slice_str(str1, sup + itc_len(str2), itc_len(str1));//str1 = evvror
    index = itc_find_str(str1, str2);
}
return str1;
}

int itc_max_char_on_end(string str){
    long long max_number = 0, counter = 0, i = 0;
    while (i <= itc_len(str)){
        if (str[i] >= '0' || str[i] <= '9'){
            counter++;
        }
        if (str[i] < '0' || str[i] > '9'){
            if (max_number < counter){
            max_number = counter;
            }
        counter = 0;
        }
    i++;
    }
    return max_number - 1;
}







