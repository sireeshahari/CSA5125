#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char plain[10],cipher[10];
	int i,length,key;
	int result;
	printf("enter the plain text:");
	scanf("%s",plain);
	printf("\nenter the key:");
	scanf("%d",&key);
	printf("\nPlain Text:%s",plain);
	printf("\nEncrypted Text:");
	for(i=0,length=strlen(plain);i<length;i++)
	{
		cipher[i]=plain[i]+key;
		if(isupper(plain[i]) && (cipher[i]>'Z'))
		cipher[i]=cipher[i]-26;
		if(islower(plain[i]) && (cipher[i]>'z'))
		cipher[i]=cipher[i-26];
		printf("%c",cipher[i]);
	}
	printf("\nAfter Decryption:");
	for(i=0;i<length;i++)
	{
		plain[i]=cipher[i]-key;
		if(isupper(cipher[i]) && (plain[i]<'A'))
		plain[i]=plain[i]+26;
		if(islower(cipher[i]) && (plain[i]<'a'))
		cipher[i]=cipher[i]+26;
		printf("%c",plain[i]);
	}
getch();
}
