@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (id)_init;
- (void)wipeAllCachesAndDie;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)wipeServerConfigurationsAndDie;
- (void)updatePushTokens;
- (void)globalDeviceIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)kickOffPendingLongLivedOperations;

@end
