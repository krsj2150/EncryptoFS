#ifndef UTIL_H
#define UTIL_H

typedef struct {
	char *rootdir;
	char *key;
} en_state;

void check_config_file(en_state *);
void first_time_encryption(char *, char *);

#endif
