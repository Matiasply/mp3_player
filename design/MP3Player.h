#pragma once
#include "MediaPlayer.h"
#include "Track.h"
#include "Equalizer.h"
#include "Playlist.h"
#include <memory>

/**
 * @class MP3Player
 * @brief Classe que representa um reprodutor de MP3, derivada de MediaPlayer.
 *
 * Esta classe gerencia a reprodução de faixas de áudio em formato MP3, permitindo
 * operações como play, pause, stop, seek e ajuste de volume. Também oferece suporte
 * a playlists e equalização de áudio.
 *
 * @details
 * - Utiliza uma playlist compartilhada para gerenciar as faixas.
 * - Permite manipulação do equalizador de áudio.
 * - Mantém o índice da faixa atual sendo reproduzida.
 *
 * @see MediaPlayer
 * @see Playlist
 * @see Equalizer
 */
class MP3Player : public MediaPlayer {
private:
    std::shared_ptr<Playlist> playlist; // Playlist atual
    int currentTrackIndex; // Índice da faixa atual na playlist
    Equalizer equalizer;
    float volume;

public:
    MP3Player();

    void setPlaylist(std::shared_ptr<Playlist> pl);
    void play() override;
    void pause() override;
    void stop() override;
    void seek(double position) override;
    void setVolume(float volume) override;

    Equalizer& getEqualizer();
};
