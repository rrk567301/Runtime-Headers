@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)kickOffPendingLongLivedOperations;
- (void)wipeAllCachesAndDie;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)wipeServerConfigurationsAndDie;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (id)initInternal;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)updatePushTokens;

@end
