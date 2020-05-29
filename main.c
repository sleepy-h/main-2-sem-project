#include <stdio.h>
#include <stdlib.h>

// print error and exit
//first arg - figital number of error
void error_code (int a){
    switch  (a) {
        case 0 : printf("#######Its work)######\n"); help(); exit(0);
        case 1 : printf("##File not be opened##\n"); exit(0);
        case 2 : printf("##File not indicated##\n"); help(); exit(0);
    }
}
// read file and if it not exist - print error
// first arg - path to file
FILE* read_file(const char* argv[]){
    FILE* file_thread;
    if ((file_thread = (argv[0],"r");)==NULL) {
        error_code(1);
    }
}
//print help instruction
void help() {
    printf("*Commands*\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("addbook                  Add book to library\n");
    printf("delbook                  Delete book from library\n");
    printf("getbook                  Get book from library\n");
    printf("bringbook                Adds count of book to library\n");
    printf("~~~~~~~~~~Example for initializing programme~~~~~~~~~\n");
    printf("database yourfile.csv \n");
    printf("~~~~~~~~~~Example for initializing programme~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
};

int main(int argc, char* argv[]) {
    // Processing arg and opne file
    if (argc == 1){
        error_code(2);
    } else{
        FILE* data_base = open_file(argv[argc-1]);
        for (int i=1; i<(argc-1);++i) 
            // Processing parameters
    }



    return 0;
}
