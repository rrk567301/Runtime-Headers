@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithData:(id)a0;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)copy;
- (id)retain;
- (BOOL)_providesConcreteBacking;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_isCompact;
- (unsigned long long)retainCount;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_copyWillRetain;
- (oneway void)release;
- (unsigned long long)length;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;

@end
