#include "str_easy.h"


void itc_print_copy_str(string str, int number){
    while (number) {
        cout << str;
        number--;
    }
}

void itc_first_end_three(string str){
if (itc_len(str) > 5)
    cout << str[0] << str[1] << str[2] << str[itc_len(str)-3] << str[itc_len(str)-2] << str[itc_len(str)-1];
else{
    long long i = itc_len(str);
    while (i) {
    cout << str[0];
    i--;
    }
}
}

bool itc_equal_reverse(string str){//10
long long len = itc_len(str) - 1;
string str1;
while (len >= 0){
    str1 += str[len];
    len--;
}
if (str1 == str)
    return true;
else
    return false;
}







