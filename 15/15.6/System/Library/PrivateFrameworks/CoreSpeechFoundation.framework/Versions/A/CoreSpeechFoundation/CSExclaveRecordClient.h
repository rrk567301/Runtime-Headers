@class CSExclaveIndicatorController, NSString, CSSecureSiriAudioProvidingProxy, NSObject;
@protocol CSExclaveAudioProvidingDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface CSExclaveRecordClient : NSObject <CSExclaveAudioProviding, CSExclaveFirstPassVoiceTriggerAnalyzing, CSExclaveSecondPassVoiceTriggerAnalyzing, CSExclaveAssetsControlling, CSExclaveAdBlockerAnalyzing> {
    CSSecureSiriAudioProvidingProxy *_audioProvidingProxy;
}

@property (weak, nonatomic) id<CSExclaveAudioProvidingDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char isRecording;
@property (retain, nonatomic) CSExclaveIndicatorController *exclaveIndicatorController;
@property (nonatomic) unsigned long long audioCallbackLogHeartbeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (char)prepare;
- (char)configAOPVoiceTrigger;
- (void)deinitializeSecondPass;
- (void)fetchAOPVoiceTriggerResult:(id /* block */)a0;
- (char)initializeSecondPass;
- (void)processBargeInVoiceTriggerWithResult:(id /* block */)a0;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(char)a0 result:(id /* block */)a1;
- (void)resetFirstPassVoiceTrigger;
- (void)setAssetForLocale:(id)a0 isOTA:(char)a1 completion:(id /* block */)a2;
- (char)setSpeakerProfile:(id)a0 numEmbeddings:(unsigned long long)a1 dimension:(unsigned long long)a2 speakerRecognizerType:(unsigned long long)a3;
- (void)startBargeInVoiceTrigger;
- (void)startSecondPassVoiceTriggerWithFirstPassSource:(unsigned long long)a0 enablePHS:(char)a1 supportMultiPhrase:(char)a2 activeChannel:(unsigned int)a3;
- (void)stopBargeInVoiceTrigger;
- (void)stopSecondPassVoiceTrigger;
- (unsigned long long)startSensor;
- (unsigned long long)stopSensor;
- (void)adBlockerMatchingInProgress:(id /* block */)a0;
- (void)adBlockerReset;
- (char)fetchAndStoreAudioBuffer;
- (void)setAdBlockerAsset:(id /* block */)a0;
- (void)startAdBlockerMatching;
- (void)startSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)startSecureMobileAssetLoaderService:(char)a0 completion:(id /* block */)a1;
- (void)stopAdBlockerMatching;
- (void)stopSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;
- (unsigned long long)currentSensorStatus;
- (void)requestHistoricalAudioBufferFor:(unsigned long long)a0 startSample:(unsigned long long)a1 numSamples:(unsigned long long)a2 hostTime:(unsigned long long)a3;

@end
