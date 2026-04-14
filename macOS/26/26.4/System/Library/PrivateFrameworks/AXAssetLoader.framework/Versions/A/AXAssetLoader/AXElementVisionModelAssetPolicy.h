@interface AXElementVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)minSupportedFormatVersion;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)maxSupportedFormatVersion;

@end
