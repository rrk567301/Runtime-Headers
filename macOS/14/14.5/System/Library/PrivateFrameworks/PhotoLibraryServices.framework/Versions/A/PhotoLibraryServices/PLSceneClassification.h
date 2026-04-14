@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (nonatomic) unsigned int sceneIdentifier;
@property (nonatomic) double confidence;
@property (nonatomic) long long packedBoundingBoxRect;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) short classificationType;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributesForTemporalSceneClassifications;

+ (id)entityName;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)a0 library:(id)a1 includeTemporalClassifications:(BOOL)a2 completion:(id /* block */)a3;
+ (id)insertIntoPhotoLibrary:(id)a0 asset:(id)a1 sceneIdentifier:(int)a2 confidence:(double)a3 packedBoundingBoxRect:(long long)a4 startTime:(double)a5 duration:(double)a6 classificationType:(long long)a7;
+ (id)PLJunkSceneClassificationIDForLabel:(id)a0;
+ (BOOL)isUtilityAssetForSharedLibrary:(id)a0;
+ (unsigned long long)_pool_countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
+ (unsigned long long)countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;

- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;
- (void)_checkForOrphanedSceneClassification;
- (BOOL)_validateInterpropertyValues:(id *)a0;
- (id)debugLogDescription;
- (BOOL)isDocumentClassification;
- (BOOL)isScreenshotClassification;

@end
