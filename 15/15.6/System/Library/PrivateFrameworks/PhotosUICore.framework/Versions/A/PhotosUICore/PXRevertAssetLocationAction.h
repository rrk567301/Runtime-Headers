@interface PXRevertAssetLocationAction : PXAssetLocationAction

+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (id)actionIdentifier;
- (id)analyticsActionString;
- (id)locationForAsset:(id)a0 shifted:(char *)a1;

@end
