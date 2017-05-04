#include <stdio.h>

int main (int argc, char *argv[])
{

    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome leveles of powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);

    int bugs = 100;
    double bug_rate = 1.2;
   
    printf("You have %d bugs at the imaginary  rate of %f.\n", bugs, bug_rate);
    
    //!!!why does he have to specify the constants as long?
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;

    //!!!%ld is a long double conversion specifier
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only %e of it.\n", part_of_universe);

    //this makes no senes, just for demo

    char null_byte = '\0';
    int care_percentage = bugs * null_byte;
    printf("Which means you should care %d%% of it\n", care_percentage);
    //!!!printf("Print of char %c.\n", null_byte); it prints as a space, if i print using the s% conversion specifier then it prints (null) 
    return 0;

}


    
