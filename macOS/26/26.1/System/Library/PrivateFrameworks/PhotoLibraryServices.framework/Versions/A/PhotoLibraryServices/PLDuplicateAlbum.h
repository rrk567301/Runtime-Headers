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
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (id)mutableMetadataMatchingAssets;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)removeInternalAssets:(id)a0;
- (id)duplicateAssetsFromCollection;
- (void)sortAssets;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (void)addAssets:(id)a0 type:(short)a1;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (BOOL)supportsAssetOrderKeys;
- (id)mutablePerceptualMatchingAssets;
- (void)updateAlbumType;

@end
