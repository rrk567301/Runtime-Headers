@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryInternalServiceProtocol> {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteAllInitialSuggestionsWithReply:(id /* block */)a0;
- (void)getSearchIndexProgressWithReply:(id /* block */)a0;
- (void)mergeDuplicateAssetUuidSelection:(id)a0 reply:(id /* block */)a1;
- (void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)a0 reply:(id /* block */)a1;
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id /* block */)a0;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1;
- (void)updateInitialSuggestionsWithIdentifiers:(id)a0 dateLastUsed:(id)a1 reply:(id /* block */)a2;
- (void)getBackgroundJobServiceStateWithReply:(id /* block */)a0;
- (void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)a0 reply:(id /* block */)a1;
- (void)featureProcessingSnapshotWithReply:(id /* block */)a0;
- (void)resumeSearchIndexingWithReply:(id /* block */)a0;
- (void)assetsArePendingForDuplicateMergeProcessing:(id)a0 reply:(id /* block */)a1;
- (void)getAssetCountsWithReply:(id /* block */)a0;
- (void)getBackgroundJobServiceStatusCenterDumpWithReply:(id /* block */)a0;
- (void)forceRunBackgroundJobsOnLibraryPath:(id)a0 criteriaShortCode:(id)a1 completionHandler:(id /* block */)a2;
- (void)processIdenticalDuplicatesWithProcessingType:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)invalidateReverseLocationDataOnAllAssetsWithReply:(id /* block */)a0;
- (void)signalAvailabilityWithChanges:(id)a0 reply:(id /* block */)a1;
- (void)getLibrarySizesFromDB:(BOOL)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateAssetLocationDataWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)resetLimitedLibraryAccessForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)setFetchFilterWithAssets:(id)a0 forApplication:(id)a1 withAuditToken:(struct { unsigned int x0[8]; })a2 completionHandler:(id /* block */)a3;
- (void)readAppPrivateDataBelongingToBundleID:(id)a0 reply:(id /* block */)a1;
- (void)waitForSearchIndexExistenceWithReply:(id /* block */)a0;
- (void)repairMemoriesWithUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)metricsForLibraryAtURL:(id)a0 reply:(id /* block */)a1;
- (void)clearAvailabilityWithReply:(id /* block */)a0;
- (void)availabilityStateShouldPersist:(BOOL)a0 reply:(id /* block */)a1;
- (void)failAvailabilityWithReply:(id /* block */)a0;
- (unsigned long long)_assetCountInManagedObjectContext:(id)a0 forSyncedAssets:(BOOL)a1;
- (void)pauseSearchIndexingWithReply:(id /* block */)a0;
- (void)generateInitialSuggestionsWithStyleType:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)getSizeOfResourcesToUploadByCPLWithReply:(id /* block */)a0;
- (void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
- (void)reloadMomentGenerationOptions;
- (void)setAssetKeywords:(id)a0 forAssetUUID:(id)a1 reply:(id /* block */)a2;
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)deleteiTunesSyncedContentWithCompletionHandler:(id /* block */)a0;
- (void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(id /* block */)a0;

@end
