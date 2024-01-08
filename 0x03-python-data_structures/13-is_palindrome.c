#include "lists.h"

listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * reverse_listint - Reverses a singly-linked listint_t list.
 * @head: A pointer to the starting node of the list to reverse.
 *
 * Return: A pointer to the head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
    if (head == NULL || head->next == NULL) {
        return head;
    }
    listint_t *rest = reverse_listint(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If the linked list is not a palindrome - 0.
 *         If the linked list is a palindrome - 1.
 */

int is_palindrome(listint_t **head)
{
    if (head == NULL || head->next == NULL) {
        return 1;
    }
    // Find the middle node of the list
    listint_t *slow = head;
    listint_t *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    // Reverse the second half of the list
    listint_t *reversed_half = reverse_listint(slow);
    // Compare the first half with the reversed second half
    while (reversed_half) {
        if (head->n != reversed_half->n) {
            return 0;
        }
        head = head->next;
        reversed_half = reversed_half->next;
    }
