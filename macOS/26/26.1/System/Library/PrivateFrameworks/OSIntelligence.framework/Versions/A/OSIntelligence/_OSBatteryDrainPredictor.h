@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)behaviorDescription:(long long)a0;
+ (id)predictor;

- (void)logCompletion:(id)a0;
- (long long)historicalClassification;
- (BOOL)highBatteryDrainComparedtoHourlyAggregate;
- (void)recordIntelligentLPMThreshold:(long long)a0 threshold:(long long)a1;
- (id)firstBatteryLevelDate;
- (long long)lastBatteryLevelValue;
- (BOOL)didReachEngagementThresholds;
- (id)lastBatteryLevelDate;
- (void).cxx_destruct;
- (id)drainPerDayFromDate:(id)a0 forNumberOfDays:(int)a1;
- (id)init;

@end
