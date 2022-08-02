#include <cmd.h>
#include <spdlog/spdlog.h>

void CommandExecutor::exec(std::string cmd){
    spdlog::info("executing {}.", cmd);
}