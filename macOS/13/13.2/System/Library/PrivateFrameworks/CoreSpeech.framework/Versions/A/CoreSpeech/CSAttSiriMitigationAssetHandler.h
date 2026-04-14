@class CSAsset, NSString, CSTrialAssetManager, CSAssetManager, CSTrialAssetDownloadMonitor;

@interface CSAttSiriMitigationAssetHandler : NSObject <CSTrialAssetDownloadMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSTrialAssetManager *trialAssetManager;
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *trialDownloadMonitor;
@property (nonatomic) BOOL overrideEnabled;
@property (retain, nonatomic) NSString *overridePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)trialAssetDownloadMonitorDelegate:(id)a0 didInstallNewAsset:(BOOL)a1 assetType:(unsigned long long)a2;
- (id)initWithAssetManager:(id)a0 withTrialAssetManager:(id)a1 withTrialDownloadMonitor:(id)a2 withAssetOverrideFlag:(BOOL)a3 withOverrideAssetPath:(id)a4;
- (void)getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)_receivedNewAssetUpdate:(id)a0;

@end
