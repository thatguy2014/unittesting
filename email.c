// Includes
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>

int validate_email(char *address);

int main(int argc, char* argv[]){
        if(argc!=2){
            printf("\nPlease enter a single address.");
            return 1;
        }

        int valid = validate_email(argv[1]);

        // Print Statements
        if(valid){
            printf("\nValid email address!");
        }
        else{
            printf("\nInvalid email address");
        }
}

int validate_email(char *address) {
    int length = strlen(address);
    int at_found = 0;

    for (int i = 0; i < length; i++) {
        if ((address[i]) == '@') { // find @ symbol in address
            at_found = 1;
        }
        if ((address[i]) == '.') {
            if (length - i != 4 && length - i != 3) { // check if domains are .xx or .xxx
                return 0;
                break;
            } else {
                for (int j = i; j < length; j++) {
                    if (isdigit(address[j])) { //check if x in .xx/.xxx are digits
                        return 0;
                        break;
                    }
                }
            }
        }
    }
    return at_found;
}