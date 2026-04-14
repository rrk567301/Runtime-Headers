@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_copyWillRetain;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_isCompact;
- (BOOL)_tryRetain;
- (id)autorelease;
- (const void *)bytes;
- (id)_bridgingCopy:(const void **)a0 length:(unsigned long long *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (id)initWithData:(id)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)copy;
- (unsigned long long)length;
- (id)retain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
