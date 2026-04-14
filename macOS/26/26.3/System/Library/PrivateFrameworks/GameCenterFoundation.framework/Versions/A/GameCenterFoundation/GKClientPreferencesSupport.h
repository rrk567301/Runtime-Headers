@class NSString, GKDaemonProxy;

@interface GKClientPreferencesSupport : NSObject <GKPreferencesSupport>

@property (readonly) GKDaemonProxy *daemonProxy;
@property (readonly) BOOL shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) BOOL localPlayerIsUnderage;
@property (readonly, copy) NSString *localPlayerID;
@property (readonly) int localPlayerAgeCategory;

- (int)effectiveBoolValueForSetting:(id)a0 applicationID:(id)a1;
- (id)effectiveValueForSetting:(id)a0;
- (void)didSetEnvironment;
- (void)didSetInboxContactsOnlyWithRefresh:(BOOL)a0;
- (void)didSetStoreBagUrl;

@end
