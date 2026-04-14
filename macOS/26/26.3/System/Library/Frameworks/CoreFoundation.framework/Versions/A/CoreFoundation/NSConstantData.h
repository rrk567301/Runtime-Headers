@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copy;
- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)retain;
- (id)initWithData:(id)a0;
- (id)init;
- (BOOL)_copyWillRetain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
