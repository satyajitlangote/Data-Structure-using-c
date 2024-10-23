#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
char opnds [50] [80], oprs[50];
int topr=-1, topd=-1;
char pushd(char *opnd) {
        strcpy(opnds[++topd], opnd);
}
char *popd() {
	return (opnds[topd--]);
}
char pushr(char opr) {
	oprs[++topr]=opr;
}
char popr() {
	return (oprs[topr--]);
}
int empty(int t) {
	if( t == 0) return (1);
        return(0);
}
void main() {
	char prefix[50], ch, str[50], opnd1[50],opnd2[50], opr[2];
        int i=0, k=0, opndcnt=0;
      printf("Name:-Satyajit Hanmant Langote\n Class:-BCA-II SEM-III\n Roll_No:-33\nSubject: Lab Course VI based on CC303(Data Structure using C)\nAssignment No:-9 C & Name:-Prefix to Infix\n");
        printf("Give an Expression = ");
        gets(prefix);
        printf("Give prefix Expression : %s\n", prefix);
        while ( (ch=prefix[i++]) !='\0') {
		if (isalnum (ch)) {
                	str[0]=ch; str[1]='\0';
                        pushd(str); opndcnt++;
                        if (opndcnt >= 2) {
                        	strcpy (opnd2, popd());
                                strcpy (opnd1, popd());
                                strcpy (str, "(");
                                strcat (str, opnd1);
                                ch=popr();
                                opr[0]=ch; opr[1]='\0';
                                strcat (str, opr);
                                strcat (str, opnd2);
                                strcat (str, ")");
                                pushd(str);
                                opndcnt-=1;
                        }
                  }
                  else
                  {
                  	pushr(ch);
                        if(opndcnt==1)opndcnt=0;
                  }
	}
        if (!empty (topd))
        {
		strcpy(opnd2, popd());
                strcpy (opnd1, popd());
                strcpy (str, "(");
                strcat (str, opnd1);
                ch=popr();
                opr[0]=ch; opr[1]='\0';
                strcat (str, opr);
                strcat (str, opnd2);
                strcat (str, ")");
                pushd(str);
          }
          printf("Infix Expression: ");
          puts (opnds[topd]);
          getch();
}
