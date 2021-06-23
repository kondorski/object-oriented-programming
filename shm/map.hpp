#include <vector>

class Island;

class Map {
private:
    Island* currentPosition_;
    std::vector<Island*> islands_;

public:
    Map(std::vector<Island*> islands, Island* currentPosition) {
        islands_.clear();
        islands_.insert(islands_.begin(), islands.begin(), islands.end());
        currentPosition_ = currentPosition;
    }
    std::vector<Island*> GetIslands() { return islands_; }
    Island* GetCurrentPosition() { return currentPosition_; }
    void SetCurrentPosition(Island* currentPosition) { currentPosition_ = currentPosition; }
};