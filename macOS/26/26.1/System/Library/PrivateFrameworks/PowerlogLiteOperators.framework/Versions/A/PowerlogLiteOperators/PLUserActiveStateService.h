@class NSDictionary, PLEntryNotificationOperatorComposition, NSDate, NSNumber;

@interface PLUserActiveStateService : PLService

@property (retain) NSDate *lastUserInactiveTime;
@property (retain) NSDate *lastUnplugTime;
@property (retain) NSDate *lastPluggedInTime;
@property double pluggedInTime;
@property unsigned long long userActiveNotificationHandle;
@property (retain) PLEntryNotificationOperatorComposition *batteryNotification;
@property (retain) NSNumber *pluggedInState;
@property (retain) NSDictionary *cachedBatteryMetrics;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionState;
+ (id)defaults;

- (void)initOperatorDependancies;
- (id)getLastSystemSleepDate;
- (double)getUserInactiveMinIntervalCA;
- (void)handleUserActiveStateChangeCallback:(BOOL)a0;
- (void).cxx_destruct;
- (void)handlePluggedInStateUpdate:(BOOL)a0;
- (id)init;

@end
