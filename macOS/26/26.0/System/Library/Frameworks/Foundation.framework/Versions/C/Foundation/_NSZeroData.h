@interface _NSZeroData : NSData

+ (id)data;

- (id)_dispatchData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)retain;
- (BOOL)_providesConcreteBacking;
- (BOOL)_isCompact;
- (unsigned long long)retainCount;
- (oneway void)release;
- (unsigned long long)length;

@end
