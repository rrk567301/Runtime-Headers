@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)minSupportedFormatVersion;
- (BOOL)shouldUseProductionServerForInternalBuilds;
- (BOOL)shouldCopyLocally;
- (id)maxSupportedFormatVersion;
- (id)launchActivityIdentifier;

@end
