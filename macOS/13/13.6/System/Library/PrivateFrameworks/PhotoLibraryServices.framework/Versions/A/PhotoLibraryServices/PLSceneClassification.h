@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject

@property (nonatomic) unsigned int sceneIdentifier;
@property (nonatomic) double confidence;
@property (nonatomic) long long packedBoundingBoxRect;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)a0 library:(id)a1 completion:(id /* block */)a2;
+ (id)insertIntoPhotoLibrary:(id)a0 asset:(id)a1 sceneIdentifier:(int)a2 confidence:(double)a3 packedBoundingBoxRect:(long long)a4;
+ (BOOL)isUtilityAssetForSharedLibrary:(id)a0;
+ (id)PLJunkSceneClassificationIDForLabel:(id)a0;
+ (unsigned long long)_pool_countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
+ (unsigned long long)countOfOrphanedSceneClassificationsWithLimit:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;

- (void)willSave;
- (void)_checkForOrphanedSceneClassification;
- (id)debugLogDescription;
- (BOOL)isDocumentClassification;

@end
