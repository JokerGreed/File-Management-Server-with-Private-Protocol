#include "../head/commands.h"

int cmd_pwd(int client_fd) {
    char * wd = getcwd(NULL, 0);
    ERROR_CHECK(send(client_fd, wd, strlen(wd), 0), -1, "send"); 
    
    return 0;
}
