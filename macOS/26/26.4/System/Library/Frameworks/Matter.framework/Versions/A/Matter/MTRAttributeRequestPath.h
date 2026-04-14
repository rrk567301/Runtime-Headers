@class NSNumber;

@interface MTRAttributeRequestPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *endpoint;
@property (readonly, copy, nonatomic) NSNumber *cluster;
@property (readonly, copy, nonatomic) NSNumber *attribute;

+ (id)requestPathWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)convertToAttributePathParams:(struct AttributePathParams { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; } *)a0;
- (id)initWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;
- (BOOL)isEqualToAttributeRequestPath:(id)a0;

@end
