#include <stdio.h>

typedef struct {
    char name[50];
    char day[10]; 
    int start_hour;  
    int end_hour;    
} Event;

Event createEvent();

int main() {
  Event e1 = createEvent();
  printf("%s\n%s\n%d\n%d\n", e1.name, e1.day, e1.start_hour, e1.end_hour);
  
  return 0;
}
