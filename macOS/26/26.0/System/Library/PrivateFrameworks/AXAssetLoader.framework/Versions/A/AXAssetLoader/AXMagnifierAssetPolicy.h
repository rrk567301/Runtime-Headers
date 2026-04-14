@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)minSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (BOOL)shouldUseProductionServerForInternalBuilds;
- (BOOL)shouldCopyLocally;
- (id)maxSupportedFormatVersion;

@end
