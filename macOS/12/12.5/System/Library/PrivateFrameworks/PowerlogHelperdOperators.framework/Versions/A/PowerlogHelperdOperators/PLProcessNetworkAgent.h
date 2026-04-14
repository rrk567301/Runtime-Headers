@class PLMonotonicTimer, PLCFNotificationOperatorComposition, NSDictionary, PLEntryNotificationOperatorComposition, UsageFeed, NSDate, NSMutableSet;

@interface PLProcessNetworkAgent : PLAgent

@property struct __NStatManager { } *statManagerRef;
@property (retain) UsageFeed *usageFeed;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLMonotonicTimer *logUsageTimer;
@property (retain) NSDictionary *lastProcessNameToNetworkUsageEntry;
@property (retain) NSDate *lastEntryDate;
@property (retain) NSMutableSet *processes;
@property unsigned long long lastNetworkBitmapTimestamp;
@property (retain) PLCFNotificationOperatorComposition *flushNetworkBitmapsListener;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionConnection;
+ (id)entryEventForwardDefinitionLowInternet;
+ (id)entryEventForwardDefinitionHighCellularBWTransactions;
+ (id)entryEventForwardDefinitionHighCellularBWTransactionsDetail;
+ (id)entryEventBackwardDefinitionUsage;
+ (id)entryEventBackwardDefinitionNetworkBitmap;
+ (id)entryEventIntervalDefinitionUsage;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)a0;
- (void)didAddNewSource:(struct __NStatSource { } *)a0;
- (BOOL)hasSymptomsLogging;
- (void)logEventForwardLowInternet;
- (void)didSetCountsBlock:(id)a0 withCounts:(id)a1;
- (void)didSetDescriptionBlock:(id)a0 withDescription:(id)a1;
- (void)didRemoveSource:(id)a0;
- (void)transferSource:(id)a0 fromPID:(id)a1 toPID:(id)a2;
- (void)logEventPointConnectionEvent:(short)a0 forSource:(id)a1;
- (void)addSource:(id)a0 toPID:(id)a1;
- (void)logEventBackwardUsage;
- (void)timestampNetConnectEntry:(id)a0 withEventType:(short)a1 withSource:(id)a2;
- (void)logEventBackwardUsageWithOutcome:(id)a0;
- (void)accountWithNetworkUsageDiffEntries:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (BOOL)outcomeHasDataUsage:(id)a0;

@end
