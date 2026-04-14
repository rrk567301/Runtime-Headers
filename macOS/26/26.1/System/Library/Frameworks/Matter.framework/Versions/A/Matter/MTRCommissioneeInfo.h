@class MTRProductIdentity, NSDictionary, MTREndpointInfo;

@interface MTRCommissioneeInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) MTRProductIdentity *productIdentity;
@property (readonly, copy, nonatomic) NSDictionary *endpointsById;
@property (readonly, copy, nonatomic) MTREndpointInfo *rootEndpoint;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
