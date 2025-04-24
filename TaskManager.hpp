#pragma once
#include <vector>
#include <string>
#include "Task.hpp"

class TaskManager {
private:
    std::vector<Task> tasks;
    int nextId;

public:
    TaskManager();

    void addTask(const std::string& title, const std::string& description);
    bool removeTask(int id);
    void listTasks() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};
