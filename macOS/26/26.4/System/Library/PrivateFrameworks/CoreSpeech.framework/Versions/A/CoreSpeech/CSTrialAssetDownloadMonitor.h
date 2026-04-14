@class NSDictionary;

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {
    NSDictionary *_trialClientDict;
}

+ (id)sharedInstance;

- (BOOL)_validateDownloadedAssetForAssetType:(unsigned long long)a0;
- (void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)a0 onQueue:(id)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)a0;
- (id)init;
- (id)_trailStageDirectoryForAsset:(id)a0;
- (BOOL)_handleSiriAttAssetTrailDownloadForNamespace:(id)a0;

@end
