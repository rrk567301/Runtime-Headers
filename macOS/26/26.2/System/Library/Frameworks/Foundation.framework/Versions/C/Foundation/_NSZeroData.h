@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_isCompact;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const void *)bytes;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (id)_dispatchData;

@end
