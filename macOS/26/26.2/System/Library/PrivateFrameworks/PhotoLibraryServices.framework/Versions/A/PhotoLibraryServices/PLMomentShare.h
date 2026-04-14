@class NSString, NSData, NSSet;

@interface PLMomentShare : PLShare <PLCloudDeletable, PLShareWithCachedProperties>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) short compatibilityState;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSData *previewData;
@property (nonatomic) BOOL shouldIgnoreBudgets;
@property (nonatomic) BOOL shouldNotifyOnUploadCompletion;
@property (nonatomic) BOOL forceSyncAttempted;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;
@property (retain, nonatomic) NSSet *momentShareAssets;
@property (retain, nonatomic) NSSet *momentShareMasters;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (void)forceSyncMomentShares:(id)a0 photoLibrary:(id)a1;
+ (short)subclassKind;
+ (id)momentShareWithOriginatingScopeIdentifier:(id)a0 inManagedObjectContext:(id)a1;
+ (id)scopeIdentifierPrefixInLibrary:(id)a0;
+ (id)createOwnedShareWithUUID:(id)a0 creationDate:(id)a1 title:(id)a2 inPhotoLibrary:(id)a3;
+ (id)insertOrUpdateShareWithCPLScopeChange:(id)a0 inPhotoLibrary:(id)a1;
+ (id)momentSharesReferencedInUploadBatchContainer:(id)a0 inPhotoLibrary:(id)a1;
+ (BOOL)shouldAllowFetchURLWithScopeChange:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (BOOL)supportsCPLScopeType:(long long)a0;
+ (id)listOfSyncedProperties;

- (void)willSave;
- (void)prepareForDeletion;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (id)_contactStore;
- (void)recomputeCachedValues;
- (void)trash;
- (BOOL)_isOwnerInContacts;
- (BOOL)_shouldAutoAccept;
- (void)_updateWithCPLMomentShare:(id)a0 inPhotoLibrary:(id)a1;
- (id)assetToSelfKeyPath;
- (void)autoAcceptShareIfNecessary;
- (id)cplScopeChange;
- (unsigned long long)estimateUploadSize;
- (void)publishWithCompletionHandler:(id /* block */)a0;
- (unsigned int)savedAssetTypeMask;

@end
