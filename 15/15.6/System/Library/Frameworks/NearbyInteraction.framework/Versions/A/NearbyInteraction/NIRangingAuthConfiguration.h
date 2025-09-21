@class NIDiscoveryToken, NSData;

@interface NIRangingAuthConfiguration : NIConfiguration

@property (readonly, nonatomic) char isResponder;
@property (readonly, copy, nonatomic) NIDiscoveryToken *peerToken;
@property (readonly, copy, nonatomic) NSData *macAddress;
@property (readonly, copy, nonatomic) NSData *secureKey;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initAsResponder:(char)a0 macAddress:(id)a1 key:(id)a2;

@end
