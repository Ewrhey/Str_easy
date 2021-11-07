#include "str_easy.h"
long long itc_len(string str){
 int i = 0, counter = 0;
 while (str[i] != '\0'){
    i++;
    counter++;
 }
 return counter;
 }

int itc_count_char_in_str(char ch, string str){
 int i = 0, counter = 0;
while (str[i] != '\0'){
    if (str[i] == ch){
        counter++;
    }
    i++;
 }
return counter;
 }

int itc_find_str(string s1, string s2){
string s3;
int i1 = 0, i2 = 0, i;
long long len2;
 while (s1[i1] != '\0'){
 if (s1[i1] == s2[i2]){
    i = 0;
    len2 = itc_len(s2);
    s3 = "";
    while ( i < len2){
        s3 += s1[i1 + i];
        i++;
    }
    if (s3 == s2){
        return i1;
    }
 }
 i1++;

 }
return -1;
}

double itc_percent_lower_uppercase(string str){
long long i = 0;
double uppercase = 0.0, lowercase = 0.0, itog;
while (str[i] != '\0'){
    if (str[i] >= 'a' && str[i] <= 'z'){
        uppercase += 1.0;
    }
    if (str[i] >= 'A' && str[i] <= 'Z'){
        lowercase += 1.0;
    }
    i++;
}
itog = uppercase/lowercase;
return itog;
}
