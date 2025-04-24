#include "Task.hpp"

Task::Task(int id, const std::string& title, const std::string& description)
    : id(id), title(title), description(description) {}

int Task::getId() const { return id; }
std::string Task::getTitle() const { return title; }
std::string Task::getDescription() const { return description; }

std::string Task::toString() const {
    return std::to_string(id) + ": " + title + " - " + description;
}
