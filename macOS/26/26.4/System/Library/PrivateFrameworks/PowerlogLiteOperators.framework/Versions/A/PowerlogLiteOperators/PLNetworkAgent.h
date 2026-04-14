@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *downloadAutoAssetDownloadsListener;
@property (retain) PLXPCListenerOperatorComposition *downloadV2AssetDownloadsListener;
@property (nonatomic) int wakeSocket;

+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)accountingGroupDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventPointWake;
- (void)logMobileAssetDownload:(id)a0 withCategory:(id)a1;
- (void)initKernelEvent;
- (void).cxx_destruct;
- (id)init;
- (void)logEventBackwardCumulativeNetworkUsage;

@end
