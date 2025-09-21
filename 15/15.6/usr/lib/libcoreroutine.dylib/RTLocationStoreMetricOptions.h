@class NSDateInterval;

@interface RTLocationStoreMetricOptions : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double uncertaintyThreshold;
@property (readonly, nonatomic) char includeFixMetrics;
@property (readonly, nonatomic) char includeSignalEnvironment;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 uncertaintyThreshold:(double)a1;
- (id)initWithDateInterval:(id)a0 uncertaintyThreshold:(double)a1 includeFixMetrics:(char)a2 includeSignalEnvironment:(char)a3;

@end
