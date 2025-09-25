#include "MP3Player.h"

MP3Player::MP3Player() : playlist(nullptr), currentTrackIndex(0), volume(1.0f) {}

void MP3Player::setPlaylist(std::shared_ptr<Playlist> pl) { (void)pl; }
void MP3Player::play() {}
void MP3Player::pause() {}
void MP3Player::stop() {}
void MP3Player::seek(double position) { (void)position; }
void MP3Player::setVolume(float volume) { (void)volume; }
Equalizer& MP3Player::getEqualizer() { static Equalizer eq; return eq; }
