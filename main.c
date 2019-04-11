#include <stdio.h>

char RotationEncryption(char string[], int key);

int main()
{
        
    char choice;
    //int key;
    
    printf("welcome\n \n");
    
    printf("Select an option for Cipher and Cipher type:\n \nRotation Encyrption (a)\n \n");
    printf("Substitution Encryption (b)\n \n");
    printf("Rotation Decryption (c)\n \n");
    printf("Substition Decryption (d) \n \n");
    scanf("%c", &choice);
    //scanf("%d", &key);
    
    
    switch(choice)
    {
                case 'a':
                      printf("You selected Rotation Encryption\n \n Enter a key: \n");
                    break;
                    
                case 'b':
                      printf("You selected Substitution Encryption\n");
                    break; 
                
                case 'c':
                      printf("You selected Rotation Decryption\n \n Enter a key: \n");
                     break;
                     
                case 'd':
                      printf("You selected Substitution Decryption\n");
                     break;
                default:
                    printf("Invalid choice\n");
        } 
    
  
                      
        FILE *Text;
        char Encrypt[255];

        Text = fopen("Text.txt", "r");
                            
        fscanf(Text, "%s", Encrypt);
     /* if(choice == 'a')
      {
        char RotationEncyption(char Encrypt[], int key);
      } 
*/
        printf("%s", Encrypt);
    
        fgets(Encrypt, 255, (FILE*)Text);
            
       printf("%s\n", Encrypt);
    
  
    fclose(Text);
    
    
    
    return 0;
    
}

/*char RotationEncryption(char string[], int key)
{
    int index;
    char cipher;
    
    for(index = 0; string[index] != '\0'; ++index)
    {
        cipher = string[index];
        
        if(cipher >= 'a' && cipher <= 'z')
        {
            cipher = cipher + key;
                
                if(cipher > 'z')
                {
                    cipher = cipher - 'z' + 'a' - 1;
                }
                
                string[index] = cipher;
        }
        else if(cipher >= 'A' && cipher <= 'Z')
        {
            cipher = cipher + key;
            
            if(cipher > 'Z')
            {
                cipher = cipher - 'Z' + 'A' - 1;
            }
            
            string[index] = cipher;
        }
    }
    
    return string[index];
    
}
*/

        
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
  
 


 

    