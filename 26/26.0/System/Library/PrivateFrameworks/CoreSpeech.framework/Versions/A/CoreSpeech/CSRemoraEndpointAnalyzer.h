@class OSDAnalyzer, NSString, NSObject;
@protocol OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSRemoraEndpointAnalyzer : CSEndpointAnalyzerBase <CSAssetManagerDelegate, OSDAnalyzerDelegate> {
    id<CSEndpointAnalyzerDelegate> _delegate;
    unsigned long long _activeChannel;
    NSString *_mhId;
    NSString *_endpointerModelVersion;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) BOOL didAddAudio;
@property (retain, nonatomic) OSDAnalyzer *osdAnalyzer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActiveChannel:(unsigned long long)a0;
- (void)setEndpointerModelVersion:(id)a0;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)setDelegate:(id)a0;
- (id)endpointerModelVersion;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (id)init;
- (void)updateEndpointerThreshold:(float)a0;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (void)setMhId:(id)a0;
- (id)mhId;
- (unsigned long long)activeChannel;
- (id)delegate;
- (void).cxx_destruct;
- (void)_updateAssetWithCurrentLanguage;
- (void)_emitEndpointDetectedEventWithEndpointTimeMs:(double)a0 endpointBufferHostTime:(unsigned long long)a1 endpointerFeatures:(id)a2 endpointerDecisionLagInNs:(double)a3 extraDelayMs:(unsigned long long)a4 endpointScore:(double)a5 asrFeaturesLatencies:(id)a6;
- (void)_loadAndSetupEndpointerAssetIfNecessary;
- (void)_readParametersFromHEPAsset:(id)a0;
- (void)_updateAssetWithLanguage:(id)a0;
- (void)osdAnalyzer:(id)a0 didUpdateOSDFeatures:(id)a1;
- (void)terminateProcessing;

@end
