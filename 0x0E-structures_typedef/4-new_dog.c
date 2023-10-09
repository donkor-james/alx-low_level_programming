#include "dog.h"
/**
 * new_dog - create a new dog object
 * @name: name argument
 * @age: age argument
 * @owner: owner argument
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char d_name;
	char d_owner;
	int len;

	len = _strlen(name);
	d_name = malloc(len);

	len = _strlen(owner);
	d_owner = _strlen(len);

	dog->name = d_name;
	dog->age = age;
	dog->owner = d_owner;

	return (dog);
}
