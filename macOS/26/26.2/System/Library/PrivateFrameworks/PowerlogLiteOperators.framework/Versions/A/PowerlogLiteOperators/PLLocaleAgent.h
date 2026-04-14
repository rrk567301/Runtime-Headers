@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void).cxx_destruct;
- (void)logEventForwardTimeZone;
- (void)logTimeZoneEntry:(id)a0;
- (id)init;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;

@end
