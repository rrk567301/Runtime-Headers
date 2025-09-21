@interface NSCustomReleaseData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
    id /* block */ _releaseBytesBlock;
}

- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void)dealloc;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 releaseBytesBlock:(id /* block */)a2;

@end
