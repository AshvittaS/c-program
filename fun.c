#include<stdio.h>
#include<stdbool.h>
int top = 0;
void pop(char *a, char target)
{
    if (top != 0)
        top--;
    else
        return;
}
void push(char *a, char target, int len)
{
    if (top >= len)
        return;
    a[top++] = target;
}
bool isValid(char *s)
{
    char a[strlen(s)];
    int i = 0;
    while (i != strlen(s))
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(a, s[i], strlen(s));
        }
        else if (s[i] == '}' && a[top - 1] == '{')
            pop(a, s[i]);
        else if (s[i] == ')' && a[top - 1] == '(')
            pop(a, s[i]);
        else if (s[i] == ']' && a[top - 1] == '[')
            pop(a, s[i]);
        else
            return false;
        i++;
    }
    return true;
}
int main()
{
    char input[] = "{[()]}";
    printf("%s is %s\n", input, isValid(input) ? "valid" : "invalid");

    char input2[] = "{[]}";
    printf("%s is %s\n", input2, isValid(input2) ? "valid" : "invalid");

    return 0;
}