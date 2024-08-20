/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:44:05 by hraad             #+#    #+#             */
/*   Updated: 2024/08/18 21:49:11 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Assuming your ft_strjoin is implemented in a file named libft.h
#include "libft.h"

// Helper function to print the result
void print_result(char *result) {
    if (result)
        printf("Result: \"%s\"\n", result);
    else
        printf("Result: NULL\n");
}

// Test function
void test_strjoin(char const *s1, char const *s2) {
    char *result_custom;
    char *result_standard;

    // Call custom ft_strjoin
    result_custom = ft_strjoin(s1, s2);

    // Call standard strjoin or mimic it if unavailable
    if (s1 && s2)
        result_standard = strcat(strcpy(malloc(strlen(s1) + strlen(s2) + 1), s1), s2);
    else if (!s1 && s2)
        result_standard = strdup(s2);
    else if (s1 && !s2)
        result_standard = strdup(s1);
    else
        result_standard = NULL;

    printf("Test: \"%s\" + \"%s\"\n", s1 ? s1 : "NULL", s2 ? s2 : "NULL");

    printf("Custom  ");
    print_result(result_custom);

    printf("Standard ");
    print_result(result_standard);

    printf("\n");

    // Free allocated memory
    free(result_custom);
    free(result_standard);
}

int main(void) {
    // Edge cases:
    test_strjoin("Hello", "World");        // Normal case
    test_strjoin("", "World");             // First string empty
    test_strjoin("Hello", "");             // Second string empty
    test_strjoin("", "");                  // Both strings empty
    test_strjoin(NULL, "World");           // First string NULL
    test_strjoin("Hello", NULL);           // Second string NULL
    test_strjoin(NULL, NULL);              // Both strings NULL
    test_strjoin("Longer test case with more characters", " to check memory allocation!");  // Long strings

    return 0;
}

