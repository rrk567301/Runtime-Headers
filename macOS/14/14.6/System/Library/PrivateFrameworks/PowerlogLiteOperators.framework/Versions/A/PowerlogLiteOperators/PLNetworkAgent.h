@class PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitionWake;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventBackwardCumulativeNetworkUsage;

@end
