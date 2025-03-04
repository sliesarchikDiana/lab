#ifndef BLOCKBUSTER_H
#define BLOCKBUSTER_H
#include <string>
#include <iostream>
//------------------------------------------------//
class Blockbuster
{
public:
    std::string title;
    int runningTime;
    int budget;
    std::string director;
    std::string plot;
//------------------------------------------------//
    Blockbuster() : title("movie title"), runningTime(100), budget(40), director("unknown"), plot("plot") {}
//------------------------------------------------//
    Blockbuster(std::string title, int runningTime, int budget, std::string dir, std::string plot)
        : title(title), runningTime(runningTime), budget(budget), director(dir), plot(plot) {}
//------------------------------------------------//
    void displayInfo() const {
        std::cout << "Movie: " << title << "\n";
        std::cout << "Directed by: " << director << "\n";
        std::cout << "Runtime: " << runningTime << " mins\n";
        std::cout << "Budget: " << budget << "\n";
        std::cout << "Plot: " << plot << "\n";
    };
//------------------------------------------------//
    ~Blockbuster(){}
};
#endif // BLOCKBUSTER_H