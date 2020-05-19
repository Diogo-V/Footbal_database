/* -----------------------------------------------------------------------------
 * NOTES ABOUT HASH.H:
 *
 * Author: Diogo Venancio, n95555
 *
 * Description
 * > This library is a modified version of "LP_Hash.h" and "Item.h" where,
 *   "Item.h" was changed to 2 structs and "LP_Hash.h"'s functions were
 *   divided into two subsets (teams and games).
 *
 * > Library that contains hash related functions such as initializing the
 *   table, deleting it, inserting elements inside it, etc.
 *
 * > Each hash table is represented by a pointer to links of teams/games,
 *   it's max number of elements and it's current number of elements
 *
 * -------------------------------------------------------------------------- */


#ifndef HASH
#define HASH


/* Required imports */
#include <stdlib.h>
#include <stdio.h>
#include "teams.h"
#include "games.h"


/* -------------------------------------------------------------------------- */
/* ----------------------------- STRUCTURES --------------------------------- */
/* -------------------------------------------------------------------------- */


#define INITIAL_TABLE_SIZE 7919


/* Struct that represents an hash table for teams */
typedef struct my_hash_teams {

    /* Pointer of team's node */
    sl_link *table;

    /* Max size of table */
    int max_size;

    /* Amount of nodes inside table */
    int current_size;

}* hash_teams;


/* Struct that represents an hash table for games */
typedef struct my_hash_games {

    /* Pointer of game's node */
    dl_link *table;

    /* Max size of table */
    int max_size;

    /* Amount of nodes inside table */
    int current_size;

}* hash_games;


/* -------------------------------------------------------------------------- */
/* -------------------------------- FUNCTIONS ------------------------------- */
/* -------------------------------------------------------------------------- */


/* Djb2 hash function. Receives a string and returns hash value */
int get_hash_value(char* word, int table_size);


/* ------------------------------- TEAMS ------------------------------------ */


/* Creates hash table for teams */
hash_teams create_teams_hash_table(int table_size);


/* Inserts a team inside the hash table */
void insert_team_hash(hash_teams table, sl_link team_node);


/* Gets node's index which holds team's name. If not found, returns -1 */
int search_team_index_in_hash(hash_teams table, char* team_name);


/* Expands teams' hash table */
void expands_team_hash(hash_teams table);


/* Deletes hash table for teams, clearing all memory */
void destroy_teams_hash(hash_teams table);


/* ------------------------------- GAMES ------------------------------------ */


/* Creates hash table for games */
hash_games create_games_hash_table(int table_size);


/* Inserts a game inside the hash table */
void insert_games_hash(hash_games table, dl_link game_node);


/* Gets node's index inside table which holds game's name */
int search_game_index_in_hash(hash_games table, char* game_name);


/* Expands games' hash table */
void expands_games_hash(hash_games table);


/* Removes input game's node from the table */
void deletes_game_hash(hash_games table, int game_index);


/* Deletes hash table for games, clearing all memory */
void destroy_games_hash(hash_games table);


#endif
