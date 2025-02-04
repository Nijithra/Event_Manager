#ifndef EVENT_MANAGER_H
#define EVENT_MANAGER_H

#include <stdio.h>
#include <stdlib.h>

// Maximum number of events that can be registered
#define MAX_EVENTS 10 

// Structure for a module node (Doubly Linked List Node)
typedef struct ModuleNode {
    int module_id;
    void (*event_handler)(int event_id, int module_id); // Function pointer for event handler
    struct ModuleNode* prev;
    struct ModuleNode* next;
} ModuleNode;

// Structure for an event (Each event maintains a list of modules)
typedef struct Event {
    int event_id;
    ModuleNode* module_list_head;  // Head of the doubly linked list
} Event;

// Global event array (indexed by event_id)
extern Event event_list[MAX_EVENTS];

// Function Prototypes
void initialize_event_manager();
void register_module_for_events(int module_id, void (*handler)(int, int), int event_ids[], int num_events);
void display_modules_for_event(int event_id);
void trigger_event(int event_id);
void delete_module_from_event(int event_id, int module_id);

#endif  // EVENT_MANAGER_H
