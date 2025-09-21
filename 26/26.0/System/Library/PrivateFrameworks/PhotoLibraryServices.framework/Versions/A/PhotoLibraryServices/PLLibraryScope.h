@class NSString, NSSet, NSData, NSDate;

@interface PLLibraryScope : PLShare <PLSyncableObject, PLCloudDeletable> {
    BOOL _needsResetShareStateAfterSave;
    BOOL _didPrepareAssetsForScopeDelete;
}

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) short scopeSyncingState;
@property (nonatomic) short previewState;
@property (retain, nonatomic) NSData *rulesData;
@property (nonatomic) short participantCloudUpdateState;
@property (nonatomic) short autoSharePolicy;
@property (nonatomic) short exitState;
@property (nonatomic) short exitType;
@property (nonatomic) unsigned short exitSource;
@property (copy, nonatomic) NSDate *lastParticipantAssetTrashNotificationDate;
@property (copy, nonatomic) NSDate *lastParticipantAssetTrashNotificationViewedDate;
@property (nonatomic) int countOfAssetsAddedByCameraSmartSharing;
@property (retain, nonatomic) NSSet *libraryScopeAssets;
@property (readonly, retain, nonatomic) id localID;
@property (nonatomic) short cloudLocalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (short)activeSyncingStateToUse;
+ (void)informRapportToAddShareParticipantUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)fireParticipantAssetTrashNotificationIfNeededWithPhotoLibrary:(id)a0 forceNotification:(BOOL)a1;
+ (id)localOnlySharedSyncScopeIdentifierPrefix;
+ (short)subclassKind;
+ (id)_nearestDateSetToHour:(long long)a0 minute:(long long)a1;
+ (void)updateLibraryScopeActiveDefaultsWithManagedObjectContext:(id)a0;
+ (BOOL)libraryScopeScopeIdentifierWasCreatedInLocalOnlyMode:(id)a0;
+ (id)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithManagedObjectContext:(id)a0;
+ (id)_shareEverythingInternalQuery;
+ (BOOL)_preflightChecksForFiringParticipantAssetTrashNotificationWithPhotoLibrary:(id)a0;
+ (id)predicateToExcludeExitingLibraryScopes;
+ (id)predicateForPreviewLibraryScope;
+ (id)compoundPredicateForMarkingOnboardingPreviewAssetsWithRulePredicate:(id)a0;
+ (id)entityName;
+ (id)_libraryForEnumerationFromBundle:(id)a0 withName:(const char *)a1;
+ (BOOL)shouldAllowFetchURLWithScopeChange:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (id)scopeIdentifierPrefixInLibrary:(id)a0;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 unitTestMode:(BOOL)a3 inPhotoLibrary:(id)a4;
+ (id)resetLibraryScopeAssetStatesWithManagedObjectContext:(id)a0;
+ (void)_cleanupLocalPreviewLibraryScopesInManagedObjectContext:(id)a0;
+ (id)activeLibraryScopeInManagedObjectContext:(id)a0;
+ (short)participationStateFromLibraryScope:(id)a0;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (BOOL)libraryScopeIsActiveWithScopeSyncingState:(short)a0;
+ (void)informRapportToRemoveShareParticipantUUIDs:(id)a0 photoLibraryBundle:(id)a1;
+ (BOOL)_queryIsShareEverythingInternalQuery:(id)a0;
+ (id)predicateForActiveLibraryScope;
+ (id)_computeCountOfContributedAssetsTrashedByOtherParticipantsSinceLastNotificationDateInLibraryScope:(id)a0 outPhotoCount:(unsigned long long *)a1 outVideoCount:(unsigned long long *)a2 outItemCount:(unsigned long long *)a3;
+ (unsigned long long)_immediateNotificationAssetThresholdToUseWithPhotoLibrary:(id)a0;

- (void)willSave;
- (void)didSave;
- (id)scopedIdentifier;
- (id)cplFullRecord;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (void)removeParticipantsWithParticipantUUIDs:(id)a0 fromLibraryScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(unsigned short)a3 completionHandler:(id /* block */)a4;
- (void)prepareForDeletion;
- (BOOL)incrementallyDeleteAndSaveWithError:(id *)a0;
- (BOOL)libraryScopeIsActive;
- (void)setScopeSyncingState:(short)a0;
- (BOOL)removePeopleRulesForPersonUUID:(id)a0;
- (void)_confirmAllRemainingOnboardingPreviewAssetsWithProgress:(id)a0 photoLibrary:(id)a1;
- (void)_insertOwnedParticipantInLibrary:(id)a0 unitTestMode:(BOOL)a1;
- (BOOL)_libraryScopeWasCreatedInLocalOnlyMode;
- (void)_verifyCurrentUserParticipantExists;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (id)activateScopeWithCompletionHandler:(id /* block */)a0;
- (id)cloudSyncableRulesData;
- (BOOL)confirmAllRemainingOnboardingPreviewAssetsWithProgress:(id)a0 databaseContext:(id)a1 withError:(id *)a2;
- (id)cplScopeChange;
- (void)deactivateScopeWithCompletionHandler:(id /* block */)a0;
- (id)markOnboardingPreviewAssetsByProcessingRulesWithExcludePersonUUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldEnableRulesChangeTracker;
- (void)startExitWithRetentionPolicy:(long long)a0 exitSource:(unsigned short)a1 completionHandler:(id /* block */)a2;
- (void)startTrackingParticipantAssetTrashStateIfNeeded;
- (void)stopTrackingParticipantAssetTrashedStateIfNeeded;
- (BOOL)updatePeopleRulesForAllTombstonedPersons;
- (BOOL)updatePeopleRulesForTombstonePersonUUID:(id)a0 replaceWithPersonUUID:(id)a1;
- (void)updateRulesDataWithCloudSyncableRulesData:(id)a0;
- (void)userViewedAssetTrashNotificationWithManagedObjectContext:(id)a0;

@end
