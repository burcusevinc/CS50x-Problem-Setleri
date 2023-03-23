//kullanıcıdan 1-8 arası değer alan ve piramit yapan program

#include <cs50.h>
#include <stdio.h>

void piramit(int n);

int main (void) {
    int height; 

    do {
        height = get_int("Height: ");
    }while(height<1 || height>8);
}

void piramit(int n){
    for(int i=1; i<=n; i++) {
        for(int j=n-i-1; j>0; j--){
            printf(" ";)
        }
        for(int k=0; k<i+1; k++){
            printf("#");
        }
        printf("\n");
    }
}