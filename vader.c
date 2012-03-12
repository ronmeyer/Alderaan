//
//  File.c
//  
//
//  Created by Ron Meyer on 3/11/12.
//  Copyright (c) 2012 Apple. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char name[100] = {"\0"};
    printf("Enter your name. \n");
    scanf("%s", &name);
    printf("%s, I am your father. \n", name);
    printf("\n\nNOOOOOOOOOOOOO\n");
    return 0;
}

