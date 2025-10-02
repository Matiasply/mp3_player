# 🎵 MP3Player - Sistema de Reprodução de Áudio

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://www.cplusplus.com/)
[![Qt](https://img.shields.io/badge/Qt-6.9.3-green.svg)](https://www.qt.io/)
[![CMake](https://img.shields.io/badge/CMake-3.14+-orange.svg)](https://cmake.org/)
[![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)]()

## 📋 Visão Geral

Sistema completo de reprodução de áudio MP3 desenvolvido em C++ com Qt6, featuring:

- 🎵 **Reprodução de MP3/WAV/FLAC** com QMediaPlayer
- 📝 **Gerenciamento de Playlists** com persistência JSON
- 🎛️ **Equalização de Áudio** (Bass, Mid, Treble)
- 💻 **Interface CLI** interativa e completa
- 🔄 **Reprodução automática** de próximas faixas
- 📊 **Monitoramento de progresso** em tempo real

## 🚀 EXECUÇÃO RÁPIDA

**Você está na pasta build! Execute diretamente:**

```bash
# Execute o programa
.\mp3player.exe

# Ou se não funcionar:
./mp3player.exe
```

## 🧪 Guia de Testes CLI

### 🎯 Teste Básico - Primeira Execução

```bash
# 1. Execute o programa
.\mp3player.exe

# 2. Você verá o menu:
=== MP3Player CLI ===
1. Adicionar faixa
2. Listar faixas
3. Reproduzir
4. Pausar
5. Parar
6. Próxima faixa
7. Faixa anterior
8. Salvar playlist
9. Carregar playlist
0. Sair
Escolha uma opção: 
```

### 📝 Teste 1: Criação de Playlist

```bash
# 1. Adicionar primeira faixa
Escolha: 1
Caminho do arquivo: C:\Users\SEU_USUARIO\Downloads\musica1.mp3
Título: Minha Música 1
Artista: Artista Teste
Duração (segundos): 180

# 2. Adicionar segunda faixa
Escolha: 1
Caminho do arquivo: C:\Users\SEU_USUARIO\Downloads\musica2.mp3
Título: Minha Música 2
Artista: Artista Teste 2
Duração (segundos): 240

# 3. Listar faixas para verificar
Escolha: 2
```

**Resultado Esperado:**
```
Playlist: Minha Playlist
1. Minha Música 1 - Artista Teste (3:00)
2. Minha Música 2 - Artista Teste 2 (4:00)
```

### 🎵 Teste 2: Reprodução de Áudio

```bash
# 1. Reproduzir primeira faixa
Escolha: 3

# Logs esperados:
=== INICIALIZANDO AUDIO ===
Dispositivos de áudio disponíveis: X
  - Speakers (Realtek(R) Audio)
  - [outros dispositivos...]
Carregando novo arquivo: "C:\...\musica1.mp3"
Status da mídia mudou para: LoadedMedia
  -> MÍDIA CARREGADA
  -> REPRODUZINDO
🎵 PROGRESSO: 2000ms / 180000ms | Volume: 1 | Mutado: false
```

### ⏯️ Teste 3: Controles de Reprodução

```bash
# 1. Pausar música
Escolha: 4
# Log: "Player pausado"

# 2. Retomar reprodução
Escolha: 3
# Log: "Mídia já carregada - Reproduzindo imediatamente"

# 3. Parar completamente
Escolha: 5
# Log: "Player parado"
```

### 🔄 Teste 4: Navegação entre Faixas

```bash
# 1. Tocar próxima faixa
Escolha: 6
# Logs:
Tocando próxima faixa - Índice: 1
Carregando novo arquivo: "...\musica2.mp3"

# 2. Voltar para faixa anterior
Escolha: 7
# Logs:
Tocando faixa anterior - Índice: 0
```

### 💾 Teste 5: Persistência de Playlist

```bash
# 1. Salvar playlist
Escolha: 8
Nome do arquivo para salvar: minha_playlist.json
# Log: "Playlist salva."

# 2. Verificar arquivo criado
# Deve existir: minha_playlist.json na pasta build

# 3. Sair e reabrir programa
Escolha: 0

# 4. Reabrir programa e carregar
.\mp3player.exe
Escolha: 9
Nome do arquivo para carregar: minha_playlist.json
# Log: "Playlist carregada."

# 5. Verificar se carregou
Escolha: 2
```

### 🔧 Teste 6: Diagnóstico de Problemas

Se o áudio não funcionar, verifique os logs:

```bash
# Logs importantes a observar:
=== INICIALIZANDO AUDIO ===
Volume inicial: 1
AudioOutput criado: true
Dispositivos de áudio disponíveis: [número]
Dispositivo padrão: [nome do dispositivo]
AudioOutput está mutado: false

# Durante reprodução:
🎵 PROGRESSO: [position]ms / [duration]ms | Volume: 1 | Mutado: false
```

**Problemas Comuns:**

| Problema | Sintoma | Solução |
|----------|---------|---------|
| **Sem áudio** | Progresso não avança | Verificar drivers de áudio |
| **Arquivo não encontra** | "Erro: Caminho do arquivo está vazio" | Usar caminho absoluto completo |
| **Volume baixo** | "Volume: 0" nos logs | Sistema pode estar mutado |
| **Codec erro** | "MÍDIA INVÁLIDA" | Arquivo MP3 corrompido |
| **DLL não encontrada** | Erro de execução | Certifique-se de estar no Qt Command Prompt |

## 🎯 TESTE RÁPIDO COM EXEMPLO

Para um teste rápido, use este fluxo:

```bash
# 1. Execute
.\mp3player.exe

# 2. Adicione uma música (opção 1)
# Use o caminho completo para um MP3 existente:
C:\Users\[SEU_USUARIO]\Downloads\[SUA_MUSICA].mp3

# 3. Liste faixas (opção 2)
# 4. Reproduza (opção 3)
# 5. Teste controles (opções 4, 5, 6, 7)
```

## 🏗️ Arquitetura do Sistema

### Estrutura das Classes

```
┌─────────────┐    ┌─────────────┐    ┌─────────────┐
│    Track    │    │  Equalizer  │    │ FileManager │
└─────────────┘    └─────────────┘    └─────────────┘
       ▲                   ▲                   ▲
       │                   │                   │
┌─────────────┐    ┌─────────────┐    ┌─────────────┐
│  Playlist   │    │ MediaPlayer │    │    CLI      │
└─────────────┘    └─────────────┘    └─────────────┘
       ▲                   ▲                   │
       │                   │                   │
       └───────────┬───────┘                   │
                   ▼                           ▼
            ┌─────────────┐              ┌─────────────┐
            │  MP3Player  │◄─────────────┤ Application │
            └─────────────┘              └─────────────┘
```

### 📦 Componentes Principais

| Classe | Responsabilidade |
|--------|------------------|
| **Track** | Representa uma faixa de áudio com metadata |
| **Playlist** | Gerencia coleção de faixas com persistência JSON |
| **Equalizer** | Controle de bandas de frequência (Bass/Mid/Treble) |
| **MediaPlayer** | Interface abstrata para reprodutores de mídia |
| **MP3Player** | Implementação Qt6 do reprodutor com QMediaPlayer |
| **FileManager** | Operações de arquivo e scanning de diretórios |
| **CLI** | Interface de linha de comando interativa |

## 📊 Funcionalidades Avançadas

### 🔄 Reprodução Automática
- ✅ **Auto-play** quando carrega nova faixa
- ✅ **Próxima faixa automática** ao fim da música
- ✅ **Detecção de fim de playlist**

### 📈 Monitoramento em Tempo Real
- ✅ **Progresso a cada 2 segundos**
- ✅ **Status de volume e mute**
- ✅ **Informações de dispositivo**
- ✅ **Debug detalhado de estados**

## 🐛 Troubleshooting Rápido

### ❌ "mp3player.exe não é reconhecido"
**Solução**: Certifique-se de estar na pasta build ou use `.\mp3player.exe`

### ❌ "DLL não encontrada"
**Solução**: Execute a partir do Qt Command Prompt

### ❌ "Sem áudio"
**Solução**: 
1. Verifique se o arquivo MP3 existe e está acessível
2. Confirme que o Windows não está mutado
3. Observe os logs de progresso

### ❌ "Arquivo não encontrado"
**Solução**: Use caminho absoluto completo com barras duplas:
```
C:\\Users\\SeuNome\\Downloads\\musica.mp3
```

## 🚧 Para Desenvolvedores

### Recompilar
```bash
# Voltar ao diretório pai
cd ..

# Recompilar
cmake --build build

# Ou limpar e recompilar
cmake --build build --clean-first
```

### Estrutura de Arquivos do Build
```
build/
├── mp3player.exe         # Executável principal
├── *.dll                 # Bibliotecas Qt necessárias
├── platforms/            # Plugins de plataforma Qt
├── multimedia/           # Plugins de multimídia
├── CMakeFiles/           # Arquivos de build CMake
└── README.md            # Este arquivo
```

## 📄 Arquivos de Teste

Os arquivos de playlist (.json) serão salvos nesta pasta build. Exemplo de conteúdo:

```json
{
  "name": "Minha Playlist",
  "tracks": [
    {
      "artist": "Artista Teste",
      "duration": 180.0,
      "filePath": "C:\\Users\\user\\Downloads\\musica1.mp3",
      "title": "Minha Música 1"
    }
  ]
}
```

---

🎵 **Execute `.\mp3player.exe` e divirta-se!**

📧 **Suporte**: Consulte os logs detalhados para diagnóstico de problemas.