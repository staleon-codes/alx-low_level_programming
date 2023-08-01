#include "lists.h"
/**
*add_nodeint - Adds a new node at the beginning
*@head: A pointer to the address of the
*@n: The integer for the new node to contain.
*Return: If the function fails to allocate memory for the new node - NULL.
 * Otherwise - the address of the new element.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = *head;

*head = new_node;

return (new_node);
}
