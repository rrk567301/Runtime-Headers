@class NSString, PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (nonatomic, setter=managedObjectOriginal_setSceneIdentifier:) long long managedObjectOriginal_sceneIdentifier;
@property (nonatomic) unsigned long long sceneIdentifier;
@property (nonatomic) double confidence;
@property (nonatomic) long long packedBoundingBoxRect;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) short classificationType;
@property (copy, nonatomic) NSString *thumbnailIdentifier;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributesForTemporalSceneClassifications;

+ (id)entityName;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)a0 library:(id)a1 includeTemporalClassifications:(BOOL)a2 completion:(id /* block */)a3;
+ (BOOL)isUtilityAssetForSharedLibrary:(id)a0;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)a0 library:(id)a1 includeTemporalClassifications:(BOOL)a2 sceneClassificationTypePredicate:(id)a3 completion:(id /* block */)a4;
+ (unsigned long long)countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
+ (id)insertIntoPhotoLibrary:(id)a0 asset:(id)a1 sceneIdentifier:(unsigned long long)a2 confidence:(double)a3 packedBoundingBoxRect:(long long)a4 startTime:(double)a5 duration:(double)a6 classificationType:(long long)a7 thumbnailIdentifier:(id)a8;
+ (unsigned long long)_pool_countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
+ (id)PLJunkSceneClassificationIDForLabel:(id)a0;
+ (id)fetchSceneClassificationsForAdditionalAttributes:(id)a0 managedObjectContext:(id)a1;

- (void)willSave;
- (unsigned long long)sceneIdentifier;
- (void)setSceneIdentifier:(unsigned long long)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateInterpropertyValues:(id *)a0;
- (void)_checkForOrphanedSceneClassification;
- (BOOL)isScreenshotClassification;
- (BOOL)validateForInsert:(id *)a0;
- (id)debugLogDescription;
- (BOOL)isDocumentClassification;

@end
