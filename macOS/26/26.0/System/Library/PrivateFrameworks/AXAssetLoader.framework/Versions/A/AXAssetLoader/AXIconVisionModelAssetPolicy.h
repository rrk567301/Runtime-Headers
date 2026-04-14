@interface AXIconVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)minSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;

@end
