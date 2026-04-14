@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setLength:(unsigned long long)a0;
- (BOOL)_providesConcreteBacking;
- (const void *)bytes;
- (unsigned long long)length;
- (void *)mutableBytes;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
