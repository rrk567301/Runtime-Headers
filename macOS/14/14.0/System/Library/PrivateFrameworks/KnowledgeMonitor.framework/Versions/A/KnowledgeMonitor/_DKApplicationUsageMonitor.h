@class NSDictionary, NSData;

@interface _DKApplicationUsageMonitor : _DKMonitor

@property void *notificationID;
@property unsigned long long activityNotificationHandle;
@property (copy, nonatomic) NSDictionary *activeApplicationEvents;
@property (copy, nonatomic) NSData *frontmostAuditToken;
@property (copy, nonatomic) NSDictionary *frontmostApplicationUsage;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;

+ (id)eventStream;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;
+ (BOOL)shouldMergeUnchangedEvents;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)_obtainCurrentValueWithActivityState:(unsigned long long)a0;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0 clearAll:(BOOL)a1;
- (void)invalidateInstantState;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)registerForAppChangeNotifications;
- (void)updateAppDataInContextStore;
- (void)updateFrontmostAuditTokenData:(id)a0 frontmostAppUsage:(id)a1;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;

@end
