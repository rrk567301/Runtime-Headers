@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (BOOL)shouldUseProductionServerForInternalBuilds;
- (id)minSupportedFormatVersion;
- (id)maxSupportedFormatVersion;

@end
