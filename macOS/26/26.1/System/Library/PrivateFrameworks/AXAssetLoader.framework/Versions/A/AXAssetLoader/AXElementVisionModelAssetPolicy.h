@interface AXElementVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)maxSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)minSupportedFormatVersion;

@end
