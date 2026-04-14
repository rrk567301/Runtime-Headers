@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)compatibilityVersion;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (id)_voiceIdentifierForAsset:(id)a0;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)launchActivityIdentifier;

@end
