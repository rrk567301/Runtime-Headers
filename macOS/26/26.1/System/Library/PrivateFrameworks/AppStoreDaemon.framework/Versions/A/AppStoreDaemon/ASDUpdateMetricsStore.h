@class NSArray, NSDate;

@interface ASDUpdateMetricsStore : NSObject

@property (readonly, nonatomic) double averagePollTime;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly, nonatomic) NSDate *lastAutoPollDate;

- (void)synchronize;
- (void).cxx_destruct;
- (id)init;
- (void)addPoll:(id)a0;

@end
