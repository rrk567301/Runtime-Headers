@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)behaviorDescription:(long long)a0;
+ (id)predictor;

- (BOOL)didReachEngagementThresholds;
- (void).cxx_destruct;
- (id)firstBatteryLevelDate;
- (id)lastBatteryLevelDate;
- (BOOL)highBatteryDrainComparedtoHourlyAggregate;
- (long long)historicalClassification;
- (id)init;
- (long long)lastBatteryLevelValue;
- (void)recordIntelligentLPMThreshold:(long long)a0 threshold:(long long)a1;

@end
