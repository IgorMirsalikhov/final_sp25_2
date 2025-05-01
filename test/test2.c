#include <stdio.h>

typedef struct {
    char name[50];
    char day[10]; 
    int start_hour;  
    int end_hour;    
} Event;

Event createEvent();
int hasOverlap(const Event *e1, const Event *e2);


int main() {
    Event e1 = createEvent();
    Event e2 = createEvent();
    if (hasOverlap(&e1, &e2) == 1) {
        puts("Has overlap");
    }
    else {
        puts("No overlap");
    }

    return 0;
}
