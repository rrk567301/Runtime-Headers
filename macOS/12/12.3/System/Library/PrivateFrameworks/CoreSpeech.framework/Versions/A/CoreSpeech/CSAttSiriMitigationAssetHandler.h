@class CSAsset, CSAssetManager, NSString;

@interface CSAttSiriMitigationAssetHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate, CSTrialAssetDownloadMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)voiceTriggerAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;
- (void)trialAssetDownloadMonitorDelegate:(id)a0 didInstallNewAsset:(BOOL)a1 assetType:(unsigned long long)a2;
- (void)_receivedNewAssetUpdate:(id)a0;
- (void)getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;

@end
