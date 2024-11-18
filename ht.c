#include <stdio.h>

typedef struct {
    const char* key;
    void* value;
} ht_entry;

typedef struct {
    ht_entry* ht;
    size_t capacity;
    size_t length;
} hash_table;

// size_t: unsigned: best practice to use for memory or array objects. 