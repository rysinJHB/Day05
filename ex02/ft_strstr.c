#include <unistd.h>
#include <stdio.h>



char	*ft_strstr(char *str, char *to_find)
{

  int i;
  int j;
  int to_find_length;
  
  to_find_length = -1;
  while (to_find[++to_find_length]);

  i = 0;
  while (str[i])
  {
    j = 0;
    while (str[i+j] == to_find[j])
      j++;
    if (j == to_find_length)
      return (str + i);
    i++;
  }
 
  
  return(0);
}

