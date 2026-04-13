@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
    const void *memory;
    const char *current;
    unsigned long long left;
    unsigned long long max;
    BOOL freeWhenDone;
}

- (void)dealloc;
- (id)initFromMemoryNoCopy:(const void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (int)readInt;
- (unsigned long long)readAlignedDataSize;
- (void)readData:(void *)a0 length:(unsigned long long)a1;
- (id)initFromPath:(id)a0;

@end
