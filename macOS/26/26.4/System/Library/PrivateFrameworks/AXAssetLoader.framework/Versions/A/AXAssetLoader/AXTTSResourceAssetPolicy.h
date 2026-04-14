@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (id)launchActivityIdentifier;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (id)compatibilityVersion;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)_voiceIdentifierForAsset:(id)a0;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;

@end
