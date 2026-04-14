@class NSDateInterval;

@interface RTLocationStoreMetricOptions : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double uncertaintyThreshold;
@property (readonly, nonatomic) BOOL includeFixMetrics;
@property (readonly, nonatomic) BOOL includeSignalEnvironment;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithDateInterval:(id)a0 uncertaintyThreshold:(double)a1;
- (id)initWithDateInterval:(id)a0 uncertaintyThreshold:(double)a1 includeFixMetrics:(BOOL)a2 includeSignalEnvironment:(BOOL)a3;

@end
