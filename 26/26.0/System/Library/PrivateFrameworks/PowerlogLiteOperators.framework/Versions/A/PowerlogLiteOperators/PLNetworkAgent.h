@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *downloadAutoAssetDownloadsListener;
@property (retain) PLXPCListenerOperatorComposition *downloadV2AssetDownloadsListener;
@property (nonatomic) int wakeSocket;

+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionWake;
+ (id)defaults;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)logMobileAssetDownload:(id)a0 withCategory:(id)a1;
- (void)logEventPointWake;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)log;
- (void)initKernelEvent;
- (id)init;
- (void).cxx_destruct;

@end
