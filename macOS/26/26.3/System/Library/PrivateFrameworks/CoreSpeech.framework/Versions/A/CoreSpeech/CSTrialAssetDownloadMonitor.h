@class NSDictionary;

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {
    NSDictionary *_trialClientDict;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)a0;
- (id)init;
- (void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)a0 onQueue:(id)a1;
- (void).cxx_destruct;
- (BOOL)_handleSiriAttAssetTrailDownloadForNamespace:(id)a0;
- (BOOL)_validateDownloadedAssetForAssetType:(unsigned long long)a0;
- (id)_trailStageDirectoryForAsset:(id)a0;

@end
