const uint8_t FATachometer14pt8bBitmaps[] PROGMEM = {
  0x00, 0x1F, 0xF0, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFC, 0x00,
  0x3F, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xF9, 0xFE, 0x0F,
  0xFF, 0xF1, 0xFC, 0x1F, 0xFF, 0xE7, 0xFC, 0x7F, 0xFF, 0x8F, 0xFC, 0xFF,
  0xFF, 0x1F, 0xF9, 0xFF, 0xFE, 0x7F, 0xF7, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF,
  0xF1, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFE,
  0x1F, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xE0, 0x3F, 0xFD, 0xFF, 0xC0,
  0x7F, 0xFB, 0xFF, 0x80, 0xFF, 0xE7, 0xFF, 0x83, 0xFF, 0xC7, 0xFF, 0x8F,
  0xFF, 0x07, 0xFF, 0xFF, 0xFC, 0x00 };

const GFXglyph FATachometer14pt8bGlyphs[] PROGMEM = {
  {     0,  31,  23,  31,    0,  -21 } }; // 0xF0E4

const GFXfont FATachometer14pt PROGMEM = {
  (uint8_t  *)FATachometer14pt8bBitmaps,
  (GFXglyph *)FATachometer14pt8bGlyphs,
  0x20, 0x20, 27 };

// Approx. 104 bytes
