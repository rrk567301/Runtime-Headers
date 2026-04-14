@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dispatchData;
- (oneway void)release;

@end
