#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/* Definition of the listint_t struct */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */

