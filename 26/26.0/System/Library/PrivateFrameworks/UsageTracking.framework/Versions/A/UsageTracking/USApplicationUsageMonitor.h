@class NSDictionary, NSData, BMSource;

@interface USApplicationUsageMonitor : _DKMonitor

@property void *notificationID;
@property unsigned long long activityNotificationHandle;
@property (copy, nonatomic) NSDictionary *activeApplicationEvents;
@property (copy, nonatomic) NSData *frontmostAuditToken;
@property (copy, nonatomic) NSDictionary *frontmostApplicationUsage;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;
@property (retain, nonatomic) BMSource *appUsageSource;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;

- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)stop;
- (id)init;
- (void)platformSpecificStop;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void).cxx_destruct;
- (void)invalidateInstantState;
- (void)_obtainCurrentValueWithActivityState:(unsigned long long)a0;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0 clearAll:(BOOL)a1;
- (void)registerForAppChangeNotifications;
- (void)updateAppDataInContextStore;
- (void)updateFrontmostAuditTokenData:(id)a0 frontmostAppUsage:(id)a1;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;

@end
