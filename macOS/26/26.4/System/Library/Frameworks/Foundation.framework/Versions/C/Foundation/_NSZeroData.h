@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_isCompact;
- (const void *)bytes;
- (id)_bridgingCopy:(const void **)a0 length:(unsigned long long *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (unsigned long long)length;
- (id)retain;
- (id)_dispatchData;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
