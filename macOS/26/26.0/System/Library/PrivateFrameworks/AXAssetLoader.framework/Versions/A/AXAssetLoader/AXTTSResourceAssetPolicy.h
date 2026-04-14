@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (id)launchActivityIdentifier;
- (id)compatibilityVersion;
- (id)_voiceIdentifierForAsset:(id)a0;

@end
