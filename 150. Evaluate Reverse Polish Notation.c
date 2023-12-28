int evalRPN(char** tokens, int n) {
    int s[10005];int top=-1;
        for(int i=0; i<n; i++)
        {
            if(strcmp(tokens[i],"+")==0){int b=s[top--],a=s[top--];s[++top]=a+b;}
            else if(strcmp(tokens[i],"-")==0){int b=s[top--],a=s[top--];s[++top]=a-b;}
            else if(strcmp(tokens[i],"*")==0){int b=s[top--],a=s[top--];s[++top]=a*b;}
            else if(strcmp(tokens[i],"/")==0){int b=s[top--],a=s[top--];s[++top]=a/b;}

            else{
                if(tokens[i][0]=='-'){int x=atoi(tokens[i]+1);x=-x;s[++top]=x;}
                else s[++top] = atoi(tokens[i]);
            }
        }
        return s[top];
}