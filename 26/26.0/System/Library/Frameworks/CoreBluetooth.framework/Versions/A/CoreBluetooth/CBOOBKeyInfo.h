@class NSData;

@interface CBOOBKeyInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *btAddressData;
@property (nonatomic) unsigned char btAddressType;
@property (nonatomic) unsigned char addressType;
@property (copy, nonatomic) NSData *irkData;
@property (nonatomic) unsigned char keyType;
@property (nonatomic) unsigned short version;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)proxyHash;

@end
