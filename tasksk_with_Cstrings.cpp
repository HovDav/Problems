
# include <iostream>

void swap (char* a, char* b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int strlen (char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
// Իրականացնել ֆունկցիա, որը շրջում է C-ական տողը (char*)։
void reverse_string (char* str) {
    int size = strlen (str);
    for (int i = 0; i < size / 2; ++i) {
        swap (&str[i], &str[size - i -1]);
    }
}

// Իրականացնել char* strcat(char* s1, char* s2); ֆունկցիան, որը ստանում է երկու C տողեր և կոնկատենացնում (միացնում) տողերը իրար՝
// պահելով առաջին արգումենտում։
char* strcat (char* s1, const char* s2) {
    int size = strlen (s1);
    int i = 0;
    for ( ; s2[i] != '\0'; ++i) {
        s1[size + i] = s2[i];
    }
    s1[size+i+1] = '\0';
    return s1;
}
// Իրականացնել strset(char* s, char ch); ֆունկցիան, որը տրված s տողի բոլոր սիմվոլները փոխարինում է ch սիմվոլով։
void strset (char* ch, const char s) {
    int i = 0;
    while (ch[i] != '\0') {
        ch[i] = s;
        ++i;
    }
}
// [*] Իրականացնել strmove(char* s, int n); ֆունկցիան, որը տրված s տողը ցիկլիկ տեղաշարժում է դեպի աջ n անգամ։ 
// Օրինակ, strmove(“hello”, 2); կտեղաշարժի “hello”-ն 2 դիրքով դեպի աջ և կստանա “lohel”։
void strmove (char* s, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = strlen(s)-1; j > 0; --j) {
            swap (&s[j], &s[j-1]);   
        }
    }
}

int main () {
    char str[] = "Hello world 2022";
    reverse_string (str);
    std::cout << str << std::endl;
    char str1[100] = "Hello ";
    char str2[] = "world ";
    char str3[] = "2022";
    strcat (str1, str2);
    strcat (str1, str3);
    std::cout << str1 << std::endl;
    strset (str1, '+');
    std::cout << str1 << std::endl;
    char str4[] = "hello";
    strmove (str4, 2);
    std::cout << str4 << std::endl;
}