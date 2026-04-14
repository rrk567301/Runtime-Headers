@interface IOBufferMutableData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
    unsigned int _bufferID;
}

@property (copy) id /* block */ deallocator;

- (void)setID:(unsigned int)a0;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)setLength:(unsigned long long)a0;
- (void)dealloc;
- (unsigned int)bufferID;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 bufferID:(unsigned int)a2 deallocator:(id /* block */)a3;

@end
