// Assignment 2 26T3 COMP1511: CS Alchemy
// cs_alchemy.h
//
// Written by <YOUR-NAME>, <YOUR-ZID>
// on <TODAYS-DATE>
//
// DESCRIPTION OF YOUR PROGRAM HERE

////////////////////////////////////////////////////////////////////////////////
// Provided Constants
////////////////////////////////////////////////////////////////////////////////
#define MAX_SIZE 100

////////////////////////////////////////////////////////////////////////////////
// Your constants
////////////////////////////////////////////////////////////////////////////////

// TODO: Add your own constants here!

////////////////////////////////////////////////////////////////////////////////
// Provided Enums
////////////////////////////////////////////////////////////////////////////////

enum ingredient_effect {
    ENERGETIC,
    SLOWING,
    CHILLING,
    SCORCHING,
    FLYING,
    SINKING,
    INERT,
    INVALID_EFFECT
};

enum ingredient_type {
    MUSHROOM,
    CRYSTAL,
    ROOT,
    FLOWER,
    INVALID_TYPE
};

enum brew_status {
    READY,
    SIMMERING,
    BREWED,
    INVALID_STATUS
};

enum wizard_rank {
    NOVICE,
    APPRENTICE,
    MASTER,
    INVALID_RANK
};

// TODO: Add your own enums here!

////////////////////////////////////////////////////////////////////////////////
// Provided Structs
////////////////////////////////////////////////////////////////////////////////

struct apothecary {
    char name[MAX_SIZE];

    struct wizard *wizards;
    struct cauldron *cauldrons;
};

struct wizard {
    char name[MAX_SIZE];
    enum wizard_rank rank;

    struct potion *potions;
    struct wizard *next;
};

struct cauldron {
    char assigned_wizard_name[MAX_SIZE];

    enum brew_status status;
    int brew_potency;
    enum wizard_rank required_rank;

    struct ingredient *ingredients;
    struct cauldron *next;
};

struct ingredient {
    enum ingredient_type type;
    enum ingredient_effect effect;
    int potency;

    struct ingredient *next;
};

struct potion {
    char name[MAX_SIZE];

    int brew_potency;

    struct ingredient *ingredients;
    struct potion *next;
};

// TODO: Add your own structs here!

////////////////////////////////////////////////////////////////////////////////
// Provided function prototypes
////////////////////////////////////////////////////////////////////////////////

// Stage 1.1
// Function to create the Apothecary
struct apothecary *create_apothecary(char name[MAX_SIZE]);

// Function to create a wizard
struct wizard *create_wizard(char name[MAX_SIZE], enum wizard_rank rank);

// Function to create a cauldron
struct cauldron *create_cauldron();

// Function to create an ingredient
struct ingredient *create_ingredient(
    enum ingredient_type type,
    enum ingredient_effect effect,
    int potency
);

// Function to create a potion
struct potion *create_potion(char name[MAX_SIZE]);

// Stage 1.2
// Function to run the main command loop for the program
void command_loop(struct apothecary *apothecary);

// Stage 1.3
// Function to add a wizard
void add_wizard(struct apothecary *apothecary);

// Function to add a cauldron, assigned to an existing wizard
void add_cauldron(struct apothecary *apothecary);

// Function to add an ingredient to a cauldron
void add_ingredient(struct apothecary *apothecary);

// Stage 1.4
// Function to print out the apothecary
void print_apothecary(struct apothecary *apothecary);

////////////////////////////////////////////////////////////////////////////////
// Your function prototypes
////////////////////////////////////////////////////////////////////////////////

// TODO: Add your function prototypes here!



////////////////////////////////////////////////////////////////////////////////
// Helper function prototypes
////////////////////////////////////////////////////////////////////////////////

// Function to print the program usage information
void print_usage();

// Function to print the welcome banner
void print_welcome_banner();

// Scan in a name string into the provided buffer, placing
// '\0' at the end.
void scan_name(char name[MAX_SIZE]);

// Scans a string and converts it to an enum ingredient_effect.
enum ingredient_effect scan_ingredient_effect(void);

// Scans a string and converts it to an enum ingredient_type.
enum ingredient_type scan_ingredient_type(void);

// Scans a string and converts it to an enum wizard_rank.
enum wizard_rank scan_wizard_rank(void);

// Converts an enum ingredient_effect to a string, 
// e.g. ENERGETIC -> "ENERGETIC".
char *ingredient_effect_to_string(enum ingredient_effect effect);

// Converts an enum ingredient_type to a string, e.g. MUSHROOM -> "MUSHROOM".
char *ingredient_type_to_string(enum ingredient_type type);

// Converts an enum wizard_rank to a string, e.g. NOVICE -> "NOVICE".
char *wizard_rank_to_string(enum wizard_rank rank);

// Converts an enum brew_status to a string, e.g. READY -> "READY".
char *brew_status_to_string(enum brew_status status);

// Helper function to print out the potion information
void print_potion_list(struct potion *potion);

// Helper function to print out the cauldron information (including the
// ingredients it holds)
void print_cauldron(struct cauldron *cauldron, int index);

// Helper function to print out a list of ingredients, separated by commas
void print_ingredients_horizontally(struct ingredient *head);

enum ingredient_effect string_to_ingredient_effect(char *effect_str);
enum ingredient_type string_to_ingredient_type(char *type_str);
enum wizard_rank string_to_wizard_rank(char *rank_str);
int scan_token(char *buffer, int buffer_size);
