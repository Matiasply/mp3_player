#pragma once

/**
 * @class Equalizer
 * @brief Classe que representa um equalizador de áudio com controle de graves, médios e agudos.
 *
 * Esta classe permite ajustar e obter os valores das bandas de frequência de um equalizador:
 * - low (graves)
 * - mid (médios)
 * - high (agudos)
 *
 * Métodos públicos permitem configurar e acessar cada banda individualmente.
 */
class Equalizer {
private:
    float low;   // graves
    float mid;   // médios
    float high;  // agudos

public:
    Equalizer();

    void setLow(float value);
    void setMid(float value);
    void setHigh(float value);

    float getLow() const;
    float getMid() const;
    float getHigh() const;
};
