@interface AXElementVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)minSupportedFormatVersion;
- (id)maxSupportedFormatVersion;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)launchActivityIdentifier;

@end
