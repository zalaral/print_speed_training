#ifndef STRLIST_H_SENTRY
#define STRLIST_H_SENTRY

struct strlist_item
{
	char *string
	struct strlist_item *next;
};

typedef struct strlist_item* strlist;

strlist init_strlist();

void strlist_add(strlist sl);

void strlist_len(strlist sl);

char* strlist_get(strlist sl, int element_num);

void strlist_erase(strlist sl);

#endif
