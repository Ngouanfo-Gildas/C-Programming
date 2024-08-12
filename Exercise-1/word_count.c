#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_letter_or_apostrophe(char c) {
    return isalpha(c) || c == '\'';
}

int is_sentence_end(char c) {
    return c == '.' || c == '!' || c == '?';
}

int main(int argc, char *argv[]){

    char c;
    int word_count = 0;
    int sentence_count = 0;
    int total_words = 0;
    float average_word_per_sentences = 0.0;

    if (argc != 2) {
        fprintf(stderr, "\nUse the following syntax to run the progam: %s <filename>\n\n", argv[0]);
        exit(1);
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "\nError opening file %s.\n\n",argv[1]);
        exit(1);
    }

    printf("\nThis program counts the words and sentences in file %s.\n\n", argv[1]);

// isspace(c) est vrai si c est un blanc

    while ((c = fgetc(file)) != EOF ){
        if (is_sentence_end(c))
        {
            total_words += word_count;
            sentence_count++;
            printf("Sentence %d : %d words.\n",sentence_count,word_count);
            word_count = 0;
        }
        
        if(isspace(c)){
            word_count++;
        }
        
    }

    average_word_per_sentences = (float)total_words/(float)sentence_count;

    printf("\nFile \"%s\" contains %d words in %d sentences for an average of %.2f words per sentence.\n\n", argv[1], total_words, sentence_count, average_word_per_sentences);

    fclose(file);

    return 0;
}

// page 85
