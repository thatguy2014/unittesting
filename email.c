// Includes
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(int argc, char* argv[]){
        if(argc!=2){
            printf("\nPlease enter a single address.");
            return 1;
        }

        int length = strlen(argv[1]);
        int at_found = 0;
        int valid_domain = 0;
        for(int i=0; i < length; i++){
            if((argv[1][i]) == '@'){
                at_found = 1;
            }
            if((argv[1][i]) == '.'){
                printf("\n%d", length-i);
                if(length-i!=4){
                    printf("\nInvalid email address");
                    return 1;
                }
                for(int j = i; j < length; j++){
                    if((argv[1][j+1]) == 'c' && (argv[1][j+2]) == 'o'  && (argv[1][j+3]) == 'm'){
                        valid_domain =1;
                    }

                    if((argv[1][j+1]) =='o' && (argv[1][j+2]) =='r' && (argv[1][j+3]) == 'g'){
                        valid_domain =1;
                    }

                    if((argv[1][j+1]) == 'n' && (argv[1][j+2]) =='n' && (argv[1][j+3]) =='t'){
                        valid_domain =1;
                    }

                    if((argv[1][j+1]) =='e' && (argv[1][j+2]) =='d' && (argv[1][j+3]) == 'u'){
                        valid_domain =1;
                    }
                }
            }
        }
        if(at_found && valid_domain){
            printf("\nValid email address!");
        }
        else{
            printf("\nInvalid email address");
        }
}
