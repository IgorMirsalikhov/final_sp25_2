#define SIZE 1000

void getString(char *str);

void getString(char *str) {
    int i = 0;
    char c = getchar(); 
    while (i < SIZE - 1 && c != '\n') {
        str[i] = c;
        i++;
        c = getchar();
    }
    str[i] = '\0';
}
