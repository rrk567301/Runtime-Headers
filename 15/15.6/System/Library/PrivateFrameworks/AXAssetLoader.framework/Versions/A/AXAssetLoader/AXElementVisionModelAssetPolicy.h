@interface AXElementVisionModelAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (char)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
