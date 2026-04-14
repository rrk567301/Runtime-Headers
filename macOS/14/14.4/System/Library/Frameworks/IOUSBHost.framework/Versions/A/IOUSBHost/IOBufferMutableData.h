@interface IOBufferMutableData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
}

@property (copy) id /* block */ deallocator;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;

@end
