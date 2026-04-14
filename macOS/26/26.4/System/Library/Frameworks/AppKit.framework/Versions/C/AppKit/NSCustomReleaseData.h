@interface NSCustomReleaseData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
    id /* block */ _releaseBytesBlock;
}

- (void)setLength:(unsigned long long)a0;
- (const void *)bytes;
- (void *)mutableBytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 releaseBytesBlock:(id /* block */)a2;

@end
