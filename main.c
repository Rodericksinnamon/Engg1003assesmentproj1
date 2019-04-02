#include <stdio.h>



int main()
{
   char str[27], cipher; //Two vaiables of tpe char. Str is string of message 26 characters long by user. assumed user will enter in capitals with no spaces.
                            
    int n, key; //N is used as counter for string, key is the rottion ammount
    
    printf("ENTER MESSAGE TO ENCRYPT (MAX 26 LETTERS, NO SPACE, ALL CAPITALS): "); \\prompts user to input message
    
    scanf("%s", str); \\gets message from user
    
    printf("Message entered %s ---> Enter key(number of rotatoion ammount): ", str); // shows user what they entered, prompts user for encryption key
    
    scanf("%d", &key); //gets key from user
    
   for(n = 0; str[n] ! = 0; ++n) //runs through string when str[n] is not 0. if 0 exits.
   {
       cipher = str[n]; // assigns string to cipher char
       if(cipher >= 'A' && cipher <= 'Z' ) // checks for user input to see (if they acutally followed inscructions) if it is within A and Z checks each input value for each value of n as it counts i.e. 1, 2, 3, 4, etc.. along the string
        cipher = cipher + key; //Takes letter input eg n = 1 = A and moves it by the ammount set to key. ASCII A = 65 if key is 3, A beomces 68 = D. It repeats for each value of n
        
       
   }
   
    
  
  
  return 0;
}


 

    