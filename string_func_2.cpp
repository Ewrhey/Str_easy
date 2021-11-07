#include "str_easy.h"
string itc_three_str(string str1, string str2, string str3){// error, r, v --> evvov
string str, str_sup;
long long index = itc_find_str(str1, str2), sup;//index = 1
while(index != -1){
    str_sup = itc_slice_str(str1, 0, index - 1);//str_sup = e
    if (index == 0)
        str_sup = "";
    //cout << "str_sup = " << str_sup << endl;
    sup = itc_len(str_sup);
    str_sup += str3;//str_sup = evv
    //cout << "str_sup = " << str_sup << endl;
    str1 = str_sup + itc_slice_str(str1, sup + itc_len(str2), itc_len(str1));//str1 = evvror
    //cout << "str1 = " << str1 << endl;
    index = itc_find_str(str1, str2);
    //cout << "index = " << index << endl;
}
return str1;
}









