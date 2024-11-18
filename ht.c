#include <stdio.h>

typedef struct {
    const char* key;
    void* value;
} ht_entry;

typedef struct {
    ht_entry* ht; // points to array of ht_entries
    size_t capacity;
    size_t length;
} hash_table;

// size_t: unsigned: best practice to use for memory or array objects. 

#define INITIAL_CAPACITY 16;
// Create pointer to a hashtable

hash_table* ht_create(void) {

    hash_table* table = malloc(sizeof(hash_table));
    table->capacity = INITIAL_CAPACITY;
    table->length = 0;

    ht_entry* entry_array = calloc(table->capacity, sizeof(ht_entry));
    table->ht = entry_array;

    return table;
}