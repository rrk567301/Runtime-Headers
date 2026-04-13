@class FPDDomain, NSArray, NSString, NSData, NSFileProviderDomainVersion, NSURL;

@interface FPDDomainDeadEndBackend : NSObject <FPDDomainBackend> {
    FPDDomain *_domain;
}

@property (readonly, copy) NSArray *rootURLs;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSData *backingStoreIdentity;
@property (readonly, copy) NSURL *temporaryDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)start;
- (void)movingItemAtURL:(id)a0 requiresProvidingWithDestinationURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDomain:(id)a0;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)itemForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)reimportItemsBelowItemWithID:(id)a0 removeCachedItems:(BOOL)a1 markItemDataless:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)URLForItemID:(id)a0 creatingPlaceholderIfMissing:(BOOL)a1 ignoreAlternateContentsURL:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)enumerateWithSettings:(id)a0 lifetimeExtender:(id)a1 observer:(id)a2 completionHandler:(id /* block */)a3;
- (void)evictItemWithID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForStabilizationForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)rootURLs;
- (id)evictItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)itemIDForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isProviderForURL:(id)a0;
- (BOOL)needsRootsCreation;
- (id)createRootByImportingURL:(id)a0 error:(id *)a1;
- (void)itemForURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchFSItemsForItemIdentifiers:(id)a0 materializingIfNeeded:(BOOL)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)startProvidingItemAtURL:(id)a0 readerID:(id)a1 readingOptions:(unsigned long long)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)createItemBasedOnTemplate:(id)a0 fields:(unsigned long long)a1 urlWrapper:(id)a2 options:(unsigned long long)a3 bounceOnCollision:(BOOL)a4 request:(id)a5 completionHandler:(id /* block */)a6;
- (void)itemChangedAtURL:(id)a0 request:(id)a1;
- (BOOL)updateRootAfterDomainChangeWithError:(id *)a0;
- (void)dumpStateTo:(id)a0 limitNumberOfItems:(BOOL)a1;
- (void)copyDatabaseToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkForPendingSetChanges;
- (void)valuesForAttributes:(id)a0 forURL:(id)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (id)createIndexerWithExtension:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
- (void)fetchOperationServiceOrEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchServicesForItemID:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchVendorEndpointWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)bulkItemChanges:(id)a0 changedFields:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)trashItemAtURL:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)workingSetDidChangeWithCompletionHandler:(id /* block */)a0;
- (BOOL)isAllowedToProvideItemID:(id)a0 toConsumerWithIdentifier:(id)a1;

@end
