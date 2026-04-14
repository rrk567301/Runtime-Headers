@interface CPFontKerning : NSObject <CPDisposable> {
    struct __CFData { } *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary { } *kernDictionary;
    BOOL override;
    BOOL valid;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (id)initWithKernData:(struct __CFData { } *)a0;
- (id)initWithCGFont:(struct CGFont { } *)a0;
- (unsigned short)readUnsignedShort;
- (short)readShort;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doTTSubtable;
- (void)doOTSubtable;
- (void)doTable;
- (struct __CFDictionary { } *)createKernTable;

@end
