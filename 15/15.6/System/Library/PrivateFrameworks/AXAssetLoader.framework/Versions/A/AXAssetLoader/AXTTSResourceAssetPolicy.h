@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)compatibilityVersion;
- (id)assetType;
- (id)_voiceIdentifierForAsset:(id)a0;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (char)daemonShouldDownloadInBackgroundIfNeeded;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(char)a1;
- (id)launchActivityIdentifier;
- (char)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;

@end
