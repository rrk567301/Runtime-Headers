@interface ICCloudThrottlingLevel : NSObject

@property (nonatomic) double batchInterval;
@property (nonatomic) double maximumBatchIntervalFactor;
@property (nonatomic) unsigned long long numberOfBatches;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithBatchInterval:(double)a0 maximumBatchIntervalFactor:(double)a1 numberOfBatches:(unsigned long long)a2;

@end
