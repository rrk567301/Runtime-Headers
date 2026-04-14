@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)maxSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (id)minSupportedFormatVersion;
- (BOOL)shouldUseProductionServerForInternalBuilds;
- (BOOL)shouldCopyLocally;

@end
