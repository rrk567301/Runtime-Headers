@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)insertIntoPhotoLibrary:(id)a0;

- (void)awakeFromInsert;
- (void)removeAssetsAtIndexes:(id)a0;
- (id)mutablePerceptualMatchingAssets;
- (void)updateAlbumType;
- (void)addAssets:(id)a0 type:(short)a1;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (id)duplicateAssetsFromCollection;
- (char)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (id)mutableMetadataMatchingAssets;
- (void)removeInternalAssets:(id)a0;
- (void)sortAssets;
- (char)supportsAssetOrderKeys;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;

@end
