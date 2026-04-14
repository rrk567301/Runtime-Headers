@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_isCompact;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_copyWillRetain;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)autorelease;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)copy;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
