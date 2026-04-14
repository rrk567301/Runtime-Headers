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
+ (id)entryEventPointDefinitionState;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (double)getUserInactiveMinIntervalCA;
- (void)handleUserActiveStateChangeCallback:(BOOL)a0;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)handlePluggedInStateUpdate:(BOOL)a0;
- (id)getLastSystemSleepDate;

@end
