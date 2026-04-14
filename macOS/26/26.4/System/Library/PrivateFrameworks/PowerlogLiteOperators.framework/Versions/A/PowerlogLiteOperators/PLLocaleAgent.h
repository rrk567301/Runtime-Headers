@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)accountingGroupDefinitions;
+ (void)load;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (void)logTimeZoneEntry:(id)a0;
- (void)logEventForwardTimeZone;
- (void).cxx_destruct;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (id)init;

@end
