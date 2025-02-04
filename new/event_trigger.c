#include "event_manager.h"

// Trigger an event (calls event handlers for all registered modules)
void trigger_event(int event_id) {
    ModuleNode* temp = event_list[event_id].module_list_head;
    
    if (!temp) {
        printf("No modules to trigger for Event %d\n", event_id);
        return;
    }

    printf("Triggering Event %d...\n", event_id);
    while (temp) {
        temp->event_handler(event_id, temp->module_id);
        temp = temp->next;
    }
}