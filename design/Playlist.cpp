#include "Playlist.h"

Playlist::Playlist(const std::string& name) : name(name) {}

void Playlist::addTrack(std::shared_ptr<Track> track) { (void)track; }
void Playlist::removeTrack(const std::string& title) { (void)title; }
std::shared_ptr<Track> Playlist::getTrack(size_t index) const { (void)index; return nullptr; }
void Playlist::listTracks() const {}
std::string Playlist::getName() const { return ""; }
void Playlist::saveToFile(const std::string& filename) const { (void)filename; }
void Playlist::loadFromFile(const std::string& filename) { (void)filename; }
