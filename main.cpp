#include <iostream>
#include <filesystem>


std::filesystem::path path = "/dev/input";



bool change_dr();

int main(){
    if(!(change_dr)){
      std::cout << "Path not found";
      return 0;
    }
    std::cout << "HI" << std::endl;
    return 1;
}



bool change_dr(){
    if(std::filesystem::exists(path))
    {
    std::filesystem::current_path(path);
    return true;
    }
    return false;
}
