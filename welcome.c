#include <stdio.h>
int welcome();
int main() {
    printf("Before welcome\n"); 
 welcome();                  
    printf("After welcome\n");  
    return 0;                   
}


int welcome() {
    printf("Welcome to C\n");    
    return 0;                    
}
