#include "Equalizer.h"

Equalizer::Equalizer() : low(0), mid(0), high(0) {}

void Equalizer::setLow(float value) { (void)value; }
void Equalizer::setMid(float value) { (void)value; }
void Equalizer::setHigh(float value) { (void)value; }
float Equalizer::getLow() const { return 0.0f; }
float Equalizer::getMid() const { return 0.0f; }
float Equalizer::getHigh() const { return 0.0f; }
