@interface PXStoryRecipeClipUtilities : NSObject

+ (BOOL)canRotate1UpClipsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 clipCatalog:(id)a1 maxAdjacent1Ups:(long long)a2;
+ (BOOL)assetIsPortrait:(id)a0;
+ (BOOL)assetIsPet:(id)a0;
+ (BOOL)assetHasHighCurationScore:(id)a0;
+ (id)peopleSceneIdentifiers;
+ (BOOL)asset:(id)a0 isClassifiedAs:(id)a1;
+ (BOOL)assetHasSignificantFaceArea:(id)a0;
+ (id)petSceneIdentifiers;
+ (id)doNotRotateSceneIdentifiers;
+ (id)skySceneIdentifiers;
+ (id)doNotRotateWithSkySceneIdentifiers;
+ (BOOL)canRotateAsset:(id)a0;

@end
