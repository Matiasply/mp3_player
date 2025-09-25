#include "Track.h"

Track::Track(const std::string& path, const std::string& title, const std::string& artist, double duration)
    : filePath(path), title(title), artist(artist), duration(duration) {}


std::string Track::getFilePath() const { return ""; }
std::string Track::getTitle() const { return ""; }
std::string Track::getArtist() const { return ""; }
double Track::getDuration() const { return 0.0; }

bool Track::operator<(const Track& other) const {
    (void)other; return false; }
bool Track::operator==(const Track& other) const {  
    (void)other; return false; }
