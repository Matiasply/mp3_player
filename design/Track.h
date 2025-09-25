#pragma once
#include <string>

/**
 * @class Track
 * @brief Representa uma faixa de áudio com informações associadas.
 *
 * Esta classe armazena informações sobre uma faixa de áudio, incluindo o caminho do arquivo,
 * título, artista e duração em segundos. Fornece métodos para acessar esses dados e operadores
 * para comparação entre faixas.
 *
 */
class Track {
private:
    std::string filePath;
    std::string title;
    std::string artist;
    double duration; // segundos

public:
    Track(const std::string& path, const std::string& title, const std::string& artist, double duration);

    std::string getFilePath() const;
    std::string getTitle() const;
    std::string getArtist() const;
    double getDuration() const;

    bool operator<(const Track& other) const; // comparar por duração
    bool operator==(const Track& other) const;
};
