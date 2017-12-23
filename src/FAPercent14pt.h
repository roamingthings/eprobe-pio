const uint8_t FAPercent14pt8bBitmaps[] PROGMEM = {
  0x0F, 0x00, 0x0F, 0x3F, 0xC0, 0x1F, 0x7F, 0xE0, 0x3E, 0x70, 0xE0, 0x3E,
  0xE0, 0x70, 0x7C, 0xE0, 0x70, 0xF8, 0xE0, 0x71, 0xF0, 0xE0, 0x73, 0xE0,
  0x70, 0xE3, 0xE0, 0x7F, 0xE7, 0xC0, 0x3F, 0xCF, 0x80, 0x0F, 0x1F, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xF8, 0x00,
  0x01, 0xF0, 0xF0, 0x03, 0xE3, 0xFC, 0x07, 0xE7, 0xFE, 0x07, 0xCF, 0x8F,
  0x0F, 0x8F, 0x07, 0x1F, 0x0F, 0x07, 0x3E, 0x0F, 0x07, 0x7E, 0x0F, 0x8F,
  0x7C, 0x07, 0xFE, 0xF8, 0x03, 0xFC, 0xF0, 0x00, 0xF0 };

const GFXglyph FAPercent14pt8bGlyphs[] PROGMEM = {
  {     0,  24,  27,  24,    0,  -23 } }; // 0xF295

const GFXfont FAPercent14pt PROGMEM = {
  (uint8_t  *)FAPercent14pt8bBitmaps,
  (GFXglyph *)FAPercent14pt8bGlyphs,
  0x20, 0x20, 27 };

// Approx. 95 bytes