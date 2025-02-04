#include <stdio.h>
#include <stdlib.h>
#include "event_manager.h"

// Handler functions for 20 modules
void module1_handler(int event_id, int module_id)
{
    printf("Module 1 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module2_handler(int event_id, int module_id)
{
    printf("Module 2 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module3_handler(int event_id, int module_id)
{
    printf("Module 3 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module4_handler(int event_id, int module_id)
{
    printf("Module 4 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module5_handler(int event_id, int module_id)
{
    printf("Module 5 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module6_handler(int event_id, int module_id)
{
    printf("Module 6 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module7_handler(int event_id, int module_id)
{
    printf("Module 7 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module8_handler(int event_id, int module_id)
{
    printf("Module 8 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module9_handler(int event_id, int module_id)
{
    printf("Module 9 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module10_handler(int event_id, int module_id)
{
    printf("Module 10 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module11_handler(int event_id, int module_id)
{
    printf("Module 11 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module12_handler(int event_id, int module_id)
{
    printf("Module 12 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module13_handler(int event_id, int module_id)
{
    printf("Module 13 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module14_handler(int event_id, int module_id)
{
    printf("Module 14 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module15_handler(int event_id, int module_id)
{
    printf("Module 15 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module16_handler(int event_id, int module_id)
{
    printf("Module 16 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module17_handler(int event_id, int module_id)
{
    printf("Module 17 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module18_handler(int event_id, int module_id)
{
    printf("Module 18 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module19_handler(int event_id, int module_id)
{
    printf("Module 19 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

void module20_handler(int event_id, int module_id)
{
    printf("Module 20 Handler: Event ID = %d, Module ID = %d\n", event_id, module_id);
}

int main()
{
    int choice, module_id, event_id, num_events;
    int event_ids[MAX_EVENTS];

    initialize_event_manager();

    while (1)
    {
        printf("\nEvent Manager Menu:\n");
        printf("1. Register Module for Events\n");
        printf("2. Display Modules for an Event\n");
        printf("3. Trigger an Event\n");
        printf("4. Delete Module from an Event\n");
        printf("5. Update Module Registration\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear the input buffer
            continue;
        }

        switch (choice)
        {
        case 1: // Register Module
            printf("Enter Module ID (1-20): ");
            if (scanf("%d", &module_id) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }
            if (module_id < 1 || module_id > 20)
            {
                printf("Error: Module ID must be between 1 and 20!\n");
                break;
            }
            printf("Enter number of events to register for: ");
            if (scanf("%d", &num_events) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }

            if (num_events > MAX_EVENTS)
            {
                printf("Error: Number of events exceeds limit!\n");
                break;
            }

            printf("Enter Event IDs: ");
            for (int i = 0; i < num_events; i++)
            {
                if (scanf("%d", &event_ids[i]) != 1)
                {
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n')
                        ; // Clear the input buffer
                    break;
                }
            }

            // Register the appropriate handler based on module_id
            switch (module_id)
            {
            case 1:
                register_module_for_events(module_id, module1_handler, event_ids, num_events);
                break;
            case 2:
                register_module_for_events(module_id, module2_handler, event_ids, num_events);
                break;
            case 3:
                register_module_for_events(module_id, module3_handler, event_ids, num_events);
                break;
            case 4:
                register_module_for_events(module_id, module4_handler, event_ids, num_events);
                break;
            case 5:
                register_module_for_events(module_id, module5_handler, event_ids, num_events);
                break;
            case 6:
                register_module_for_events(module_id, module6_handler, event_ids, num_events);
                break;
            case 7:
                register_module_for_events(module_id, module7_handler, event_ids, num_events);
                break;
            case 8:
                register_module_for_events(module_id, module8_handler, event_ids, num_events);
                break;
            case 9:
                register_module_for_events(module_id, module9_handler, event_ids, num_events);
                break;
            case 10:
                register_module_for_events(module_id, module10_handler, event_ids, num_events);
                break;
            case 11:
                register_module_for_events(module_id, module11_handler, event_ids, num_events);
                break;
            case 12:
                register_module_for_events(module_id, module12_handler, event_ids, num_events);
                break;
            case 13:
                register_module_for_events(module_id, module13_handler, event_ids, num_events);
                break;
            case 14:
                register_module_for_events(module_id, module14_handler, event_ids, num_events);
                break;
            case 15:
                register_module_for_events(module_id, module15_handler, event_ids, num_events);
                break;
            case 16:
                register_module_for_events(module_id, module16_handler, event_ids, num_events);
                break;
            case 17:
                register_module_for_events(module_id, module17_handler, event_ids, num_events);
                break;
            case 18:
                register_module_for_events(module_id, module18_handler, event_ids, num_events);
                break;
            case 19:
                register_module_for_events(module_id, module19_handler, event_ids, num_events);
                break;
            case 20:
                register_module_for_events(module_id, module20_handler, event_ids, num_events);
                break;
            default:
                printf("Invalid Module ID!\n");
                break;
            }
            break;

        case 2: // Display Modules for a Specific Event
            printf("Enter Event ID: ");
            if (scanf("%d", &event_id) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }
            display_modules_for_event(event_id);
            break;

        case 3: // Trigger an Event
            printf("Enter Event ID to trigger: ");
            if (scanf("%d", &event_id) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }
            trigger_event(event_id);
            break;

        case 4: // Delete Module from an Event
            printf("Enter Event ID: ");
            if (scanf("%d", &event_id) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }
            printf("Enter Module ID to delete: ");
            if (scanf("%d", &module_id) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }
            delete_module_from_event(event_id, module_id);
            break;

        case 5: // Update Module Registration
            printf("Enter Module ID to update (1-20): ");
            if (scanf("%d", &module_id) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }
            if (module_id < 1 || module_id > 20)
            {
                printf("Error: Module ID must be between 1 and 20!\n");
                break;
            }

            // Step 1: Remove the module from specific events
            printf("Enter number of events to remove: ");
            if (scanf("%d", &num_events) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }

            if (num_events > MAX_EVENTS)
            {
                printf("Error: Number of events exceeds limit!\n");
                break;
            }

            printf("Enter Event IDs to remove: ");
            for (int i = 0; i < num_events; i++)
            {
                if (scanf("%d", &event_ids[i]) != 1)
                {
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n')
                        ; // Clear the input buffer
                    break;
                }
                // Remove the module from the specified event
                delete_module_from_event(event_ids[i], module_id);
            }

            // Step 2: Add the module to new events
            printf("Enter number of new events to add: ");
            if (scanf("%d", &num_events) != 1)
            {
                printf("Invalid input! Please enter a number.\n");
                while (getchar() != '\n')
                    ; // Clear the input buffer
                break;
            }

            if (num_events > MAX_EVENTS)
            {
                printf("Error: Number of events exceeds limit!\n");
                break;
            }

            printf("Enter new Event IDs to add: ");
            for (int i = 0; i < num_events; i++)
            {
                if (scanf("%d", &event_ids[i]) != 1)
                {
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n')
                        ; // Clear the input buffer
                    break;
                }
            }

            // Register the module with the new event set using the correct handler
            switch (module_id)
            {
            case 1:
                register_module_for_events(module_id, module1_handler, event_ids, num_events);
                break;
            case 2:
                register_module_for_events(module_id, module2_handler, event_ids, num_events);
                break;
            case 3:
                register_module_for_events(module_id, module3_handler, event_ids, num_events);
                break;
            case 4:
                register_module_for_events(module_id, module4_handler, event_ids, num_events);
                break;
            case 5:
                register_module_for_events(module_id, module5_handler, event_ids, num_events);
                break;
            case 6:
                register_module_for_events(module_id, module6_handler, event_ids, num_events);
                break;
            case 7:
                register_module_for_events(module_id, module7_handler, event_ids, num_events);
                break;
            case 8:
                register_module_for_events(module_id, module8_handler, event_ids, num_events);
                break;
            case 9:
                register_module_for_events(module_id, module9_handler, event_ids, num_events);
                break;
            case 10:
                register_module_for_events(module_id, module10_handler, event_ids, num_events);
                break;
            case 11:
                register_module_for_events(module_id, module11_handler, event_ids, num_events);
                break;
            case 12:
                register_module_for_events(module_id, module12_handler, event_ids, num_events);
                break;
            case 13:
                register_module_for_events(module_id, module13_handler, event_ids, num_events);
                break;
            case 14:
                register_module_for_events(module_id, module14_handler, event_ids, num_events);
                break;
            case 15:
                register_module_for_events(module_id, module15_handler, event_ids, num_events);
                break;
            case 16:
                register_module_for_events(module_id, module16_handler, event_ids, num_events);
                break;
            case 17:
                register_module_for_events(module_id, module17_handler, event_ids, num_events);
                break;
            case 18:
                register_module_for_events(module_id, module18_handler, event_ids, num_events);
                break;
            case 19:
                register_module_for_events(module_id, module19_handler, event_ids, num_events);
                break;
            case 20:
                register_module_for_events(module_id, module20_handler, event_ids, num_events);
                break;
            default:
                printf("Invalid Module ID!\n");
                break;
            }
            printf("Module %d updated with new event registrations.\n", module_id);
            break;
        case 6: // Exit
            printf("Exiting Event Manager...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}