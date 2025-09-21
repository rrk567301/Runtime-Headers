@interface BPSApproxPercentileDigestCentroid : NSObject

@property (nonatomic) float mean;
@property (nonatomic) unsigned int weight;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithMeanAndWeight:(float)a0 weight:(unsigned int)a1;

@end
