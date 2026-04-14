@interface NSConcreteMutableData : NSMutableData {
    unsigned char _reserved : 1;
    unsigned char _needToZero : 1;
    unsigned char _hasVM : 1;
    unsigned int _retainCount : 29;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
}

- (void)_freeBytes;
- (void)increaseLengthBy:(unsigned long long)a0;
- (void *)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withBytes:(const void *)a1;
- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithLength:(unsigned long long)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)setLength:(unsigned long long)a0;
- (BOOL)_providesConcreteBacking;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_canUseRealloc;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (void)appendData:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
