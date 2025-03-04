#ifndef SCIFI_H
#define SCIFI_H
#include <string>
//------------------------------------------------//
class SciFi {
public:
    std::string title;
    int runningTime;
    int budget;
    std::string director;
    std::string plot;
//------------------------------------------------//
    SciFi() : title("movie title"), runningTime(100), budget(40), director("unknown"), plot("plot") {}
//------------------------------------------------//
    SciFi(std::string title, int runningTime, int budget, std::string director, std::string plot)
        : title(title), runningTime(runningTime), budget(budget), director(director), plot(plot) {}
//------------------------------------------------//
    void displayInfo() const {
        std::cout << "Movie: " << title << "\n";
        std::cout << "Directed by: " << director << "\n";
        std::cout << "Runtime: " << runningTime << " mins\n";
        std::cout << "Budget: " << budget << "\n";
        std::cout << "Plot: " << plot << "\n";
    };
//------------------------------------------------//
    ~SciFi() {}
};
#endif // SCIFI_H