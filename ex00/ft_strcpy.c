#include <unistd.h>
#include <stdio.h>




char	*ft_strcpy(char *dest, char *scr)
{  
  
  int i;
 
  i = 0;
  while (scr[i] != '\0')
  {
    dest[i] = scr[i];
    i++;
  }

  
  dest[i] = '\0';

  printf("%s\n", dest);
  
  
  
   return (dest);
}


