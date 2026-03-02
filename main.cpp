#include <iostream>
#include <filesystem>
#include <fstream>

std::filesystem::path path = "/dev/input";//the inputs folder for linux
std::string keys_input_file = "event7";


bool change_dr(std::filesystem::path path);

int main()
{
  if(!(change_dr(path))){
      std::cout << "Path not found";
      return 0;  
  }
  
  
  std::ifstream file;
  file.open(keys_input_file , std::ios::binary);

  int c = file.get();
  

  while (file.good()){
    std::cout << std::hex <<  c << std::setw(8)<<std::endl;
    c = file.get();
  }

  std::cout << "HI" << std::endl;
  return 1;
}



bool change_dr(std::filesystem::path path){
    if(std::filesystem::exists(path))
    {
    std::filesystem::current_path(path);
    return true;
    }
    return false;
}



