@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (const void *)bytes;
- (id)retain;
- (BOOL)_providesConcreteBacking;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
