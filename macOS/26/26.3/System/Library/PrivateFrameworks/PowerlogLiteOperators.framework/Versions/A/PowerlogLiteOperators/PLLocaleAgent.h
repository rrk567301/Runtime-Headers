@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)railDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (void)log;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logTimeZoneEntry:(id)a0;
- (void)logEventForwardTimeZone;

@end
