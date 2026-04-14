@class NSUUID;

@interface RTTripClusterWaypointEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSUUID *clusterID;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClusterID:(id)a0;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
