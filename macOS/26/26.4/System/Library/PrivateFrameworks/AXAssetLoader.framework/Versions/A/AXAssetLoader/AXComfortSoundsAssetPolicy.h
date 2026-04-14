@interface AXComfortSoundsAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (id)minSupportedFormatVersion;
- (id)maxSupportedFormatVersion;

@end
