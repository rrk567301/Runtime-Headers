@class NSArray;

@interface HKSleepDaySummaryCollection : NSObject {
    void /* function */ sleepDaySummaries;
}

@property (nonatomic, readonly) NSArray *sleepDaySummaries;
@property (nonatomic, readonly) double totalTimeAsleepDuration;
@property (nonatomic, readonly) double totalInBedDuration;
@property (nonatomic, readonly) double totalAwakeDuration;
@property (nonatomic, readonly) double totalCoreSleepDuration;
@property (nonatomic, readonly) double totalREMSleepDuration;
@property (nonatomic, readonly) double totalDeepSleepDuration;
@property (nonatomic, readonly) long long numberOfNonEmptySleepDaySummaries;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSleepDaySummaries:(id)a0;

@end
