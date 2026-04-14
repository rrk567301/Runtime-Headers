@interface ICCloudThrottlingLevel : NSObject

@property (nonatomic) double batchInterval;
@property (nonatomic) unsigned long long numberOfBatches;

- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithBatchInterval:(double)a0 numberOfBatches:(unsigned long long)a1;

@end
