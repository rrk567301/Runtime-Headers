@class NSMutableArray;

@interface BPSApproxPercentileDigest : PBCodable <BMProtoBufWrapper, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *mergedCentroids;
@property (retain, nonatomic) NSMutableArray *unmergedCentroids;
@property (nonatomic) float min;
@property (nonatomic) float max;
@property (nonatomic) unsigned long long maxCentroidCount;
@property (nonatomic) unsigned long long totalWeight;
@property (nonatomic) unsigned long long unmergedBufferSize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)addValue:(float)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)addValue:(float)a0 weight:(unsigned int)a1;
- (id)initWithProto:(id)a0;
- (void)addDigest:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 bufferMultiplier:(unsigned long long)a1;
- (void)mergeCentroids;
- (double)quantileLimitForClusterIndex:(unsigned long long)a0 maxCentroidCount:(unsigned long long)a1;
- (double)valueAtQuantile:(double)a0;

@end
