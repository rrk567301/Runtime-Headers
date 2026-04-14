@class PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventPointDefinitionUnattributedWake;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventBackwardCumulativeNetworkUsage;

@end
