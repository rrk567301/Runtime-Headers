@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)retain;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (const void *)bytes;
- (Class)classForCoder;
- (BOOL)_providesConcreteBacking;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;

@end
