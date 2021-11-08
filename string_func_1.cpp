#include "str_easy.h"
string itc_hello_str(string name){
string s1 = "Hello, ";
s1 += name;
return s1;
}
string itc_even_place(string str){
string s1;
long long i = 0;
 while (str[i] != '\0'){
    if (i%2 != 0){
        s1 += str[i];
    }
    i++;
 }
return s1;
}
string itc_reverse_str(string str){
long long i = itc_len(str);
string str1 = "";
while (i >= 0){
    str1 += str[i-1];
    i--;
}
return str1;
}
string itc_slice_str(string str, int start, int end_){
if(end_ < start){
    return str;
}
else if(end_ > itc_len(str)-1){
    end_ = itc_len(str)-1;
}
string str1 = "";
while (start <= end_){
    str1 += str[start];
    start ++;
}
return str1;
}
string itc_cmp_str(string str1, string str2, int num){
if (str2 == ""){ 
return str1; 
} 
string str = ""; 
if (num == 0){ 
    str += str2; 
    str += str1; 
    return itc_slice_str(str, 0, itc_len(str1)-1); 
} 
str += itc_slice_str(str1, 0, num-1); 
str += str2; 
str += itc_slice_str(str1, num, itc_len(str1)); 
return itc_slice_str(str, 0, itc_len(str1)-1); 
}
