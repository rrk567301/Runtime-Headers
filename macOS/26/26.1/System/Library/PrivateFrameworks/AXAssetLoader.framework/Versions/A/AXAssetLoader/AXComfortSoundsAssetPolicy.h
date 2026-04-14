@interface AXComfortSoundsAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)maxSupportedFormatVersion;
- (id)launchActivityIdentifier;
- (id)minSupportedFormatVersion;
- (BOOL)shouldCopyLocally;

@end
