const uint8_t FAThermometerFull14pt8bBitmaps[] PROGMEM = {
  0x07, 0x80, 0x7F, 0x81, 0x8E, 0x0F, 0xDC, 0x3F, 0x70, 0xFD, 0xC3, 0xF7,
  0x0F, 0xDC, 0x3F, 0x70, 0xFD, 0xC3, 0xF7, 0x0F, 0xDC, 0x3F, 0x70, 0xFD,
  0xC3, 0xF7, 0x0F, 0xDC, 0x7F, 0x71, 0xDC, 0xEE, 0xFB, 0xBB, 0xF7, 0xEF,
  0xDF, 0xBF, 0x7E, 0xFD, 0x9D, 0xEE, 0x78, 0x70, 0xFF, 0x80, 0xF8, 0x00 };

const GFXglyph FAThermometerFull14pt8bGlyphs[] PROGMEM = {
  {     0,  14,  27,  14,    0,  -23 } }; // 0xF2C7

const GFXfont FAThermometerFull14pt PROGMEM = {
  (uint8_t  *)FAThermometerFull14pt8bBitmaps,
  (GFXglyph *)FAThermometerFull14pt8bGlyphs,
  0x20, 0x20, 27 };

// Approx. 62 bytes
