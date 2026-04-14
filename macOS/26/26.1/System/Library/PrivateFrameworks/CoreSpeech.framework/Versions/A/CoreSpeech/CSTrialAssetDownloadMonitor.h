@class NSDictionary;

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {
    NSDictionary *_trialClientDict;
}

+ (id)sharedInstance;

- (void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)a0 onQueue:(id)a1;
- (BOOL)_validateDownloadedAssetForAssetType:(unsigned long long)a0;
- (BOOL)_handleSiriAttAssetTrailDownloadForNamespace:(id)a0;
- (void).cxx_destruct;
- (id)_trailStageDirectoryForAsset:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)a0;
- (id)init;

@end
