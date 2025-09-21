@interface _NSZeroData : NSData

+ (id)data;

- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (char)_isCompact;
- (const void *)bytes;
- (char)_providesConcreteBacking;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(char)a2 deallocator:(id /* block */)a3;
- (id)_dispatchData;

@end
