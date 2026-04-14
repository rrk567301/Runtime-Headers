@class PLXPCListenerOperatorComposition, NSMutableDictionary, RBSProcessMonitor;

@interface PLApplicationAgent : PLAgent

@property void *lsAppNotifications;
@property (retain) NSMutableDictionary *bundleIDToVersionMap;
@property (retain) RBSProcessMonitor *appStateMonitor;
@property BOOL powerlogInit;
@property (retain) PLXPCListenerOperatorComposition *widgetStatsListener;

+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitionFrontmostApp;
+ (id)entryEventForwardDefinitionAppLifecycle;
+ (id)entryEventForwardDefinitionApplication;
+ (id)entryEventBackwardDefinitionWidgetStats;
+ (id)entryEventNoneDefinitionAppInfo;
+ (BOOL)getVisibilityFromProcessState:(id)a0;
+ (id)getAssertionReasons:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventForwardFrontmostAppWithData:(id)a0;
- (void)logEventForwardAppLifecycleForEvent:(unsigned long long)a0 WithData:(id)a1;
- (void)logEventForwardApplicationForDisplayID:(id)a0 withPid:(int)a1 withState:(unsigned int)a2 withVisibility:(BOOL)a3 withReasons:(id)a4;
- (void)logEventBackwardNotificationCenterWidgetStats:(id)a0;
- (void)logEventNoneAppInfoWithData:(id)a0;
- (id)getFrontmostAppInfo;
- (void)logRunningAppsInfo;
- (BOOL)appInformationChanged:(id)a0;
- (id)getVersionInfo:(id)a0;
- (unsigned long long)getApplicationType:(id)a0;
- (id)getAppInfoForASN:(struct __LSASN { } *)a0 ForSessionID:(int)a1;

@end
