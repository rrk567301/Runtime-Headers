@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (char)_isDeallocating;
- (oneway void)release;
- (char)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (const void *)bytes;
- (char)_providesConcreteBacking;
- (Class)classForCoder;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;

@end
