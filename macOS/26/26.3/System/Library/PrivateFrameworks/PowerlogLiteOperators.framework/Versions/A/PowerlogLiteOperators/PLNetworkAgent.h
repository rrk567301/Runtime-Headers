@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *downloadAutoAssetDownloadsListener;
@property (retain) PLXPCListenerOperatorComposition *downloadV2AssetDownloadsListener;
@property (nonatomic) int wakeSocket;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitionWake;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventBackwardDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;

- (void)logEventPointWake;
- (void)log;
- (void)initKernelEvent;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)logMobileAssetDownload:(id)a0 withCategory:(id)a1;

@end
