#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
  int i;
  
  i = -1;
  while(str[++i])
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }

  return(str);
}


