cmake_minimum_required(VERSION 3.10)
project(MP3PlayerProject)

set(CMAKE_CXX_STANDARD 17)

# Adiciona todos os arquivos fonte
set(SOURCES
    main.cpp
    CLI.cpp
    Equalizer.cpp
    FileManager.cpp
    MP3Player.cpp
    Playlist.cpp
    Track.cpp
)

# Adiciona todos os headers (opcional, para IDEs)
set(HEADERS
    CLI.h
    Equalizer.h
    FileManager.h
    MediaPlayer.h
    MP3Player.h
    Playlist.h
    Track.h
)

add_executable(mp3player ${SOURCES} ${HEADERS})
