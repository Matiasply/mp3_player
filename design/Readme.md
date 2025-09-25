[Projeto MP3Player - Design Básico]

## Visão Geral

Este projeto implementa um sistema de reprodução de áudio MP3 com suporte a playlists, equalização e interface de linha de comando. O design é orientado a objetos, com cada classe responsável por uma parte específica da funcionalidade do programa.

## Estrutura das Classes

### 1. Track
Representa uma faixa de áudio, armazenando informações como caminho do arquivo, título, artista e duração. Permite comparar faixas e acessar seus dados.

### 2. Playlist
Gerencia uma coleção de faixas (`Track`). Permite adicionar, remover, listar faixas e acessar faixas individuais. Oferece métodos para salvar e carregar playlists de arquivos.

### 3. Equalizer
Controla as bandas de frequência de áudio (graves, médios, agudos). Permite ajustar e obter os valores de cada banda individualmente.

### 4. MediaPlayer
Interface abstrata que define os métodos básicos para um reprodutor de mídia: `play`, `pause`, `stop`, `seek` e `setVolume`. Serve como base para reprodutores específicos.

### 5. MP3Player
Classe principal do reprodutor de MP3. Herda de `MediaPlayer` e implementa seus métodos. Gerencia uma playlist, o índice da faixa atual, o equalizador e o volume. Permite manipular playlists e equalização durante a reprodução.

### 6. FileManager
Responsável por operações de gerenciamento de arquivos, como escanear diretórios e listar arquivos de áudio. Fornece métodos estáticos para facilitar o acesso.

### 7. CLI
Interface de linha de comando para interação com o usuário. Permite executar comandos, manipular playlists e controlar o MP3Player de forma interativa.

## Relacionamento entre as Classes

- `MP3Player` herda de `MediaPlayer` e implementa seus métodos.
- `MP3Player` possui uma `Playlist` (compartilhada via `std::shared_ptr`), um `Equalizer` e controla o volume.
- `Playlist` contém múltiplos objetos `Track` (armazenados como `std::shared_ptr<Track>`).
- `CLI` interage diretamente com o `MP3Player` e com as playlists, permitindo ao usuário controlar o sistema.
- `FileManager` auxilia na manipulação de arquivos de áudio e playlists, sendo utilizado por outras classes quando necessário.

## Diagrama Simplificado

```
+-----------+        +-----------+        +-----------+
|  Track    |        | Equalizer |        |FileManager|
+-----------+        +-----------+        +-----------+
	^                    ^                    ^
	|                    |                    |
+-----------+        +-----------+        +-----------+
| Playlist  |        |MediaPlayer|        |   CLI     |
+-----------+        +-----------+        +-----------+
	^                    ^
	|                    |
+----------------+
|   MP3Player    |
+----------------+
```

## Como Usar

O usuário interage com o sistema através da interface de linha de comando (`CLI`), podendo criar e manipular playlists, ajustar o equalizador e controlar a reprodução das faixas MP3.

## Observações
- O design utiliza smart pointers (`std::shared_ptr`) para facilitar o gerenciamento de memória.
- A persistência de playlists pode ser expandida para formatos como JSON.
- O sistema é modular, facilitando futuras expansões (ex: suporte a outros formatos de áudio).
