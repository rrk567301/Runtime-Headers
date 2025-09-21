@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)kickOffPendingLongLivedOperations;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)wipeAllCachesAndDie;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (id)initInternal;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)wipeServerConfigurationsAndDie;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)updatePushTokens;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;

@end
