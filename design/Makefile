# Makefile para o projeto MP3Player
# Compila todos os arquivos .cpp e gera o executável mp3player

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
SRC = main.cpp Track.cpp Playlist.cpp Equalizer.cpp MP3Player.cpp FileManager.cpp CLI.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = Track.h Playlist.h Equalizer.h MP3Player.h FileManager.h CLI.h MediaPlayer.h

# Nome do executável
TARGET = mp3player

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
