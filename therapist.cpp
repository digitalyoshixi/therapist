#include <iostream>
using namespace std;
int main(){
    std::cout << "what ails you?\n";
    while(true){
        string userinput{};
        std::cout << "> ";
        std::getline(std::cin,userinput);
        if (userinput == "bye"){
            break;
        }
        std::cout << "why are you " << userinput << "?\n";
    }
    std::cout<<"be back soon!";

    return 0;
}
