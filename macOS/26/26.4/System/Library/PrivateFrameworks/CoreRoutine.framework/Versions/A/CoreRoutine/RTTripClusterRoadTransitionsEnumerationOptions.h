@class NSUUID;

@interface RTTripClusterRoadTransitionsEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSUUID *clusterID;

+ (BOOL)supportsSecureCoding;

- (id /* block */)processingBlock;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithClusterID:(id)a0;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
