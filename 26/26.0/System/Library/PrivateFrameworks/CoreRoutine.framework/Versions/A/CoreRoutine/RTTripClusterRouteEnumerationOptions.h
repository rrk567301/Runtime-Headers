@class NSUUID;

@interface RTTripClusterRouteEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSUUID *clusterID;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id /* block */)processingBlock;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
