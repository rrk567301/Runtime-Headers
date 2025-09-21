@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_allowsDirectEncoding;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDispatchData;
- (BOOL)_providesConcreteBacking;
- (id)_createDispatchData;
- (id)initWithCoder:(id)a0;
- (void)getBytes:(void *)a0;
- (unsigned long long)hash;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;

@end
