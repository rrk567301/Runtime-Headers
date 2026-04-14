@class NSObject;
@protocol OS_os_log;

@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)behaviorDescription:(long long)a0;
+ (id)predictor;

- (long long)lastBatteryLevelValue;
- (void).cxx_destruct;
- (void)recordIntelligentLPMThreshold:(long long)a0 threshold:(long long)a1;
- (id)init;
- (BOOL)didReachEngagementThresholds;
- (BOOL)highBatteryDrainComparedtoHourlyAggregate;
- (long long)historicalClassification;
- (id)firstBatteryLevelDate;
- (id)lastBatteryLevelDate;

@end
