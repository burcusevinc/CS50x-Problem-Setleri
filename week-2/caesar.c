#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //argüman 2 den farklı ise
    if(argc != 2){
        printf("bu şekilde kullanın: ./ceaser key\n");
        return 1;
    }
    
    //key tanımlama:
    string key = argv[1];
    //girilen keyin kaç haneli olduğuna bakar:
    for(int i=0; i<strlen(argv[1]); i++){
        if(!isdigit(argv[1][i])) {
            printf("bu şekilde kullanın: ./ceaser key\n");
            return 1;
        }
    }

    //kullanıcıdan standart yazıyı alalım:
    string yazi = get_string("şifrelemek istenilen metni girin:");

    //string keyi int'e çevirme:
    int k = atol(key);

    printf("şifreli metin:");

    //metni şifreleme: 
    for(int i=0; i<strlen(yazi); i++) {
        //büyük karakterse
        if(isupper(yazi[i])) {
            //65 = büyük harf
            printf("%c", (((yazi[i] - 65) + k) % 26) + 65);
        }
        else if(islower(yazi[i])) {
            //97 = küçük harf
            printf("%c", (((yazi[i] - 97) + k) % 26) + 97);
        }
        else {
            printf("%c", yazi[i]);
        }
    }
    printf("\n");
}
