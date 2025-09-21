@class NSNumber;

@interface MTRClusterPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *endpoint;
@property (readonly, copy, nonatomic) NSNumber *cluster;

+ (id)clusterPathWithEndpointID:(id)a0 clusterID:(id)a1;

- (id)initWithPath:(const struct ConcreteClusterPath { unsigned short x0; BOOL x1; unsigned int x2; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToClusterPath:(id)a0;

@end
