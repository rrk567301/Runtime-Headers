@class PHObjectPlaceholder, PHRelationshipChangeRequestHelper, NSString, PHAssetCollection, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHAssetCollectionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (retain, nonatomic) PHAssetCollection *originalAssetCollection;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *customKeyAssetHelper;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) char customSortAscending;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetCollection;
@property (retain, nonatomic) NSString *title;
@property (readonly) char isNewRequest;
@property (readonly, getter=isMutated) char mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic, getter=isClientEntitled) char clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (nonatomic) char shouldPerformConcurrentWork;

+ (id)_changeRequestForAssetCollection:(id)a0 optionalAssets:(id)a1;
+ (void)_deleteAssetCollections:(id)a0 withOperation:(long long)a1 topLevelSelector:(SEL)a2;
+ (id)changeRequestForAssetCollection:(id)a0;
+ (id)changeRequestForAssetCollection:(id)a0 assets:(id)a1;
+ (id)creationRequestForAssetCollectionCopyFromAssetCollection:(id)a0;
+ (id)creationRequestForAssetCollectionWithTitle:(id)a0;
+ (void)deleteAssetCollections:(id)a0;
+ (void)expungeAssetCollections:(id)a0;
+ (void)undeleteAssetCollections:(id)a0;
+ (id)validateAssetCollectionTitle:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)isPinned;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (void)setIsPinned:(char)a0;
- (id)_mutableAssetsObjectIDsAndUUIDs;
- (id)_mutableCustomKeyAssetObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareCustomKeyAssetIDIfNeeded;
- (void)_prepareWithFetchResult:(id)a0;
- (void)_setOriginalAssetCollection:(id)a0;
- (void)addAssets:(id)a0;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)insertAsset:(id)a0 inAssetsAtIndex:(unsigned long long)a1;
- (void)insertAssets:(id)a0 atIndexes:(id)a1;
- (void)moveAssetsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)a0;
- (void)removeAssets:(id)a0;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)a0 withAsset:(id)a1;
- (void)replaceAssetsAtIndexes:(id)a0 withAssets:(id)a1;
- (void)setCustomKeyAsset:(id)a0;
- (char)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end
