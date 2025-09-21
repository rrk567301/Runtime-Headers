@class NSUUID;

@interface RTTripClusterRoadTransitionsEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSUUID *clusterID;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id /* block */)processingBlock;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
