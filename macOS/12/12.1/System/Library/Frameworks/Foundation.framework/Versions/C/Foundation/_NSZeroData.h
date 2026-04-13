@interface _NSZeroData : NSData

+ (id)data;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (const void *)bytes;
- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)_dispatchData;

@end
