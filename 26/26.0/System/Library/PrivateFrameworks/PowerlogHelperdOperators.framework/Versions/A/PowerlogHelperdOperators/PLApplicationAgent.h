@class PLXPCListenerOperatorComposition, NSMutableDictionary, RBSProcessMonitor;

@interface PLApplicationAgent : PLAgent

@property void *lsAppNotifications;
@property (retain) NSMutableDictionary *bundleIDToVersionMap;
@property (retain) RBSProcessMonitor *appStateMonitor;
@property BOOL powerlogInit;
@property (retain) PLXPCListenerOperatorComposition *widgetStatsMacListener;
@property (retain) PLXPCListenerOperatorComposition *widgetStatsListener;
@property (retain) PLXPCListenerOperatorComposition *widgetUpdatesMacListener;
@property (retain) PLXPCListenerOperatorComposition *suggestedWidgetReloadMacListener;
@property (retain) PLXPCListenerOperatorComposition *liveActivityStatsListener;
@property (retain) PLXPCListenerOperatorComposition *liveActivityUpdatesListener;

+ (void)load;
+ (BOOL)isEnabled;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitionAppInfo;
+ (id)entryEventBackwardDefinitionWidgetStats;
+ (id)entryEventForwardDefinitionAppLifecycle;
+ (id)entryEventForwardDefinitionApplication;
+ (id)entryEventForwardDefinitionFrontmostApp;
+ (id)entryEventForwardDefinitionLiveActivityStats;
+ (id)entryEventPointDefinitionLiveActivityUpdates;
+ (id)entryEventPointDefinitionSuggestedWidgetReload;
+ (id)entryEventPointDefinitionWidgetUpdates;
+ (id)getAssertionReasons:(id)a0;
+ (BOOL)getVisibilityFromProcessState:(id)a0;

- (void)initOperatorDependancies;
- (void)dealloc;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (id)getVersionInfo:(id)a0;
- (BOOL)appInformationChanged:(id)a0;
- (id)getAppInfoForASN:(struct __LSASN { } *)a0 ForSessionID:(int)a1;
- (unsigned long long)getApplicationType:(id)a0;
- (id)getFrontmostAppInfo;
- (void)logEventBackwardNotificationCenterWidgetStats:(id)a0;
- (void)logEventForwardAppLifecycleForEvent:(unsigned long long)a0 WithData:(id)a1;
- (void)logEventForwardApplicationForDisplayID:(id)a0 withPid:(int)a1 withState:(unsigned int)a2 withVisibility:(BOOL)a3 withReasons:(id)a4;
- (void)logEventForwardFrontmostAppWithData:(id)a0;
- (void)logEventForwardLiveActivityStats:(id)a0;
- (void)logEventNoneAppInfoWithData:(id)a0;
- (void)logEventPointLiveActivityUpdates:(id)a0;
- (void)logEventPointSuggestedWidgetReload:(id)a0;
- (void)logEventPointWidgetUpdates:(id)a0;
- (void)logRunningAppsInfo;

@end
