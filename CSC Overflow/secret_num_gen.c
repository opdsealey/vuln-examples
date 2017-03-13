#include <stdio.h>

char *secret = "letmein";

void super_secret_func(void);
int authorize(void);
long long llg(int i, int a, int c, int m, long long seed);

int main(void){

    if(authorize()){
        printf("Login Successful!\n");
        super_secret_func();
    } else {
        printf("Incorrect password\n");
    }

    return 0;
}

void super_secret_func(void)
{
    long long sum = llg(1001, 947, 1051, 7919, 2070);
    printf("Your secret random number is: %llu\n", sum);

}

int authorize(void)
{
    
    printf("Enter Password: ");
    char password[124];
    gets(password);

    if(!strcmp(password,secret)) {
        return 1;
    } else {
        return 0;
    }

}


long long llg(int i, int a, int c, int m, long long seed);
{
    long long x = seed;
    
    for (i; i > 0; i--){
 	long long tmp;
	tmp = ((a*x) + c) % m;
        x = tmp;
    }
    return x;
}
