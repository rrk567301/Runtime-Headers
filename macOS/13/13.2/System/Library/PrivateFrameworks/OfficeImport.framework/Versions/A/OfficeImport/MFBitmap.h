@class NSMutableData;

@interface MFBitmap : NSObject {
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    BOOL m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)isFlipped;
- (const char *)pixelData;
- (BOOL)parseHeader:(const char *)a0 in_headerSize:(unsigned int)a1;
- (void)writePaletteEntry:(id)a0 in_index:(int)a1;
- (void)writeFileHeader;
- (void)writeInfoHeader;
- (void)setNull;
- (unsigned int)coloursUsed:(const char *)a0 in_headerSize:(unsigned int)a1 in_usage:(int)a2;
- (unsigned int)pixelDataOffset:(const char *)a0 in_headerSize:(unsigned int)a1 in_usage:(int)a2;
- (void)appendDIBPalette:(id)a0 in_header:(const char *)a1 in_headerSize:(unsigned int)a2 in_usage:(int)a3;
- (BOOL)processDIBHeader:(id)a0 in_header:(const char *)a1 in_headerSize:(unsigned int)a2 in_usage:(int)a3;
- (id)initWithDIBitmap:(id)a0 in_dib:(const char *)a1 in_dibSize:(unsigned int)a2 in_usage:(int)a3;
- (id)initWithDIBitmap:(id)a0 in_header:(const char *)a1 in_headerSize:(unsigned int)a2 in_bitmap:(const char *)a3 in_bitmapSize:(unsigned int)a4 in_usage:(int)a5;
- (id)initWithBitmap:(id)a0 in_width:(int)a1 in_height:(int)a2 in_planes:(int)a3 in_bitsPerPixel:(int)a4 in_bitmap:(const char *)a5 in_bitmapSize:(unsigned int)a6;
- (void)setMonoPalette:(id)a0;
- (unsigned long long)pixelDataLength;

@end
