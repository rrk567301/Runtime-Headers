@class NSNumber;

@interface MTRAttributePath : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *endpoint;
@property (readonly, nonatomic) NSNumber *cluster;
@property (readonly, nonatomic) NSNumber *attribute;

+ (id)attributePathWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPath:(const void *)a0;
- (BOOL)isEqualToAttributePath:(id)a0;

@end
