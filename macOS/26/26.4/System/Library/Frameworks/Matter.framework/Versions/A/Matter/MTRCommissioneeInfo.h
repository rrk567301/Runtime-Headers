@class MTREndpointInfo, NSDictionary, NSArray, MTRProductIdentity;

@interface MTRCommissioneeInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) MTRProductIdentity *productIdentity;
@property (readonly, copy, nonatomic) NSDictionary *endpointsById;
@property (readonly, copy, nonatomic) MTREndpointInfo *rootEndpoint;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy, nonatomic) NSArray *networkInterfaces;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
