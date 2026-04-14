@class NIDiscoveryToken, NSData;

@interface NIRangingAuthConfiguration : NIConfiguration

@property (readonly, nonatomic) BOOL isResponder;
@property (readonly, copy, nonatomic) NIDiscoveryToken *peerToken;
@property (readonly, copy, nonatomic) NSData *macAddress;
@property (readonly, copy, nonatomic) NSData *secureKey;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initAsResponder:(BOOL)a0 macAddress:(id)a1 key:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end
