#pragma once
#include "Playlist.h"
#include "MP3Player.h"
#include <memory>

/**
 * @class CLI
 * @brief Classe responsável por fornecer uma interface de linha de comando (CLI) para interação com o usuário.
 *
 * Esta classe contém métodos estáticos para executar a interface de linha de comando,
 * permitindo que o usuário interaja com o sistema de playlists e o MP3Player.
 */
class CLI {
public:
    static void run();
};
