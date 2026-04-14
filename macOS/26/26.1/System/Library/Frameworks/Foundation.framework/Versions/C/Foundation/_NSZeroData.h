@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_providesConcreteBacking;
- (BOOL)_isCompact;
- (id)retain;
- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)_dispatchData;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
