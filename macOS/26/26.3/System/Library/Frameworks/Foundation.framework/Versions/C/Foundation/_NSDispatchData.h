@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (void)getBytes:(void *)a0;
- (BOOL)_providesConcreteBacking;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_allowsDirectEncoding;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_createDispatchData;
- (Class)classForCoder;
- (BOOL)_isDispatchData;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)hash;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
