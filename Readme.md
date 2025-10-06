# 🎵 MP3 Player - Projeto Final POO

Um reprodutor de MP3 completo desenvolvido em C++ com Qt, criado como projeto final da disciplina de Programação Orientada a Objetos (POO). O projeto demonstra a aplicação de conceitos de OOP na construção de uma aplicação de mídia funcional e robusta.

## 📋 Funcionalidades

### 🎛️ Reprodução de Áudio
- **Reprodução de arquivos MP3** com suporte completo
- **Controles básicos**: Play, Pause, Stop
- **Navegação**: Próxima/Anterior faixa
- **Seek**: Controle de posição na música
- **Controle de volume** com slider

### 🎵 Gerenciamento de Playlists
- **Criação e edição** de playlists personalizadas
- **Adicionar/Remover** faixas dinamicamente
- **Salvar/Carregar** playlists de arquivos
- **Visualização** de informações das faixas (título, artista, duração)

### 🎚️ Equalização de Áudio
- **Equalizer de 3 bandas**: Graves, Médios, Agudos
- **Processamento em tempo real** do áudio
- **Configurações personalizáveis** para cada banda

### 💻 Interfaces Duplas
- **Interface Gráfica (GUI)**: Moderna e intuitiva com Qt Widgets
- **Interface de Linha de Comando (CLI)**: Para usuários avançados
- **Suporte a argumentos**: `--cli` ou `-c` para modo terminal

### 📁 Gerenciamento de Arquivos
- **Exploração de diretórios** para encontrar arquivos MP3
- **Metadados**: Extração automática de informações das músicas
- **Filtros de arquivo**: Suporte específico para formato MP3

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C++17
- **Framework**: Qt 6.x
  - Qt Core (funcionalidades base)
  - Qt Multimedia (reprodução de áudio)
  - Qt Widgets (interface gráfica)
- **Build System**: CMake 3.14+
- **Arquitetura**: Orientada a Objetos com design patterns

## 🏗️ Arquitetura do Projeto

### Principais Classes

#### 🎵 `Track`
Representa uma faixa de áudio individual com metadados (título, artista, duração, caminho).

#### 📃 `Playlist` 
Gerencia coleções de faixas com operações de adição, remoção e persistência.

#### 🎚️ `Equalizer`
Controla bandas de frequência (graves, médios, agudos) com processamento em tempo real.

#### 🎛️ `MediaPlayer` (Interface)
Define contratos básicos para reprodutores de mídia (play, pause, stop, seek, volume).

#### 🎧 `MP3Player`
Implementação principal do reprodutor, herda de `MediaPlayer` e integra todas as funcionalidades.

#### 📁 `FileManager`
Responsável por operações de sistema de arquivos e descoberta de mídia.

#### 💻 `CLI`
Interface de linha de comando para interação textual com o sistema.

#### 🖥️ `MainWindow`
Interface gráfica principal com todos os controles visuais.

## 🚀 Como Executar

### Pré-requisitos
- **Qt 6.x** instalado
- **CMake 3.14+**
- **Compilador C++17** (GCC, MSVC, Clang)
- **Windows** (configuração atual)

### Compilação

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/Matiasply/mp3_player.git
   cd mp3_player/design
   ```

2. **Configure o build**:
   ```bash
   mkdir build
   cd build
   cmake ..
   ```

3. **Compile o projeto**:
   ```bash
   cmake --build .
   ```

### Execução

#### Interface Gráfica (padrão)
```bash
./mp3player.exe
```

#### Interface de Linha de Comando
```bash
./mp3player_cli.exe
# ou
./mp3player.exe --cli
```

### Scripts de Build (Windows)
O projeto inclui scripts batch para facilitar a compilação:
- `build_gui.bat` - Compila versão com interface gráfica
- `build_simple.bat` - Compila versão simplificada
- `run.bat` - Executa a aplicação

## 📂 Estrutura do Projeto

```
📦 Projeto Final/
├── 📁 design/                    # Código fonte principal
│   ├── 🎵 main.cpp              # Ponto de entrada principal
│   ├── 🎵 main_gui.cpp          # Entrada para GUI
│   ├── 🎵 main_cli.cpp          # Entrada para CLI
│   ├── 🎧 MP3Player.{h,cpp}     # Classe principal do player
│   ├── 🎵 Track.{h,cpp}         # Representação de faixas
│   ├── 📃 Playlist.{h,cpp}      # Gerenciamento de playlists
│   ├── 🎚️ Equalizer.{h,cpp}     # Sistema de equalização
│   ├── 💻 CLI.{h,cpp}           # Interface de linha de comando
│   ├── 🖥️ MainWindow.{h,cpp}    # Interface gráfica
│   ├── 📁 FileManager.{h,cpp}   # Gerenciamento de arquivos
│   ├── 🎛️ MediaPlayer.h         # Interface abstrata
│   ├── 🎨 style.qss             # Estilos da interface
│   ├── 🔧 CMakeLists.txt        # Configuração de build
│   └── 📁 build/                # Arquivos compilados e executáveis
├── 📄 README.md                 # Este arquivo
├── 📊 uml_classes.png           # Diagrama UML das classes
├── 📋 Especificação_do_Trabalho_Final.pdf
└── 📝 Relatório de design.docx
```

## 🎯 Conceitos de POO Aplicados

### ✅ Encapsulamento
- **Atributos privados** com getters/setters apropriados
- **Ocultação de implementação** das funcionalidades internas

### ✅ Herança
- `MP3Player` herda de `MediaPlayer`
- **Especialização** de funcionalidades base

### ✅ Polimorfismo
- **Interface `MediaPlayer`** permite diferentes implementações
- **Métodos virtuais** para comportamentos específicos

### ✅ Abstração
- **Interfaces bem definidas** entre componentes
- **Separação de responsabilidades** clara

### ✅ Composição
- `MP3Player` **compõe** `Playlist`, `Equalizer` e `Track`
- **Relacionamentos "has-a"** bem estruturados

## 🎮 Como Usar

### Interface Gráfica
1. **Execute** o `mp3player.exe`
2. **Abra arquivos MP3** através do menu File
3. **Controle a reprodução** com os botões play/pause/stop
4. **Ajuste o volume** com o slider
5. **Configure o equalizer** conforme preferência
6. **Gerencie playlists** adicionando/removendo faixas

### Interface CLI
1. **Execute** com `mp3player.exe --cli`
2. **Digite comandos** como:
   - `play [arquivo]` - Reproduzir música
   - `pause` - Pausar reprodução
   - `stop` - Parar reprodução
   - `volume [0-100]` - Ajustar volume
   - `playlist add [arquivo]` - Adicionar à playlist
   - `equalizer bass [valor]` - Ajustar graves
   - `help` - Ver todos os comandos

## 🔬 Detalhes Técnicos

### Processamento de Áudio
- **Qt Multimedia** para decodificação MP3
- **Processamento em tempo real** com `QAudioSink`
- **Pipeline de áudio** customizável para equalização

### Gerenciamento de Estado
- **Padrão Observer** para atualizações de interface
- **Estado centralizado** no `MP3Player`
- **Sincronização** entre GUI e engine de áudio

### Persistência
- **Formato JSON** para salvar playlists
- **Metadados** extraídos automaticamente
- **Configurações** salvas entre sessões

## 🤝 Contribuição

Este é um projeto acadêmico, mas sugestões e melhorias são bem-vindas:

1. **Fork** o projeto
2. **Crie** uma branch para sua feature (`git checkout -b feature/AmazingFeature`)
3. **Commit** suas mudanças (`git commit -m 'Add some AmazingFeature'`)
4. **Push** para a branch (`git push origin feature/AmazingFeature`)
5. **Abra** um Pull Request

## 📚 Referências

- [Qt Documentation](https://doc.qt.io/)
- [Qt Multimedia](https://doc.qt.io/qt-6/qtmultimedia-index.html)
- [CMake Documentation](https://cmake.org/documentation/)
- Conceitos de POO aplicados em C++

## 📄 Licença

Este projeto foi desenvolvido para fins educacionais como parte do curso de Programação Orientada a Objetos.

---
**Desenvolvido com ❤️ para a disciplina de POO**

## Licença

Este projeto está sob a licença MIT.