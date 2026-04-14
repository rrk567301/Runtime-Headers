@interface CPFontKerning : NSObject <CPDisposable> {
    struct __CFData { } *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary { } *kernDictionary;
    BOOL override;
    BOOL valid;
}

- (void)finalize;
- (void)dealloc;
- (void)dispose;
- (id)initWithKernData:(struct __CFData { } *)a0;
- (struct __CFDictionary { } *)createKernTable;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (unsigned short)readUnsignedShort;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (void)doTable;
- (id)initWithCGFont:(struct CGFont { } *)a0;
- (short)readShort;

@end
