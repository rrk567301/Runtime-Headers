@interface _NSDispatchData : NSData

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_createDispatchData;
- (char)_providesConcreteBacking;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (char)_isDispatchData;
- (char)_allowsDirectEncoding;
- (void)getBytes:(void *)a0;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
