// Assignment 2 26T3 COMP1511: CS Alchemy
// cs_alchemy.c
//
// Written by <YOUR-NAME>, YOUR-ZID z5555555
// on <TODAYS-DATE>
//
// DESCRIPTION OF YOUR PROGRAM HERE

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "cs_alchemy.h"

// Stage 1.1
// Function to create the Apothecary
// Params:
//      name - the name of the apothecary
// Returns: a pointer to the apothecary
struct apothecary *create_apothecary(char name[MAX_SIZE]) {

    // TODO: Implement this function
    printf("create_apothecary() not implemented yet!\n");

    return NULL;
}

// Stage 1.1
// Function to create a wizard
// Params:
//      name - the name of the wizard
//      rank - the rank the wizard has attained
// Returns: a pointer to the wizard
struct wizard *create_wizard(char name[MAX_SIZE], enum wizard_rank rank) {

    // TODO: Implement this function
    printf("create_wizard() not implemented yet!\n");

    return NULL;
}

// Stage 1.1
// Function to create a cauldron
// Returns: a pointer to the cauldron
struct cauldron *create_cauldron() {

    // TODO: Implement this function
    printf("create_cauldron() not implemented yet!\n");

    return NULL;
}

// Stage 1.1
// Function to create an ingredient
// Params:
//      type - the ingredient_type of the ingredient
//      effect - the effect_type of the ingredient
//      potency - the ingredients numerical strength
// Returns: a pointer to the ingredient
struct ingredient *create_ingredient(
    enum ingredient_type type,
    enum ingredient_effect effect,
    int potency
) {

    // TODO: Implement this function
    printf("create_ingredient() not implemented yet!\n");

    return NULL;
}

// Stage 1.1
// Function to create a potion
// Params:
//      name - the name of potion
// Returns: a pointer to the potion
struct potion *create_potion(char name[MAX_SIZE]) {

    // TODO: Implement this function
    printf("create_potion() not implemented yet!\n");

    return NULL;
}

// Stage 1.2
// Function to run the main command loop for the program
// Params:
//      apothecary - a pointer to the apothecary
// Returns: None
void command_loop(struct apothecary *apothecary) {

    // TODO: Implement this function
    printf("command_loop() not yet implemented!\n");

    return;
}

// Stage 1.3
// Function to add a wizard
// Params:
//      apothecary - a pointer to the apothecary
// Returns: None
void add_wizard(struct apothecary *apothecary) {

    // TODO: Implement this function
    printf("add_wizard() not yet implemented!\n");

    return;
}

// Stage 1.3
// Function to add a cauldron, assigned to an existing wizard
// Params:
//      apothecary - a pointer to the apothecary
// Returns: None
void add_cauldron(struct apothecary *apothecary) {

    // TODO: Implement this function
    printf("add_cauldron() not yet implemented!\n");

    return;
}

// Stage 1.3
// Function to add an ingredient to a cauldron
// Params:
//      apothecary - a pointer to the apothecary
// Returns: None
void add_ingredient(struct apothecary *apothecary) {

    // TODO: Implement this function
    printf("add_ingredient() not yet implemented!\n");

    return;
}

// Stage 1.4
// Function to print out the apothecary
// Params:
//      apothecary - a pointer to the alchemist's apothecary
// Returns: None
void print_apothecary(struct apothecary *apothecary) {

    // TODO: Implement this function
    printf("print_apothecary() not yet implemented!\n");

    return;
}


// Add your function definitions below this line


////////////////////////////////////////////////////////////////////////////////
// Provided function definitions
////////////////////////////////////////////////////////////////////////////////

// These are provided for you to use throughout the assignment.

// Function to print the program usage information
// Params: None
// Returns: None
void print_usage() {

    printf(
       "===========================[ Usage Info ]==========================\n"
       "                                                                   \n"
       "  ?                                                                \n"
       "    Show this help information.                                    \n"

       "  a w [wizard_name] [rank]                                         \n"
       "    Add a new wizard with the given rank.                          \n"
       "  a c [wizard_name] [required_rank]                                \n"
       "    Add a new cauldron, assigned to the given wizard.              \n"
       "  a i [cauldron_number] [type] [effect]                            \n"
       "    Add a new ingredient to the given cauldron.                    \n"

       "  c [cauldron_number]                                              \n"
       "    Inspect a single cauldron.                                     \n"
       "  i [cauldron_number] [depth] [type] [effect]                      \n"
       "    Insert an ingredient at a given depth.                         \n"
       "  b [cauldron_number] [potion_name]                                \n"
       "    Bottle a cauldron into a potion.                               \n"
       "  o [cauldron_number]                                              \n"
       "    Reorder the ingredients in a cauldron.                         \n"
       "  r p [potion_name]                                                \n"
       "    Remove a potion.                                               \n"
       "  r c [cauldron_number]                                            \n"
       "    Remove a cauldron.                                             \n"
       "  r w [wizard_name]                                                \n"
       "    Remove a wizard and redistribute their potions.                \n"
       "  l [cauldron_number] [turns]                                      \n"
       "    Light a cauldron to simmer for a number of turns.              \n"
       "  s [cauldron_number]                                              \n"
       "    Simmer a cauldron for one turn.                                \n"
       "  p [cauldron_number] [turns]                                      \n"
       "    Peek at what the next simmer turns would do.                   \n"
       "  d [wizard_a] [wizard_b]                                          \n"
       "    Duel two wizards with their potions.                           \n"

       "  *                                                                \n"
       "    Print the apothecary.                                          \n"

       "  q                                                                \n"
       "    Quits the apothecary.                                          \n"
       "                                                                   \n"
       "===================================================================\n"
    );

}

// Function to print the welcome banner
// Params: None
// Returns: None
void print_welcome_banner() {

    printf(
    "                  Welcome to....\n"
    "                .       o      .       o\n"
    "      o    .        O       .       O       .    o\n"
    "       T H E   P O T I O N   A P O T H E C A R Y\n"
    "     .   o  .   O   .   o   .   O   .   o   .   O\n"
    " (o) (O)  (o) (O)  (o)  (O) (o)  (O) (o)  (O) (o) (O)\n"
    "oOo(_)oOo(_)oOoOo(_)oOo(_)oOo(_)oOoOo(_)oOo(_)oOo(_)oO\n"
    "~o~^~O~o~^~o~O~^~o~^~O~o~^~o~^~O~o~^~o~O~^~o~^~O~o~^~o\n\n"
    );

}

// Scan in a name string into the provided buffer, placing
// '\0' at the end.
//
// Params:
//      name - a char array of length MAX_SIZE, which will be used
//                  to store the name.
// Returns: None
// Usage:
// ```
//      char name[MAX_SIZE];
//      scan_name(name);
// ```
void scan_name(char name[MAX_SIZE]) {
    scan_token(name, MAX_SIZE);
}

// Scans a string and converts it to an enum ingredient_effect.
//
// Returns:
//      The corresponding ingredient effect, if the string was valid,
//      Otherwise, returns INVALID_EFFECT.
//
// Usage:
// ```
//      enum ingredient_effect effect = scan_ingredient_effect();
// ```
//
enum ingredient_effect scan_ingredient_effect(void) {
    char effect[MAX_SIZE];
    scan_token(effect, MAX_SIZE);
    return string_to_ingredient_effect(effect);
}

// Scans a string and converts it to an enum ingredient_type.
//
// Returns:
//      The corresponding ingredient type, if the string was valid,
//      Otherwise, returns INVALID_TYPE.
//
// Usage:
// ```
//      enum ingredient_type type = scan_ingredient_type();
// ```
//
enum ingredient_type scan_ingredient_type(void) {
    char type[MAX_SIZE];
    scan_token(type, MAX_SIZE);
    return string_to_ingredient_type(type);
}

// Scans a string and converts it to an enum wizard_rank.
//
// Returns:
//      The corresponding wizard rank, if the string was valid,
//      Otherwise, returns INVALID_RANK.
//
// Usage:
// ```
//      enum wizard_rank rank = scan_wizard_rank();
// ```
//
enum wizard_rank scan_wizard_rank(void) {
    char rank[MAX_SIZE];
    scan_token(rank, MAX_SIZE);
    return string_to_wizard_rank(rank);
}

// Converts an enum ingredient_effect to a string, 
// e.g. ENERGETIC -> "ENERGETIC".
//
// Returns:
//      The effect as a string, or "INVALID_EFFECT" if it is not valid.
char *ingredient_effect_to_string(enum ingredient_effect effect) {

    if (effect == ENERGETIC) {
        return "ENERGETIC";
    }
    if (effect == SLOWING) {
        return "SLOWING";
    }
    if (effect == CHILLING) {
        return "CHILLING";
    }
    if (effect == SCORCHING) {
        return "SCORCHING";
    }
    if (effect == FLYING) {
        return "FLYING";
    }
    if (effect == SINKING) {
        return "SINKING";
    }
    if (effect == INERT) {
        return "INERT";
    }

    return "INVALID_EFFECT";
}

// Converts an enum ingredient_type to a string, e.g. MUSHROOM -> "MUSHROOM".
//
// Returns:
//      The type as a string, or "INVALID_TYPE" if it is not valid.
char *ingredient_type_to_string(enum ingredient_type type) {

    if (type == MUSHROOM) {
        return "MUSHROOM";
    }
    if (type == CRYSTAL) {
        return "CRYSTAL";
    }
    if (type == ROOT) {
        return "ROOT";
    }
    if (type == FLOWER) {
        return "FLOWER";
    }

    return "INVALID_TYPE";
}

// Converts an enum wizard_rank to a string, e.g. NOVICE -> "NOVICE".
//
// Returns:
//      The rank as a string, or "INVALID_RANK" if it is not valid.
char *wizard_rank_to_string(enum wizard_rank rank) {
    if (rank == NOVICE) {
        return "NOVICE";
    }
    if (rank == APPRENTICE) {
        return "APPRENTICE";
    }
    if (rank == MASTER) {
        return "MASTER";
    }

    return "INVALID_RANK";
}

// Converts an enum brew_status to a string, e.g. READY -> "READY".
//
// Returns:
//      The status as a string, or "INVALID_STATUS" if it is not valid.
char *brew_status_to_string(enum brew_status status) {
    if (status == READY) {
        return "READY";
    }
    if (status == SIMMERING) {
        return "SIMMERING";
    }
    if (status == BREWED) {
        return "BREWED";
    }

    return "INVALID_STATUS";
}

// Helper function to print out the potion information
// PARAMS:
//      potion - a pointer to a single potion
// RETURNS: None
void print_potion_list(struct potion *potion) {
    if (potion == NULL) {
        printf("    No potions at the moment!\n\n");
        return;
    }
    while (potion != NULL) {
        printf("    %s [Potency: %d]\n", potion->name, potion->brew_potency);
        printf("      Ingredients: ");
        print_ingredients_horizontally(potion->ingredients);
        printf("\n\n");
        potion = potion->next;
    }
}

// Helper function to print out the cauldron information (including the
// ingredients it holds)
// PARAMS:
//      cauldron - a pointer to a single cauldron
//      index - the 1-indexed position of the cauldron
// RETURNS: None
void print_cauldron(struct cauldron *cauldron, int index) {
    printf("  %d. |%s| [%s]\n", index, cauldron->assigned_wizard_name,
        brew_status_to_string(cauldron->status));
    printf("  Required rank: %s\n",
        wizard_rank_to_string(cauldron->required_rank));
    printf("  Brew potency: %d\n", cauldron->brew_potency);

    printf("\n  ==================================================\n");
    if (cauldron->ingredients == NULL) {
        printf("    No ingredients yet\n");
    } else {
        struct ingredient *ingredient = cauldron->ingredients;
        while (ingredient != NULL) {
            // You might not have seen something like %8s before: this pads
            // the string with spaces if it is less than 8 characters long,
            // making our ingredients appear right-aligned when printed!
            printf("    %8s ::::: %s (%d)\n",
                ingredient_type_to_string(ingredient->type),
                ingredient_effect_to_string(ingredient->effect),
                ingredient->potency);
            ingredient = ingredient->next;
        }
    }

    printf("  ==================================================\n\n");

}

// Helper function to print out a list of ingredients, separated by commas
// PARAMS:
//      head - a pointer to a list of ingredients
// RETURNS: None
void print_ingredients_horizontally(struct ingredient *head) {
    if (head == NULL) {
        return;
    }
    struct ingredient *curr = head;
    while (curr->next != NULL) {
        printf("%s %s, ", ingredient_type_to_string(curr->type),
            ingredient_effect_to_string(curr->effect));
        curr = curr->next;
    }
    printf("%s %s", ingredient_type_to_string(curr->type),
        ingredient_effect_to_string(curr->effect));
}


////////////////////////////////////////////////////////////////////////////////
// Additional provided function definitions
////////////////////////////////////////////////////////////////////////////////

// You don't need to use any of these, or understand how they work!
// We use them to implement some of the provided functions above.

enum ingredient_effect string_to_ingredient_effect(char *effect_str) {
    int len = strlen(effect_str);

    if (strncasecmp(effect_str, "ENERGETIC", len) == 0) {
        return ENERGETIC;
    }
    if (strncasecmp(effect_str, "SLOWING", len) == 0) {
        return SLOWING;
    }
    if (strncasecmp(effect_str, "CHILLING", len) == 0) {
        return CHILLING;
    }
    if (strncasecmp(effect_str, "SCORCHING", len) == 0) {
        return SCORCHING;
    }
    if (strncasecmp(effect_str, "FLYING", len) == 0) {
        return FLYING;
    }
    if (strncasecmp(effect_str, "SINKING", len) == 0) {
        return SINKING;
    }
    if (strncasecmp(effect_str, "INERT", len) == 0) {
        return INERT;
    }

    return INVALID_EFFECT;
}

enum ingredient_type string_to_ingredient_type(char *type_str) {
    int len = strlen(type_str);

    if (strncasecmp(type_str, "MUSHROOM", len) == 0) {
        return MUSHROOM;
    }
    if (strncasecmp(type_str, "CRYSTAL", len) == 0) {
        return CRYSTAL;
    }
    if (strncasecmp(type_str, "ROOT", len) == 0) {
        return ROOT;
    }
    if (strncasecmp(type_str, "FLOWER", len) == 0) {
        return FLOWER;
    }

    return INVALID_TYPE;
}

enum wizard_rank string_to_wizard_rank(char *rank_str) {
    int len = strlen(rank_str);

    if (strncasecmp(rank_str, "NOVICE", len) == 0) {
        return NOVICE;
    }
    if (strncasecmp(rank_str, "APPRENTICE", len) == 0) {
        return APPRENTICE;
    }
    if (strncasecmp(rank_str, "MASTER", len) == 0) {
        return MASTER;
    }

    return INVALID_RANK;
}

int scan_token(char *buffer, int buffer_size) {
    if (buffer_size == 0) {
        return 0;
    }

    char c;
    int i = 0;
    int num_scanned = 0;

    scanf(" ");

    while (i < buffer_size - 1 && (num_scanned = scanf("%c", &c)) == 1 &&
           !isspace(c)) {
        buffer[i++] = c;
    }

    if (i > 0) {
        buffer[i] = '\0';
    }

    return num_scanned;
}
