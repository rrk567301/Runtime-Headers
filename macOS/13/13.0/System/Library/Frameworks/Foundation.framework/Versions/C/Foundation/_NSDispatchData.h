@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_createDispatchData;
- (Class)classForCoder;
- (BOOL)_providesConcreteBacking;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (BOOL)_allowsDirectEncoding;
- (void)getBytes:(void *)a0;
- (BOOL)_isDispatchData;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
