@class GKPlayerInternal, GKDaemonProxy;

@interface GKClientPreferencesSupport : NSObject <GKPreferencesSupport>

@property (readonly) GKDaemonProxy *daemonProxy;
@property (readonly) char shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) GKPlayerInternal *localPlayerInternal;

- (id)valueRestrictionForKey:(id)a0 handler:(id /* block */)a1;
- (void)didSetEnvironment;
- (void)didSetInboxContactsOnlyWithRefresh:(char)a0;
- (void)didSetStoreBagUrl;
- (char)restrictionEnabledForKey:(id)a0;
- (char)restrictionEnabledForKey:(id)a0 applicationID:(id)a1;
- (id)valueRestrictionForKey:(id)a0;

@end
