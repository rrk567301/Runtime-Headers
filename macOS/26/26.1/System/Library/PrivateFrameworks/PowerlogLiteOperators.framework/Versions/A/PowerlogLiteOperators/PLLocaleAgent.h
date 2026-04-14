@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (void)logTimeZoneEntry:(id)a0;
- (void)logEventForwardTimeZone;
- (void)log;
- (void).cxx_destruct;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (id)init;

@end
