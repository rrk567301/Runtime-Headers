@class MTRProductIdentity, NSDictionary, MTREndpointInfo;

@interface MTRCommissioneeInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) MTRProductIdentity *productIdentity;
@property (readonly, copy, nonatomic) NSDictionary *endpointsById;
@property (readonly, copy, nonatomic) MTREndpointInfo *rootEndpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
