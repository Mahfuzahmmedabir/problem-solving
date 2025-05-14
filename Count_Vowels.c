
#include<stdio.h>
int rec(char s[], int i){
    if(s[i] == '\0'){
        return 0;
    }
    int result = rec(s,i+1);
    if(s[i] == 'a'|| s[i]== 'e'|| s[i]== 'i'||s[i]== 'o'||s[i]== 'u')
    {
       return result + 1;
    }
    else
    {
         return result;
    }

}
int main()
{
   char str[201];
   fgets(str,str,stdin);
   int result = rec(str,0);
   printf("%d", result);
   return 0;
}