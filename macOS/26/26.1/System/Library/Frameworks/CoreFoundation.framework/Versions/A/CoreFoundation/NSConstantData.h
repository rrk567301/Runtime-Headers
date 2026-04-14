@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (BOOL)_isCompact;
- (BOOL)_copyWillRetain;
- (id)copy;
- (id)retain;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)initWithData:(id)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)init;

@end
