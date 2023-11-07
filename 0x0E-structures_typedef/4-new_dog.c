#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *r_dog;
	int i, lname, lowner;

	r_dog = malloc(sizeof(*r_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(r_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	r_dog->name = malloc(lname + 1);
	r_dog->owner = malloc(lowner + 1);

	if (!(r_dog->name) || !(r_dog->owner))
	{
		free(r_dog->owner);
		free(r_dog->name);
		free(r_dog);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		r_dog->name[i] = name[i];
	r_dog->name[i] = '\0';

	r_dog->age = age;

	for (i = 0; i < lowner; i++)
		r_dog->owner[i] = owner[i];
	r_dog->owner[i] = '\0';

	return (r_dog);
}
