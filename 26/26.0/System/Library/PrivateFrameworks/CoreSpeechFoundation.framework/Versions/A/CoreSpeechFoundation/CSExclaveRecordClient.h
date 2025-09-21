@class CSExclaveIndicatorController, NSString, CSSecureSiriAudioProvidingProxy, NSObject;
@protocol OS_dispatch_semaphore, OS_dispatch_source, OS_dispatch_queue, CSExclaveAudioProvidingDelegate;

@interface CSExclaveRecordClient : NSObject <CSExclaveAudioProviding, CSExclaveFirstPassVoiceTriggerAnalyzing, CSExclaveSecondPassVoiceTriggerAnalyzing, CSExclaveAssetsControlling, CSExclaveAdBlockerAnalyzing> {
    CSSecureSiriAudioProvidingProxy *_audioProvidingProxy;
}

@property (weak, nonatomic) id<CSExclaveAudioProvidingDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *setupSem;
@property (nonatomic) BOOL isSetupComplete;
@property (nonatomic) BOOL isRecording;
@property (retain, nonatomic) CSExclaveIndicatorController *exclaveIndicatorController;
@property (nonatomic) unsigned long long audioCallbackLogHeartbeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (void)reset;
- (void)_setup;
- (unsigned long long)stopSensor;
- (id)init;
- (unsigned long long)startSensor;
- (BOOL)prepare;
- (void).cxx_destruct;
- (BOOL)configAOPVoiceTrigger;
- (void)deinitializeSecondPass;
- (void)fetchAOPVoiceTriggerResult:(id /* block */)a0;
- (BOOL)initializeSecondPass;
- (void)processBargeInVoiceTriggerWithResult:(id /* block */)a0;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(BOOL)a0 result:(id /* block */)a1;
- (void)resetFirstPassVoiceTrigger;
- (void)setAssetForLocale:(id)a0 isOTA:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)setSpeakerProfile:(id)a0 numEmbeddings:(unsigned long long)a1 dimension:(unsigned long long)a2 speakerRecognizerType:(unsigned long long)a3;
- (void)startBargeInVoiceTrigger;
- (void)startSecondPassVoiceTriggerWithFirstPassSource:(unsigned long long)a0 enablePHS:(BOOL)a1 supportMultiPhrase:(BOOL)a2 activeChannel:(unsigned int)a3;
- (void)stopBargeInVoiceTrigger;
- (void)stopSecondPassVoiceTrigger;
- (void)adBlockerMatchingInProgress:(id /* block */)a0;
- (void)adBlockerReset;
- (BOOL)fetchAndStoreAudioBuffer;
- (void)setAdBlockerAsset:(id /* block */)a0;
- (void)startAdBlockerMatching;
- (void)startSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)startSecureMobileAssetLoaderService:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopAdBlockerMatching;
- (void)stopSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;
- (BOOL)_verifySetupComplete;
- (unsigned long long)currentSensorStatus;
- (void)requestHistoricalAudioBufferFor:(unsigned long long)a0 startSample:(unsigned long long)a1 numSamples:(unsigned long long)a2 hostTime:(unsigned long long)a3;

@end
