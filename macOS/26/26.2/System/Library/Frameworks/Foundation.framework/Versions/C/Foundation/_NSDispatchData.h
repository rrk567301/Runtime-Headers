@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_providesConcreteBacking;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_createDispatchData;
- (void)getBytes:(void *)a0;
- (BOOL)_isDispatchData;
- (BOOL)_allowsDirectEncoding;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;

@end
