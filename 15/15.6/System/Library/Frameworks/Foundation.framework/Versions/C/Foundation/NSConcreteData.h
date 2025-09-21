@interface NSConcreteData : NSData {
    unsigned long long _length;
    void *_bytes;
    id /* block */ _deallocator;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)length;
- (char)_isCompact;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(char)a2 freeWhenDone:(char)a3 bytesAreVM:(char)a4;
- (char)_copyWillRetain;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_createDispatchData;
- (char)_providesConcreteBacking;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(char)a2 deallocator:(id /* block */)a3;
- (void)getBytes:(void *)a0;

@end
