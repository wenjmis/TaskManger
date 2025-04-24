#pragma once
#include <string>

class Task {
private:
    int id;
    std::string title;
    std::string description;

public:
    Task(int id, const std::string& title, const std::string& description);

    int getId() const;
    std::string getTitle() const;
    std::string getDescription() const;

    std::string toString() const;
};
