#include <iostream>

void encoding (std::string& str, int key) {
    for (int i = 0; i < str.length(); i++){
        if (str[i] <= 90 && str[i] >= 65){
            if ((str[i] + key) <= 90) {str[i] = str[i] + key;}
            else {str[i] = str[i] + key - 26;}
        }
        else if (str[i] <= 122 && str[i] >= 97){
            if ((str[i] + key) <= 122) {str[i] = str[i] + key;}
            else {str[i] = str[i] + key - 26;}
        }
            
     }

}

int main() {
    std::cout << "Please type text you want to decode" << std::endl;
    std::string str;
    std::getline (std::cin, str);
    std::cout << "Please enter a number (KEY) for shift letters : " << std::endl;
    int key = 0;
    std::cin >> key;
    encoding (str, key);
    std::cout << "Your text after encoding : " << std::endl;
    std::cout << str;
    std::cout << "\nPlease reenter  your KEY for decoding : " << std::endl;
    std::cin >> key;
    encoding (str, 26-key);
    std::cout << "\nYour text after decoding : " << std::endl;
    std::cout << str;
   
    return 0;
}