#pragma once
#include <string>
#include <memory>

/**
 * @brief Interface abstrata para um reprodutor de mídia.
 *
 * Esta classe define a interface básica para um reprodutor de mídia, 
 * fornecendo métodos virtuais puros para controlar a reprodução, 
 * pausa, parada, busca e ajuste de volume.
 */
class MediaPlayer {
public:
    virtual ~MediaPlayer() = default;

    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;
    virtual void seek(double position) = 0;
    virtual void setVolume(float volume) = 0;
};
