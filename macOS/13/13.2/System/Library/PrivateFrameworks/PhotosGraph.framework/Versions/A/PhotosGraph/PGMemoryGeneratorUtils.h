@interface PGMemoryGeneratorUtils : NSObject

+ (id)outdoorROINodesInGraph:(id)a0;
+ (id)babyAndChildPersonNodesAtHomeOrFrequentLocationInGraph:(id)a0;
+ (id)outdoorROIMomentNodesNotAtHomeOrFrequentLocationInGraph:(id)a0 useMomentFeatureEdges:(BOOL)a1;
+ (id)_outdoorROITypes;
+ (id)momentNodesAtHomeOrWorkOrFrequentLocationInGraph:(id)a0;
+ (id)filterImportedAssetsWithoutLocationAndWithoutSceneOrPersonOverlapFromAllAssets:(id)a0 withGraph:(id)a1;
+ (id)filterImportedAssets:(id)a0 byOverlapWithRelevantAssets:(id)a1 withGraph:(id)a2;
+ (id)personAndPetLocalIdentifiersInAssets:(id)a0;
+ (BOOL)isImportedAsset:(id)a0;

@end
