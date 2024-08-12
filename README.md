# C-Programming

## Exercise 1

Write a C program that takes the name of a file as a command-line argument, opens the file, reads through it to determine the number of words in each sentence, displays the total number of words and sentences, and computes the average number of words per sentence. The results should be printed in a table (as standard output), such as shown below:

This program counts the words and sentences in file "comp.text".
________
my friend's book. the total number of word is 10.
What's your father's name? Oulalahhh!
10 + 12 = 22.
________

./myProd comp.text

Sentence: 1 Words: 3
Sentence: 2 Words: 7
Sentence: 3 Words: 4
Sentence: 4 Words: 1
Sentence: 5 Words: 5

File "comp.text" contains 20 words in 5 sentences for an average of 4 words per sentence.

In this program, you should count a word as any contiguous sequence of letters, and apostrophes should be ignored. Thus, "O'Henry", "government's", and "friend's" should each be considered as one word.

## Compile

```C
gcc -o word_count word_count.c
./word_count myFile.txt
```
