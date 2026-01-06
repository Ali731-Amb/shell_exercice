#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;
char *_getenv(const char *name);
void *print_path_dirs(void);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

#endif