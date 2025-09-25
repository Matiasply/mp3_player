#pragma once
#include "Track.h"
#include <vector>
#include <memory>
#include <string>

/**
 * @class Playlist
 * @brief Representa uma playlist de faixas de áudio.
 *
 * Esta classe gerencia uma coleção de faixas de áudio (Track), permitindo adicionar,
 * remover e listar faixas. Também oferece funcionalidade para salvar e carregar
 * playlists de arquivos.
 *
 */
class Playlist {
private:
    std::string name;
    std::vector<std::shared_ptr<Track>> tracks; // Lista de músicas na playlist

public:
    Playlist(const std::string& name);

    void addTrack(std::shared_ptr<Track> track);
    void removeTrack(const std::string& title);
    std::shared_ptr<Track> getTrack(size_t index) const;

    void listTracks() const;
    std::string getName() const;

    // persistência (JSON será feito depois)
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};
