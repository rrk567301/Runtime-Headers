@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (id)initInternal;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)wipeAllCachesAndDie;
- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)wipeServerConfigurationsAndDie;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)kickOffPendingLongLivedOperations;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)updatePushTokens;

@end
