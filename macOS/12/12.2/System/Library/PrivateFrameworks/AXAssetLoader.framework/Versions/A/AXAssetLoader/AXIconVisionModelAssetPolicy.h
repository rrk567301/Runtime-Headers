@interface AXIconVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;

@end
