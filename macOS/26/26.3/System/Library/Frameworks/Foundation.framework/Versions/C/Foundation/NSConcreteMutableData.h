@interface NSConcreteMutableData : NSMutableData {
    unsigned char _reserved : 1;
    unsigned char _needToZero : 1;
    unsigned char _hasVM : 1;
    unsigned int _retainCount : 29;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
}

- (void)appendData:(id)a0;
- (void)_freeBytes;
- (void)setLength:(unsigned long long)a0;
- (BOOL)_canUseRealloc;
- (id)initWithLength:(unsigned long long)a0;
- (BOOL)_providesConcreteBacking;
- (const void *)bytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (unsigned long long)length;
- (void *)mutableBytes;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)increaseLengthBy:(unsigned long long)a0;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;

@end
