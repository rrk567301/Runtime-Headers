@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)_providesConcreteBacking;
- (id)retain;
- (const void *)bytes;
- (unsigned long long)hash;
- (void)setLength:(unsigned long long)a0;
- (oneway void)release;
- (void *)mutableBytes;
- (unsigned long long)retainCount;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
