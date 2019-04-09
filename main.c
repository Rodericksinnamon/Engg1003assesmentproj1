#include <stdio.h>

char Encrypt(char string[1024], char c);

int main()
{
   FILE *Text_to_Encrypt;

   Text_to_Encrypt = fopen("Text_to_Encrypt.txt", "r");
   
    int key = 3; //key is the rotation ammount
  char c;
  
    
//    printf("Enter the key --->");
  //  scanf("%d", &key);
    
    while(feof(Text_to_Encrypt) == 0){
       
       char c;
        
        fscanf(Text_to_Encrypt, "%c", &c);

        
        if(c >= 'A' && c <= 'Z'){
            
            c = c + key;
                printf("%c\n", c);  
            
  }      else if(c >= 'a' && c <= 'z'){
            
            c = c + key;
               
               printf("%c\n", c);  
               
        else if( )
           
           
        }    
       } 
    

             printf("%c\n", c);   
    
    
    return 0;
    
}


        
        //store characters in a string and then operate on string
    
        
    

        
    
       
   

    
         
    

        //Decryption

        
        
        
      
    

    
   /*tf("Message entered %s ---> Enter key(number of rotatoion ammount): ", str); // shows user what they entered, prompts user for encryption key
    
    scanf("%d", &key); //gets key from user
    
   for(n = 0; str[n] ! = 0; ++n) //runs through string when str[n] is not 0. if 0 exits.
   {
       cipher = str[n]; // assigns string to cipher char
       if(cipher >= 'A' && cipher <= 'Z' ) // checks for user input to see (if they acutally followed inscructions) if it is within A and Z checks each input value for each value of n as it counts i.e. 1, 2, 3, 4, etc.. along the string
        cipher = cipher + key; //Takes letter input eg n = 1 = A and moves it by the ammount set to key. ASCII A = 65 if key is 3, A beomces 68 = D. It repeats for each value of n
        
       
   }
*/ 
  
 


 

    