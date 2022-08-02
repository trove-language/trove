
#include <main.h>
#include <cmd.h>


const char* usage_message(){
    return "usage [TODO]";
}


int main(int argc, char** argv){

    auto command_executor = CommandExecutor();
    
    if(argc <= 1){
        spdlog::info("{}", usage_message());
        return 0;
    }

    command_executor.exec(argv[0]);



    return 0;
}