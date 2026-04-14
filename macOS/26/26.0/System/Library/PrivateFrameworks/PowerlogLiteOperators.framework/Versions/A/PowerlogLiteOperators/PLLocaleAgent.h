@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)logEventForwardTimeZone;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (void)log;
- (id)init;
- (void)logTimeZoneEntry:(id)a0;
- (void).cxx_destruct;

@end
