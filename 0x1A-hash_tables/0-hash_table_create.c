#include <stdlib.h>
#include <stdio.h>

typedef struct hash_node_s {
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s {
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int i;

	/* allocate space for the hash table */
	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
	{
		free(hash_table_created);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table_created->array[i] = NULL;
	}

	return (hash_table_created);
}

int main(void)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = hash_table_create(10);
	if (ht == NULL)
	{
		printf("Failed to create hash table.\n");
		return (EXIT_FAILURE);
	}

	printf("%p\n", (void *)ht);

	/* free memory allocated for hash table */
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node, *tmp;

		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);

	return (EXIT_SUCCESS);
}

