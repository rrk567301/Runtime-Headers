@interface AXComfortSoundsAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)minSupportedFormatVersion;
- (BOOL)shouldCopyLocally;
- (id)maxSupportedFormatVersion;
- (id)launchActivityIdentifier;

@end
