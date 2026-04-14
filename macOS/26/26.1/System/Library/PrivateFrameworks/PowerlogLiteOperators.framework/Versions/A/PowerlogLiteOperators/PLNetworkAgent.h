@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLXPCListenerOperatorComposition *downloadAutoAssetDownloadsListener;
@property (retain) PLXPCListenerOperatorComposition *downloadV2AssetDownloadsListener;
@property (nonatomic) int wakeSocket;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)railDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitionWake;
+ (id)accountingGroupDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)defaults;

- (void)initOperatorDependancies;
- (void)initKernelEvent;
- (void)log;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)logEventPointWake;
- (void).cxx_destruct;
- (void)logMobileAssetDownload:(id)a0 withCategory:(id)a1;
- (id)init;

@end
