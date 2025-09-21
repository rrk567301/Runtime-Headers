@interface PXStoryRecipeClipUtilities : NSObject

+ (char)canRotateAsset:(id)a0;
+ (char)asset:(id)a0 isClassifiedAs:(id)a1;
+ (char)assetHasHighCurationScore:(id)a0;
+ (char)assetHasSignificantFaceArea:(id)a0;
+ (char)assetIsPet:(id)a0;
+ (char)assetIsPortrait:(id)a0;
+ (char)assetIsPortraitAspectWithLargeVerticalFaceArea:(id)a0;
+ (char)canRotate1UpClipsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 clipCatalog:(id)a1 maxAdjacent1Ups:(long long)a2;
+ (id)doNotRotateSceneIdentifiers;
+ (id)doNotRotateWithSkySceneIdentifiers;
+ (id)peopleSceneIdentifiers;
+ (id)petSceneIdentifiers;
+ (id)skySceneIdentifiers;

@end
