@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)behaviorDescription:(long long)a0;
+ (id)predictor;

- (id)init;
- (id)lastBatteryLevelDate;
- (long long)lastBatteryLevelValue;
- (void)recordIntelligentLPMThreshold:(long long)a0 threshold:(long long)a1;
- (id)firstBatteryLevelDate;
- (void).cxx_destruct;
- (BOOL)didReachEngagementThresholds;
- (BOOL)highBatteryDrainComparedtoHourlyAggregate;
- (long long)historicalClassification;

@end
