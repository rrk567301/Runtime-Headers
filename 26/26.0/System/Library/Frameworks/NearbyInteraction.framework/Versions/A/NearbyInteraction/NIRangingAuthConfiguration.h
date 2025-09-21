@class NIDiscoveryToken, NSData;

@interface NIRangingAuthConfiguration : NIConfiguration

@property (readonly, nonatomic) BOOL isResponder;
@property (readonly, copy, nonatomic) NIDiscoveryToken *peerToken;
@property (readonly, copy, nonatomic) NSData *macAddress;
@property (readonly, copy, nonatomic) NSData *secureKey;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (id)initAsResponder:(BOOL)a0 macAddress:(id)a1 key:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
