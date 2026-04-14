@interface NSConcreteData : NSData {
    unsigned long long _length;
    void *_bytes;
    id /* block */ _deallocator;
}

- (BOOL)_isCompact;
- (BOOL)_copyWillRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (BOOL)_providesConcreteBacking;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 freeWhenDone:(BOOL)a3 bytesAreVM:(BOOL)a4;
- (id)_createDispatchData;
- (void)getBytes:(void *)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)init;
- (void)dealloc;

@end
