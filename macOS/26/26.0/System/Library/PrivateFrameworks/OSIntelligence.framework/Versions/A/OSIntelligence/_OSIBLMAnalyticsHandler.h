@class NSMutableDictionary, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _OSIBLMAnalyticsHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSMutableDictionary *subsystemToPPSID;

+ (id)sharedInstance;
+ (long long)currentBatteryLevel;

- (void)start;
- (id)dateFormatter;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)cancelTask;
- (id)historicalPluggedInDataForDate:(id)a0;
- (void)extractAndReportMetrics;
- (id)featureEngagementMetricsFromDrainData:(id)a0 engagementData:(id)a1;
- (id)historicalDrainDataForDate:(id)a0;
- (id)historicalEngagementDataForDate:(id)a0;
- (id)modelStringForModel:(long long)a0;
- (struct PPSTelemetryIdentifier { } *)ppsIDForSubsystem:(id)a0 category:(id)a1;
- (void)recordAnalyticsFeatureState:(long long)a0;
- (void)recordAutoLPMState:(BOOL)a0;
- (void)recordFeatureState:(long long)a0;
- (void)recordIBLMFirstUserNotificationResponse:(long long)a0;
- (void)recordIBLMFirstUserNotificationTrigger:(long long)a0;
- (void)recordMitigationUpdateTo:(id)a0 fromPrevious:(id)a1;
- (void)reportDailyFeatureState;
- (void)reportDrainResult:(id)a0 forModel:(long long)a1;
- (void)reportNewMitigation:(id)a0;
- (void)sendDataToPPS:(id)a0 subsystem:(id)a1 category:(id)a2;
- (void)submitTask;

@end
