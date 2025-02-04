#include "event_manager.h"

Event event_list[MAX_EVENTS]; // Global event list

// Initialize the event manager by setting all event heads to NULL
void initialize_event_manager() {
    for (int i = 0; i < MAX_EVENTS; i++) {
        event_list[i].event_id = i;
        event_list[i].module_list_head = NULL;
    }
}

// Register a module for multiple events
void register_module_for_events(int module_id, void (*handler)(int, int), int event_ids[], int num_events) {
    for (int i = 0; i < num_events; i++) {
        int event_id = event_ids[i];

        // Allocate new module node
        ModuleNode* new_module = (ModuleNode*)malloc(sizeof(ModuleNode));
        if (!new_module) {
            printf("Memory allocation failed!\n");
            return;
        }
        
        new_module->module_id = module_id;
        new_module->event_handler = handler;
        new_module->prev = NULL;
        new_module->next = NULL;

        // Insert at the head of the doubly linked list
        if (event_list[event_id].module_list_head == NULL) {
            event_list[event_id].module_list_head = new_module;
        } else {
            new_module->next = event_list[event_id].module_list_head;
            event_list[event_id].module_list_head->prev = new_module;
            event_list[event_id].module_list_head = new_module;
        }

        printf("Module %d registered for Event %d\n", module_id, event_id);
    }
}

// Display all modules registered for a given event
void display_modules_for_event(int event_id) {
    ModuleNode* temp = event_list[event_id].module_list_head;
    
    if (!temp) {
        printf("No modules registered for Event %d\n", event_id);
        return;
    }

    printf("Modules registered for Event %d: ", event_id);
    while (temp) {
        printf("[Module ID: %d] ", temp->module_id);
        temp = temp->next;
    }
    printf("\n");
}

// Delete a module from an event
void delete_module_from_event(int event_id, int module_id) {
    ModuleNode* temp = event_list[event_id].module_list_head;
    
    if (!temp) {
        printf("Event %d has no registered modules.\n", event_id);
        return;
    }

    while (temp) {
        if (temp->module_id == module_id) {
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;

            if (temp == event_list[event_id].module_list_head) {
                event_list[event_id].module_list_head = temp->next;
            }

            free(temp);
            printf("Module %d removed from Event %d\n", module_id, event_id);
            return;
        }
        temp = temp->next;
    }

    printf("Module %d not found for Event %d\n", module_id, event_id);
}


