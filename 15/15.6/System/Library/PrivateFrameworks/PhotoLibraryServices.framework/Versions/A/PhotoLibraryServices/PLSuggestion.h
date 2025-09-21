@class NSString, NSSet, NSData, NSDate;

@interface PLSuggestion : PLManagedObject <PLCloudDeletable, PLBackgroundUpdatesSharingComposition>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short subtype;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) short version;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *relevantUntilDate;
@property (retain, nonatomic) NSDate *expungeDate;
@property (retain, nonatomic) NSData *actionData;
@property (retain, nonatomic) NSData *featuresData;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *suggestionContext;
@property (retain, nonatomic) NSString *relatedCollectionUUID;
@property (retain, nonatomic) NSSet *keyAssets;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (nonatomic) unsigned short featuredState;
@property (nonatomic) long long availableFeatures;
@property (nonatomic) short restoreType;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short sharingComposition;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1;
+ (id)predicateForAllAssetsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (id)suggestionWithUUID:(id)a0 inPhotoLibrary:(id)a1;
+ (short)_calculateSharingCompositionForSuggestion:(id)a0;
+ (unsigned long long)_deleteSuggestionsMatchingPredicate:(id)a0 inManagedObjectContext:(id)a1;
+ (id)_representativeAssetIDsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (char)_suggestionSubtypeAllowedToContainSyndicatedAssets:(unsigned short)a0;
+ (id)_syncablePredicate;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (unsigned long long)deletePendingSuggestionsCreatedBefore:(id)a0 withTypes:(id)a1 andRejectedAssetsBySuggestionType:(id)a2 inManagedObjectContext:(id)a3;
+ (unsigned long long)deleteSuggestionsWithObjectIDs:(id)a0 inManagedObjectContext:(id)a1;
+ (id)predicateForPrivateOnlyCollectionsWithinSubset:(id)a0;
+ (id)predicateForSharedOnlyCollectionsWithinSubset:(id)a0;
+ (void)resetCloudStateInPhotoLibrary:(id)a0;
+ (id)suggestionObjectIDsContainingAsset:(id)a0;
+ (id)suggestionWithUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)suggestionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (id)suggestionsToPrefetchInManagedObjectContext:(id)a0;
+ (id)suggestionsToUploadInPhotoLibrary:(id)a0 limit:(long long)a1;
+ (id)suggestionsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;

- (char)isEmpty;
- (char)isPending;
- (void)delete;
- (void)prepareForDeletion;
- (void)willSave;
- (id)scopeIdentifier;
- (id)scopedIdentifier;
- (short)sharingComposition;
- (void)updateCachedCounts:(id)a0;
- (void)_recalculateSharingCompositionIfNeeded;
- (char)_sharingCompositionNeedsUpdate;
- (id)cplFullRecord;
- (id)cplSuggestionChange;
- (char)isSyncableChange;
- (id)mutableKeyAssets;
- (id)mutableRepresentativeAssets;
- (void)removeRepresentativeAsset:(id)a0;
- (void)replaceKeyAsset:(id)a0;
- (char)supportsCloudUpload;
- (void)updateStartAndEndDate;
- (char)updateWithCPLSuggestionChange:(id)a0 inPhotoLibrary:(id)a1;

@end
