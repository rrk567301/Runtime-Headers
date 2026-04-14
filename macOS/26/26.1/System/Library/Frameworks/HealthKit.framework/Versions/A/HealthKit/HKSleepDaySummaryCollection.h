@class NSArray, HKSleepMetrics;

@interface HKSleepDaySummaryCollection : NSObject {
    void /* function */ sleepDaySummaries;
}

@property (nonatomic, readonly) NSArray *sleepDaySummaries;
@property (nonatomic, readonly) HKSleepMetrics *metrics;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSleepDaySummaries:(id)a0;

@end
