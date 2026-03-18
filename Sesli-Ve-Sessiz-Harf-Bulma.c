/* sesli ve sessiz harf bulma uygulamasý */
#include <stdio.h>
#include <ctype.h> // tolower() fonksiyonu için gerekli

int main() {
    char word[100];
    int i = 0;

    printf("please , enter the a word : ");
    scanf("%s", word);

    printf("Analysis of vowels and consonants:\n");

    while (word[i] != '\0') {
        char letter = tolower(word[i]); // Büyük harfleri küçük harfe çeviriyoruz

        // Sadece harf olup olmadýðýný kontrol ediyoruz
        if (letter >= 'a' && letter <= 'z') {
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
                printf("'%c' the letter A is a vowel .\n", word[i]);
            } else {
                printf("'%c' the letter A is a consonants.\n", word[i]);
            }
        }
        i++;
    }

    return 0;
}
