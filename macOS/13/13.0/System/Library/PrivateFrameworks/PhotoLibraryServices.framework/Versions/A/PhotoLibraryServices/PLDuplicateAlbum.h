@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;

- (void)awakeFromInsert;
- (void)removeAssetsAtIndexes:(id)a0;
- (BOOL)supportsAssetOrderKeys;
- (id)mutableMetadataMatchingAssets;
- (id)mutablePerceptualMatchingAssets;
- (void)addAssets:(id)a0 type:(short)a1;
- (void)removeInternalAssets:(id)a0;
- (void)updateAlbumType;
- (id)duplicateAssetsFromCollection;
- (void)sortAssets;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)cleanupAlbumForDeletedDuplicateAsset;

@end
