#include "lists.h"
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
int is_palindrome(listint_t **head)
{
    // If the list is empty, it is considered a palindrome
    if (*head == NULL)
    {
        return 1;
    }
    // Find the middle of the list
    listint_t *slow = *head;
    listint_t *fast = *head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // If the list has odd number of elements, skip the middle element
    if (fast != NULL)
    {
        slow = slow->next;
    }
    // Reverse the second half of the list
    listint_t *prev = NULL;
    listint_t *current = slow;
    while (current != NULL)
    {
        listint_t *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    // Compare the first half and the second half of the list
    listint_t *first = *head;
    listint_t *second = prev;
    while (first != NULL && second != NULL)
    {
        if (first->n != second->n)
        {
            return 0;
        }
        first = first->next;
        second = second->next;
    }
    // If all elements are the same, the list is a palindrome
    return 1;
}
