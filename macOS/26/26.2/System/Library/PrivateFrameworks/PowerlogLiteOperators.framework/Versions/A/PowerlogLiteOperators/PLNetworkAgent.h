@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *downloadAutoAssetDownloadsListener;
@property (retain) PLXPCListenerOperatorComposition *downloadV2AssetDownloadsListener;
@property (nonatomic) int wakeSocket;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)accountingGroupDefinitions;

- (void)logEventBackwardCumulativeNetworkUsage;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventPointWake;
- (void)initKernelEvent;
- (void)logMobileAssetDownload:(id)a0 withCategory:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
