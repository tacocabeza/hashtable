#ifndef HASHTABLE_H
#define HASHTABLE_H

typedef struct{

	char* key;
	char* value;
}ht_item;

typedef struct{
	int size;
	int count;
	ht_item** items;
}hashTable;

#endif /* HASHTABLE_H*/

