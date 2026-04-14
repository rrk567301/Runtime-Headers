@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (BOOL)shouldCopyLocally;
- (BOOL)shouldUseProductionServerForInternalBuilds;
- (id)minSupportedFormatVersion;

@end
