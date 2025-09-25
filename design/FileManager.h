#pragma once
#include <string>
#include <vector>

/**
 * @class FileManager
 * @brief Classe responsável por operações de gerenciamento de arquivos.
 *
 * Esta classe fornece métodos estáticos para escanear diretórios e listar arquivos de áudio.
 */
class FileManager {
public:
    static std::vector<std::string> scanDirectory(const std::string& path);
};
