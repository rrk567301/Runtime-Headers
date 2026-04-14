@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;
- (void)logEventForwardTimeZone;

@end
