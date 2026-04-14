@interface IOBufferMutableData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
    unsigned int _bufferID;
}

@property (copy) id /* block */ deallocator;

- (void)setID:(unsigned int)a0;
- (void)setLength:(unsigned long long)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (void *)mutableBytes;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)bufferID;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 bufferID:(unsigned int)a2 deallocator:(id /* block */)a3;

@end
