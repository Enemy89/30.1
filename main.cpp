#include <iostream>
#include <cpr/cpr.h>
#include <string>

int main() {
    std::string user_command;
    while (user_command != "exit") {
        std::cout << "Enter command (get, post, put, delete, patch or exit): " << std::endl;
        std::cin >> user_command;
        if (user_command == "get") {
            cpr::Response g = cpr::Get(cpr::Url("http://www.httpbin.org/get"));
            std::cout<<g.text<<std::endl;
        } else if (user_command == "post") {
            cpr::Response p = cpr::Post(cpr::Url("http://www.httpbin.org/post"));
            std::cout<<p.text<<std::endl;
        } else if (user_command == "put") {
            cpr::Response p = cpr::Put(cpr::Url("http://www.httpbin.org/put"));
            std::cout<<p.text<<std::endl;
        } else if (user_command == "delete") {
            cpr::Response d = cpr::Delete(cpr::Url("http://www.httpbin.org/delete"));
            std::cout<<d.text<<std::endl;
        } else if (user_command == "patch") {
            cpr::Response p = cpr::Patch(cpr::Url("http://www.httpbin.org/patch"));
            std::cout<<p.text<<std::endl;
        }
    }
}
