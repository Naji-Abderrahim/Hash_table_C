#ifndef HASH_TABLE
#define HASH_TABLE

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "prime.h"

#define HT_PRINE_1 163
#define HT_PRINE_2 167
#define HT_INITIAL_BASE_SIZE 19

typedef struct t_ht_item{
	char *key;
	char *value;
}ht_item;


typedef struct t_ht_hash_table{
	int size;
	int base_size;
	int count;
	ht_item **items;
} ht_hash_table;

ht_hash_table* ht_new();
void ht_del_hash_table(ht_hash_table* ht);
int  hash(char *key, int prime_num, int backets_count);
int ht_get_hash(const char* s, const int num_buckets, const int attempt);

// hash table API
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* h, const char* key);
#endif
