@class NSDictionary, BMAppLaunchStream, NSData;

@interface _DKApplicationUsageMonitor : _DKMonitor

@property void *notificationID;
@property unsigned long long activityNotificationHandle;
@property (copy, nonatomic) NSDictionary *activeApplicationEvents;
@property (retain, nonatomic) BMAppLaunchStream *appLaunchStream;
@property (copy, nonatomic) NSData *frontmostAuditToken;
@property (copy, nonatomic) NSDictionary *frontmostApplicationUsage;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)obtainCurrentValue;
- (void)invalidateInstantState;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0 clearAll:(BOOL)a1;
- (void)updateAppDataInContextStore;
- (void)updateFrontmostAuditTokenData:(id)a0 frontmostAppUsage:(id)a1;
- (void)registerForAppChangeNotifications;
- (void)_obtainCurrentValueWithActivityState:(unsigned long long)a0;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;

@end
