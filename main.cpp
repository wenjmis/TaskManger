#include "TaskManager.hpp"
#include <iostream>

int main() {
    TaskManager manager;
    manager.loadFromFile("tasks.txt");

    int choice;
    while (true) {
        std::cout << "\n1. Add Task\n2. Remove Task\n3. List Tasks\n4. Save\n5. Exit\n> ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string title, description;
            std::cout << "Title: ";
            std::getline(std::cin, title);
            std::cout << "Description: ";
            std::getline(std::cin, description);
            manager.addTask(title, description);
        } else if (choice == 2) {
            int id;
            std::cout << "Enter Task ID to remove: ";
            std::cin >> id;
            if (!manager.removeTask(id)) {
                std::cout << "Task not found.\n";
            }
        } else if (choice == 3) {
            manager.listTasks();
        } else if (choice == 4) {
            manager.saveToFile("tasks.txt");
        } else if (choice == 5) {
            manager.saveToFile("tasks.txt");
            break;
        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}
