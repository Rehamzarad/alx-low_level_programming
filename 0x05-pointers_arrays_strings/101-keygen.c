#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_PASSWORD_LENGTH 10
#define MIN_PASSWORD_LENGTH 5
void generate_password(char *password, size_t length) {
static const char charset[] =
"abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"0123456789"
"!@#$%^&*()_+-=[]{}|;:,.<>/?";
if (length < MIN_PASSWORD_LENGTH || length > MAX_PASSWORD_LENGTH) {
length = MIN_PASSWORD_LENGTH;
}
srand(time(NULL));
for (size_t i = 0; i < length; i++) {
password[i] = charset[rand() % (sizeof(charset) - 1)];
}
password[length] = '\0';
}
int main(void) {
char password[MAX_PASSWORD_LENGTH + 1];
generate_password(password, MAX_PASSWORD_LENGTH);
printf("%s\n", password);    
return 0;
}}
