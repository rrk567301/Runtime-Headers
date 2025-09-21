@class NSString, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, FPDDaemon;

@interface FPDaemonConnection : NSObject {
    NSXPCConnection<FPDDaemon> *_connectionQueueConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_getAttributeConnections;
    NSObject<OS_dispatch_source> *_getAttributeConnectionsIdleCleanupTimer;
}

@property (class, retain) NSString *disallowedConnectionReason;
@property (class, readonly, nonatomic) BOOL runningInSyncBubble;

@property (readonly, nonatomic) NSXPCConnection<FPDDaemon> *connection;
@property (nonatomic) unsigned int user;

+ (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
+ (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
+ (id)connectionForUser:(unsigned int)a0;
+ (id)sharedConnectionProxy;
+ (id)sharedConnection;
+ (id)synchronousSharedConnectionProxy;

- (void)dumpStateTo:(id)a0 providerFilter:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)unpinItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)a0;
- (void)evictItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)runFPCKForDomainWithID:(id)a0 databasesBackupsPath:(id)a1 options:(unsigned long long)a2 reason:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)validateDiagnosticsJson:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveConflictAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)bookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkErrorAgainstDiagnosticsJson:(id)a0 inputError:(id)a1 errorDirection:(id)a2 jobCode:(id)a3 underlying:(id)a4 completionHandler:(id /* block */)a5;
- (void)importDetachedFolder:(id)a0 parentID:(id)a1 logicalName:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)pinItemWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)detachKnownFolders:(id)a0 completionHandler:(id /* block */)a1;
- (void)runFPCKForDomainWithID:(id)a0 domainRootURL:(id)a1 databaseBackupPath:(id)a2 options:(unsigned long long)a3 reason:(unsigned long long)a4 launchType:(unsigned long long)a5 contentBarrier:(long long)a6 completionHandler:(id /* block */)a7;
- (void)spotlightReindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 completionHandler:(id /* block */)a3;
- (void)_test_retrieveItemWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)evictItemWithID:(id)a0 evictionReason:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)enumerateSearchResultForRequest:(id)a0 providerDomainID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithUser:(unsigned int)a0;
- (void)restoreUserURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDiagnosticsState:(id)a0 completionHandler:(id /* block */)a1;
- (void)startProvidingItemAtURL:(id)a0 fromProviderID:(id)a1 forConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (id)newXPCConnection;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)attachItemWithID:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)wakeUpForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)copyDatabaseForFPCKStartingAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)calculateNonPurgeableSpaceUsageOfDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)triggerDiagnosticsFor:(id)a0 triggeringError:(id)a1 uiOnly:(BOOL)a2 useDiagnostic:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)getSavedDiagnosticsFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)dumpIndexerInfoFor:(id)a0 withName:(id)a1 to:(id)a2 completionHandler:(id /* block */)a3;
- (id)listOfMonitoredAppsWithError:(id *)a0;
- (void)providersCompletionHandler:(id /* block */)a0;
- (void)updateLastUsedDateForFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)bookmarkableStringFromDocumentURL:(id)a0 error:(id *)a1;
- (void)spotlightReindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 completionHandler:(id /* block */)a2;
- (void)setIndexingEnabled:(BOOL)a0 forDomainIdentifier:(id)a1 providerIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)detachItemWithID:(id)a0 relocatingAtURL:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchAndStartEnumeratingWithSettings:(id)a0 observer:(id)a1 completionHandler:(id /* block */)a2;
- (void)extendBookmarkForFileURL:(id)a0 toConsumerID:(id)a1 completionHandler:(id /* block */)a2;
- (void)attachKnownFolders:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)nonErrorCheckingConnection;
- (void)getURLForContainerWithItemID:(id)a0 inDataScopeDomainWithIdentifier:(id)a1 documentsScopeDomainIdentifier:(id)a2 documentsFolderItemIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)dumpTelemetryTo:(id)a0 providerFilter:(id)a1 completionHandler:(id /* block */)a2;
- (void)documentURLFromBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceIngestionForItemIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)backUpUserURL:(id)a0 outputUserURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDomainServicerForProviderDomainID:(id)a0 handler:(id /* block */)a1;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)a0 fromProviderID:(id)a1 toConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (void)dumpDatabaseAt:(id)a0 fullDump:(BOOL)a1 writeTo:(id)a2 completionHandler:(id /* block */)a3;
- (void)_test_setDocIDResolutionPolicy:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)detachItemWithID:(id)a0 relocatingAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)providerDomainsCompletionHandler:(id /* block */)a0;
- (void)forceLatestVersionOnDiskForItemID:(id)a0 completionHandler:(id /* block */)a1;
- (id)valuesForAttributes:(id)a0 forItemAtURL:(id)a1 error:(id *)a2;
- (void)resumeIndexingFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)stateForDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)waitForStabilizationOfDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)runFPCKForDomainWithID:(id)a0 databasesBackupsPath:(id)a1 url:(id)a2 options:(unsigned long long)a3 reason:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)restoreUserURL:(id)a0 fromBuild:(id)a1 restoreType:(id)a2 completionHandler:(id /* block */)a3;
- (void)restoreUserURL:(id)a0 cleanupOnSuccess:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)runFPCKForDomainWithID:(id)a0 domainRootURL:(id)a1 databaseBackupPath:(id)a2 options:(unsigned long long)a3 reason:(unsigned long long)a4 launchType:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (void)getPersonaForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)extendSandboxForFileURL:(id)a0 fromProviderID:(id)a1 toConsumerID:(id)a2 completionHandler:(id /* block */)a3;
- (id)documentURLFromBookmarkableString:(id)a0 error:(id *)a1;
- (void)waitForStabilizationOfDomainWithID:(id)a0 mode:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)pauseIndexingFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)runFPCKForDomainWithID:(id)a0 databasesBackupsPath:(id)a1 url:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)evictItemAtURL:(id)a0 evenIfEnumeratingFP:(BOOL)a1 andClearACLForConsumer:(id)a2 completionHandler:(id /* block */)a3;
- (id)connectionProxy;

@end
