@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)predictor;
+ (id)behaviorDescription:(long long)a0;

- (id)lastBatteryLevelDate;
- (id)drainPerDayFromDate:(id)a0 forNumberOfDays:(int)a1;
- (BOOL)didReachEngagementThresholds;
- (BOOL)highBatteryDrainComparedtoHourlyAggregate;
- (id)init;
- (id)firstBatteryLevelDate;
- (void)logCompletion:(id)a0;
- (long long)historicalClassification;
- (long long)lastBatteryLevelValue;
- (void)recordIntelligentLPMThreshold:(long long)a0 threshold:(long long)a1;
- (void).cxx_destruct;

@end
