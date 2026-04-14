@class NSData;

@interface CBOOBKeyInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *btAddressData;
@property (copy, nonatomic) NSData *irkData;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
