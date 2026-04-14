@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setLength:(unsigned long long)a0;
- (BOOL)_tryRetain;
- (const void *)bytes;
- (id)_bridgingCopy:(const void **)a0 length:(unsigned long long *)a1;
- (void *)mutableBytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)length;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)retainCount;

@end
