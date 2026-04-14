@class NSArray, HKSleepMetrics;

@interface HKSleepDaySummaryCollection : NSObject {
    void /* function */ sleepDaySummaries;
}

@property (nonatomic, readonly) NSArray *sleepDaySummaries;
@property (nonatomic, readonly) HKSleepMetrics *metrics;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSleepDaySummaries:(id)a0;

@end
