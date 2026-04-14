@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)wipeServerConfigurationsAndDie;
- (id)initInternal;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)kickOffPendingLongLivedOperations;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)wipeAllCachesAndDie;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)updatePushTokens;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;

@end
