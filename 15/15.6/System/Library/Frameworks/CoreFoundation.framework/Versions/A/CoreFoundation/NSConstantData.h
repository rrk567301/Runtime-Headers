@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (char)_isCompact;
- (const void *)bytes;
- (char)_copyWillRetain;
- (char)_providesConcreteBacking;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(char)a2 deallocator:(id /* block */)a3;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(char)a2;
- (id)initWithData:(id)a0;

@end
