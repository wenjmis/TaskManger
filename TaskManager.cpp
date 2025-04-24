#include "TaskManager.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

TaskManager::TaskManager() : nextId(1) {}

void TaskManager::addTask(const std::string& title, const std::string& description) {
    tasks.emplace_back(nextId++, title, description);
}

bool TaskManager::removeTask(int id) {
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->getId() == id) {
            tasks.erase(it);
            return true;
        }
    }
    return false;
}

void TaskManager::listTasks() const {
    for (const auto& task : tasks) {
        std::cout << task.toString() << std::endl;
    }
}

void TaskManager::saveToFile(const std::string& filename) const {
    std::ofstream outFile(filename);
    for (const auto& task : tasks) {
        outFile << task.getId() << "|" << task.getTitle() << "|" << task.getDescription() << "\n";
    }
}

void TaskManager::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string line;
    tasks.clear();
    nextId = 1;

    while (std::getline(inFile, line)) {
        std::istringstream iss(line);
        std::string idStr, title, desc;
        if (std::getline(iss, idStr, '|') &&
            std::getline(iss, title, '|') &&
            std::getline(iss, desc)) {
            int id = std::stoi(idStr);
            tasks.emplace_back(id, title, desc);
            if (id >= nextId) nextId = id + 1;
        }
    }
}
