@class NSString, NSSet, NSDate;
@protocol PLCollectionShareSyncBackend;

@interface PLCollectionShare : PLShare <PLSearchableManagedObject, PLSyncableObject, PLCloudDeletable, PLShareWithCachedProperties> {
    id<PLCollectionShareSyncBackend> _syncBackend;
}

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short collectionShareCurrentUserContributionState;
@property (copy, nonatomic) NSString *phoneInvitationToken;
@property (copy, nonatomic) NSDate *cloudSubscriptionDate;
@property (nonatomic) short unseenContentState;
@property (nonatomic) short unseenAssetsCount;
@property (nonatomic) short notificationState;
@property (nonatomic) short publicURLState;
@property (copy, nonatomic) NSString *cloudPersonID;
@property (nonatomic) short collectionShareKind;
@property (nonatomic) short creationType;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) BOOL customSortAscending;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) short collectionShareExpiringState;
@property (nonatomic) BOOL allowsAccessRequests;
@property (retain, nonatomic) NSSet *collectionShareAssets;
@property (retain, nonatomic) NSSet *collectionShareMasters;
@property (readonly, retain, nonatomic) id localID;
@property (nonatomic) short cloudLocalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (BOOL)shouldAllowFetchURLWithScopeChange:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (short)subclassKind;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (id)isEligibleForSearchIndexingPredicateForLibraryIdentifier:(long long)a0;
+ (id)scopeIdentifierPrefixInLibrary:(id)a0;
+ (id)relationshipKeyPathsToPrefetch;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 kind:(short)a3 clientBundleIdentifier:(id)a4 unitTestMode:(BOOL)a5 inPhotoLibrary:(id)a6;
+ (id)syncBackendForKind:(short)a0 photoLibrary:(id)a1;
+ (id)fetchCollectionSharesWithUUIDs:(id)a0 propertiesToFetch:(id)a1 managedObjectContext:(id)a2;

- (BOOL)isSyncableChange;
- (void)willSave;
- (void)prepareForDeletion;
- (void)setLastModifiedDate:(id)a0;
- (id)cplFullRecord;
- (id)searchIdentifier;
- (id)scopedIdentifier;
- (void).cxx_destruct;
- (BOOL)isEligibleForSearchIndexing;
- (BOOL)supportsCloudUpload;
- (void)updateTitle:(id)a0;
- (BOOL)incrementallyDeleteAndSaveWithError:(id *)a0;
- (void)markAsViewed;
- (void)recomputeCachedValues;
- (void)removeShareParticipantUUIDs:(id)a0 photoLibrary:(id)a1;
- (void)trash;
- (void)unsubscribeWithCompletionHandler:(id /* block */)a0;
- (void)updatePublicPermission:(long long)a0;
- (void)updatePublicURLState:(short)a0;
- (void)_insertOwnedParticipantInLibrary:(id)a0 unitTestMode:(BOOL)a1;
- (id)_listOfLastModifiedDateChangeProperties;
- (BOOL)_shouldUpdateLastModifiedDate;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (id)assetToSelfKeyPath;
- (void)checkServerForChanges;
- (id)cplScopeChange;
- (void)declineWithCompletionHandler:(id /* block */)a0;
- (BOOL)isCurrentUserOwner;
- (BOOL)locallyIncrementallyDeleteAndSaveWithError:(id *)a0;
- (void)markPendingInvitationAsSpamWithCompletionHandler:(id /* block */)a0;
- (void)prioritizeDownloads:(BOOL)a0;
- (void)publishAssets:(id)a0 withComment:(id)a1;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (void)reconcileModelRelationshipsWithCompletionHandler:(id /* block */)a0;
- (unsigned int)savedAssetTypeMask;
- (void)sendInvitationsForShareParticipantUUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)syncBackend;
- (void)updateCollectionShareCurrentUserContributionStateIfNeeded;

@end
