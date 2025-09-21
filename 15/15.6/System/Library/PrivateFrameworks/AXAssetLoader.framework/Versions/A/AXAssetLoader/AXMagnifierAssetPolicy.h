@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (char)shouldCopyLocally;
- (char)shouldUseProductionServerForInternalBuilds;

@end
